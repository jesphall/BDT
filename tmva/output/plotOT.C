{
    /* plotOT.C
     This creates log-plots of the training- and test-samples superimposed,
     with some stats in the legend.
     It's good for looking at overtraining in tails
     */
    
    TFile *file = TFile::Open("1000GeV/noAng.root");
    
    TH1D *sigTest = (TH1D*)file->Get("Method_BDT/BDTG/MVA_BDTG_S");
    sigTest->SetFillColorAlpha(kBlue,0.5);
    sigTest->SetFillStyle(3253);
    sigTest->SetMaximum(60);
    sigTest->SetStats(false);
    sigTest->SetNameTitle("blabla", "Training and test data superimposed");
    sigTest->SetXTitle("BTDG response");
    sigTest->SetYTitle("Log (1/N) dN/dx");
    
    TH1D *bgdTest = (TH1D*)file->Get("Method_BDT/BDTG/MVA_BDTG_B");
    bgdTest->SetFillColorAlpha(kRed,0.5);
    bgdTest->SetMaximum(60);
    bgdTest->SetStats(false);
    
    TH1D *sigTrain = (TH1D*)file->Get("Method_BDT/BDTG/MVA_BDTG_Train_S");
    sigTrain->SetLineColor(kBlue);
    sigTrain->SetLineWidth(2);
    sigTrain->SetStats(false);
    
    TH1D *bgdTrain = (TH1D*)file->Get("Method_BDT/BDTG/MVA_BDTG_Train_B");
    bgdTrain->SetLineColor(kRed);
    bgdTrain->SetLineWidth(2);
    bgdTrain->SetStats(false);
    
    
    
    
    //calculate consistency, separation and format output
    kolS = sigTest->KolmogorovTest( sigTrain, "X");
    kolB = bgdTest->KolmogorovTest( bgdTrain, "X");
    kolClassicS = sigTest->KolmogorovTest( sigTrain );
    kolClassicB = bgdTest->KolmogorovTest( bgdTrain );
    kolDistS = sigTest->KolmogorovTest( sigTrain, "M" );
    kolDistB = bgdTest->KolmogorovTest( bgdTrain, "M" );
    
    string kol = "Goodness of signal (background) consistency: " + to_string(kolS) + " (" + to_string(kolB) + ")";
    const char * kolSchar = kol.c_str();
    
    string Clakol = "(Classical) Goodness of signal (background) consistency: " + to_string(kolClassicS) + " (" + to_string(kolClassicB) + ")";
    const char * ClakolSchar = Clakol.c_str();
    
    string Diskol = "K-S distance signal (background) " + to_string(kolDistS) + " (" + to_string(kolDistB) + ")";
    const char * DiskolSchar = Diskol.c_str();
    
    cout << "\t \t  Goodness of signal (background) consistency: \t"  << kolS << " (" << kolB << ")" << endl;
    cout << "(Classical) Goodness of signal (background) consistency: \t" << kolClassicS << " (" << kolClassicB << ")" << endl;
    cout << "\t \t \t  K-S distance signal (background): \t" << kolDistS << " (" << kolDistB << ")" << endl;
    
    
    S2 = 0.;
    for (int ibin = 1; ibin <= sigTest->GetNbinsX(); ++ibin) {
        double ys = sigTest->GetBinContent(ibin)/sigTest->Integral();
        double yb = bgdTest->GetBinContent(ibin)/bgdTest->Integral();
        S2 += 0.5*(ys-yb)*(ys-yb)/(ys+yb);
    }
    cout << "Separation <S^2> = " << S2 << endl;

    TH1D *MTsig = (TH1D*)file->Get("InputVariables_Id/MT_tau_met__Signal_Id");
    TH1D *MTbgd = (TH1D*)file->Get("InputVariables_Id/MT_tau_met__Background_Id");
    
    MTS2 = 0.679460;
//    for (int ibin = 1; ibin <= MTsig->GetNbinsX(); ++ibin) {
//        double ys = MTsig->GetBinContent(ibin)/MTsig->Integral();
//        double yb = MTbgd->GetBinContent(ibin)/MTbgd->Integral();
//        if (ys == 0 && yb == 0) continue;
//        MTS2 += 0.5*(ys-yb)*(ys-yb)/(ys+yb);
//    }
    
    string sep = "Separation <S^2>: " + to_string(S2);
    const char * sepchar = sep.c_str();
    string MTsep = "MT_tau_met separation <S^2>: " + to_string(MTS2);
    const char * MTsepchar = MTsep.c_str();
    
    
    TCanvas *c1 = new TCanvas("c1","Training and test data superimposed",1000,600);
    c1->SetLogy();
    
    //draw stuff
    sigTest->Draw("HIST");
    bgdTest->Draw("HIST" "SAME");
    sigTrain->Draw("SAME");
    bgdTrain->Draw("SAME");
    
    TLegend *leg = new TLegend(0.1,0.75,0.9,0.9);
    leg->SetNColumns(2);
    leg->AddEntry(bgdTest,"Background (test sample)","f");
    leg->AddEntry(bgdTrain,"Background (training sample)","lep");
    leg->AddEntry(sigTest,"Signal (test sample)","f");
    leg->AddEntry(sigTrain,"Signal (training sample)","lep");
    leg->AddEntry((TObject*)0, kolSchar, "");
    leg->AddEntry((TObject*)0, sepchar, "");
    leg->AddEntry((TObject*)0, ClakolSchar, "");
    leg->AddEntry((TObject*)0, MTsepchar, "");
    leg->AddEntry((TObject*)0, DiskolSchar, "");
    leg->SetTextFont(62);
    leg->SetTextSize(0.02);
    
    leg->Draw();
    c1->Update();
    
    TImage *img = TImage::Create();
    img->FromPad(c1);
    img->WriteImage("plots/1000noAngOT.png");
    
    
}