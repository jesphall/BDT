{
    
    TFile *file = TFile::Open("output_temp/1.root");
    
    
    TH1D *jet1sig = (TH1D*)file->Get("InputVariables_Id/jet1_pt__Signal_Id");
    TH1D *jet1bgd = (TH1D*)file->Get("InputVariables_Id/jet1_pt__Background_Id");
    
    j1S2 = 0.;
    for (int ibin = 1; ibin <= jet1sig->GetNbinsX(); ++ibin) {
        double ys = jet1sig->GetBinContent(ibin)/jet1sig->Integral();
        double yb = jet1bgd->GetBinContent(ibin)/jet1bgd->Integral();
        if (ys == 0 && yb == 0) continue;
        j1S2 += 0.5*(ys-yb)*(ys-yb)/(ys+yb);
    }
    
    cout << "jet1_pt separation <S^2> = " << j1S2 << endl;
    
    TH1D *jet2sig = (TH1D*)file->Get("InputVariables_Id/jet2_pt__Signal_Id");
    TH1D *jet2bgd = (TH1D*)file->Get("InputVariables_Id/jet2_pt__Background_Id");
    
    j2S2 = 0.;
    for (int ibin = 1; ibin <= jet2sig->GetNbinsX(); ++ibin) {
        double ys = jet2sig->GetBinContent(ibin)/jet2sig->Integral();
        double yb = jet2bgd->GetBinContent(ibin)/jet2bgd->Integral();
        if (ys == 0 && yb == 0) continue;
        j2S2 += 0.5*(ys-yb)*(ys-yb)/(ys+yb);
    }
    
    cout << "jet2_pt separation <S^2> = " << j2S2 << endl;
    
}