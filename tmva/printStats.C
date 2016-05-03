{
    /* printStats.C
     This prints the K-S test results and separation for the BDT and MT_tau_met.
     It's useful code that can be copied in to other scripts where you want to access those numbers, or just print the numbers
     */
    
    TFile *file = TFile::Open("output_temp/3.root");
    
    TH1D *sigG = (TH1D*)file->Get("Method_BDT/BDTG/MVA_BDTG_S");
    TH1D *bgdG = (TH1D*)file->Get("Method_BDT/BDTG/MVA_BDTG_B");
    
    TH1D *sigGT = (TH1D*)file->Get("Method_BDT/BDTG/MVA_BDTG_Train_S");
    TH1D *bgdGT = (TH1D*)file->Get("Method_BDT/BDTG/MVA_BDTG_Train_B");
    
    kolS = sigG->KolmogorovTest( sigGT, "X");
    kolB = bgdG->KolmogorovTest( bgdGT, "X");
    kolClassicS = sigG->KolmogorovTest( sigGT );
    kolClassicB = bgdG->KolmogorovTest( bgdGT );
    kolDistS = sigG->KolmogorovTest( sigGT, "M" );
    kolDistB = bgdG->KolmogorovTest( bgdGT, "M" );
    
    cout << "\t \t  Goodness of signal (background) consistency: \t"  << kolS << " (" << kolB << ")" << endl;
    cout << "(Classical) Goodness of signal (background) consistency: \t" << kolClassicS << " (" << kolClassicB << ")" << endl;
    cout << "\t \t \t  K-S distance signal (background): \t" << kolDistS << " (" << kolDistB << ")" << endl;
    
    
    //separation
    S2 = 0.;
    for (int ibin = 1; ibin <= sigG->GetNbinsX(); ++ibin) {
        double ys = sigG->GetBinContent(ibin)/sigG->Integral();
        double yb = bgdG->GetBinContent(ibin)/bgdG->Integral();
        S2 += 0.5*(ys-yb)*(ys-yb)/(ys+yb);
    }
    cout << "Separation <S^2> = " << S2 << endl;
    
    TH1D *MTsig = (TH1D*)file->Get("InputVariables_Id/MT_tau_met__Signal_Id");
    TH1D *MTbgd = (TH1D*)file->Get("InputVariables_Id/MT_tau_met__Background_Id");
    
    MTS2 = 0.;
    for (int ibin = 1; ibin <= MTsig->GetNbinsX(); ++ibin) {
        double ys = MTsig->GetBinContent(ibin)/MTsig->Integral();
        double yb = MTbgd->GetBinContent(ibin)/MTbgd->Integral();
        if (ys == 0 && yb == 0) continue;
        MTS2 += 0.5*(ys-yb)*(ys-yb)/(ys+yb);
    }
    
    cout << "MT_tau_met separation <S^2> = " << MTS2 << endl;
    
}