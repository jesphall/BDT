{
    /* fullFastPlot.C
     This code is to compare the shapes of the full/fast-sim ntuples.
     It works fine but should be expanded with more variables.
     */
    
    TFile *file341524 = TFile::Open("../output/fullSim_sig/341524_signal_200GeV.root");
    TH1D *hMT_full = (TH1D*)file341524->Get("MT_tau_met");
    hMT_full->SetStats(false);
    TFile *file341524_ = TFile::Open("../output/fastSim_sig/341524_signal_200GeV.root");
    TH1D *hMT_fast = (TH1D*)file341524_->Get("MT_tau_met");
    hMT_fast->SetStats(false);
    
    
    
    TCanvas *c1 = new TCanvas("c1","test",800,500);
    
    hMT_fast->SetTitle("200 GeV");
    hMT_fast->SetMaximum(hMT_fast->GetMaximum()*2);
    hMT_fast->SetLineColor(kRed);
    hMT_fast->Draw("HIST");
    hMT_full->DrawNormalized("SAME",hMT_fast->Integral());
    
}