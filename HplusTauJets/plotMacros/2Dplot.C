{
    /* 2Dplot.C
     This is just a code made to check correlations between two some variables.
     It is probably more useful to use the built-in TMVA scatter plots
     */
    
    //add fakes and remove fake-fakes
    TFile *fileFakes = TFile::Open("../output/fakes_.root");
    TH2D *h2fakes = (TH2D*)fileFakes->Get("h2");
    TH2D *h3fakes = (TH2D*)fileFakes->Get("h3");
    TH2D *h4fakes = (TH2D*)fileFakes->Get("h4");
    TH2D *h5fakes = (TH2D*)fileFakes->Get("h5");
    TH2D *h6fakes = (TH2D*)fileFakes->Get("h6");
    TH2D *h7fakes = (TH2D*)fileFakes->Get("h7");

    TFile *fileAll = TFile::Open("../output/all.root");
    TH2D *h2all = (TH2D*)fileAll->Get("h2");
    TH2D *h3all = (TH2D*)fileAll->Get("h3");
    TH2D *h4all = (TH2D*)fileAll->Get("h4");
    TH2D *h5all = (TH2D*)fileAll->Get("h5");
    TH2D *h6all = (TH2D*)fileAll->Get("h6");
    TH2D *h7all = (TH2D*)fileAll->Get("h7");

//    TFile *file361081 = TFile::Open("../output/diboson.root");
//    TH1D *dPtNoAbsDiboson = (TH1D*)file361081->Get("dPt_jet1_bjet1_noAbs");
//    TH1D *metPtDiboson = (TH1D*)file361081->Get("met_pt");
//    
//    TFile *fileWZemu = TFile::Open("../output/WZemu.root");
//    TH1D *dPtNoAbsWZemu = (TH1D*)fileWZemu->Get("dPt_jet1_bjet1_noAbs");
//    TH1D *metPtWZemu = (TH1D*)fileWZemu->Get("met_pt");

    TFile *fileWZtau = TFile::Open("../output/WZtau.root");
    TH2D *h2tau = (TH2D*)fileWZtau->Get("h2");
    TH2D *h3tau = (TH2D*)fileWZtau->Get("h3");
    TH2D *h4tau = (TH2D*)fileWZtau->Get("h4");
    TH2D *h5tau = (TH2D*)fileWZtau->Get("h5");
    TH2D *h6tau = (TH2D*)fileWZtau->Get("h6");
    TH2D *h7tau = (TH2D*)fileWZtau->Get("h7");

    TFile *fileT = TFile::Open("../output/t.root");
    TH2D *h2t = (TH2D*)fileT->Get("h2");
    TH2D *h3t = (TH2D*)fileT->Get("h3");
    TH2D *h4t = (TH2D*)fileT->Get("h4");
    TH2D *h5t = (TH2D*)fileT->Get("h5");
    TH2D *h6t = (TH2D*)fileT->Get("h6");
    TH2D *h7t = (TH2D*)fileT->Get("h7");

    //create canvas and draw
    TCanvas *c1 = new TCanvas("c1","",1000,600);
    c1->Divide(3,2);
    c1->cd(1);
    h3all->Draw();
    TF1* f1 = new TF1("f","pol1",100,500);
    h3all->Fit(f1,"R");
    
    c1->cd(2);
    h4all->Draw();
    TF1* f2 = new TF1("f","pol1",100,500);
    h4all->Fit(f2,"R");
    
    c1->cd(3);
    h5all->Draw();
    TF1* f3 = new TF1("f","pol1",100,500);
    h5all->Fit(f3,"R");
    
    c1->cd(4);
    h6all->Draw();
    TF1* f4 = new TF1("f","pol1",100,500);
    h6all->Fit(f4,"R");
    
    c1->cd(5);
    h7all->Draw();
    TF1* f5 = new TF1("f","pol1",100,500);
    h7all->Fit(f5,"R");
    

    
    std::cout << " ---------- abs(dPt) ---------- " << std::endl;
    std::cout << "W/Z->tau correlation factor: " << h3tau->GetCorrelationFactor(1,2) << std::endl;
    std::cout << "t+ttbar correlation factor diff: " << h3t->GetCorrelationFactor(1,2) << std::endl;
    std::cout << "fakes correlation factor diff: " << h3fakes->GetCorrelationFactor(1,2) << std::endl;
    std::cout << "combined correlation factor diff: " << h3all->GetCorrelationFactor(1,2) << std::endl;
    
    std::cout << " ---------- jet1_pt - met_pt > 0 ---------- " << std::endl;
    std::cout << "W/Z->tau correlation factor: " << h4tau->GetCorrelationFactor(1,2) << std::endl;
    std::cout << "t+ttbar correlation factor diff: " << h4t->GetCorrelationFactor(1,2) << std::endl;
    std::cout << "fakes correlation factor diff: " << h4fakes->GetCorrelationFactor(1,2) << std::endl;
    std::cout << "combined correlation factor diff: " << h4all->GetCorrelationFactor(1,2) << std::endl;
    
    std::cout << " ---------- jet1_pt - met_pt < 0 ---------- " << std::endl;
    std::cout << "W/Z->tau correlation factor: " << h5tau->GetCorrelationFactor(1,2) << std::endl;
    std::cout << "t+ttbar correlation factor diff: " << h5t->GetCorrelationFactor(1,2) << std::endl;
    std::cout << "fakes correlation factor diff: " << h5fakes->GetCorrelationFactor(1,2) << std::endl;
    std::cout << "combined correlation factor diff: " << h5all->GetCorrelationFactor(1,2) << std::endl;
    
    std::cout << " ---------- jet1_pt ---------- " << std::endl;
    std::cout << "W/Z->tau correlation factor: " << h6tau->GetCorrelationFactor(1,2) << std::endl;
    std::cout << "t+ttbar correlation factor diff: " << h6t->GetCorrelationFactor(1,2) << std::endl;
    std::cout << "fakes correlation factor diff: " << h6fakes->GetCorrelationFactor(1,2) << std::endl;
    std::cout << "combined correlation factor diff: " << h6all->GetCorrelationFactor(1,2) << std::endl;
    
    std::cout << " ---------- bjet1_pt ---------- " << std::endl;
    std::cout << "W/Z->tau correlation factor: " << h7tau->GetCorrelationFactor(1,2) << std::endl;
    std::cout << "t+ttbar correlation factor diff: " << h7t->GetCorrelationFactor(1,2) << std::endl;
    std::cout << "fakes correlation factor diff: " << h7fakes->GetCorrelationFactor(1,2) << std::endl;
    std::cout << "combined correlation factor diff: " << h7all->GetCorrelationFactor(1,2) << std::endl;
    
    
    //add all signals
//    TFile *file341524 = TFile::Open("../output/341524_signal_200GeV.root");
//    TH1D *hSig = (TH1D*)file341524->Get("dPt_jet1_bjet1_noAbs");
//    hSig->SetLineColor(2);
//    hSig->SetLineWidth(2);
//    hSig->SetLineStyle(1);
//    
//    
//    hs->SetMaximum(hs->GetMaximum()*2);
//    hs->Draw("hist");
//    hs->GetXaxis()->SetTitle(hSig->GetXaxis()->GetTitle());
//    hs->GetYaxis()->SetTitle(hSig->GetYaxis()->GetTitle());
//    hs->SetTitle(h341524->GetTitle());
//    h341524->DrawNormalized("hist:same",norm);
//    hData->Draw("same");
    
    
    
    
    //legend
//    TLegend *leg1 = new TLegend(0.68,0.6,0.98,0.95);
//    //leg1->SetHeader("From file");
//    //leg1->SetNColumns(2);
//    leg1->AddEntry(h410000,"ttbar + single top","f");
//    leg1->Draw();
    
    
    c1->Update();
    
}
