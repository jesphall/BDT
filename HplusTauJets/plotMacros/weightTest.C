{
    /* weightTest.C
     I created this to compare the shapes of positive and negative weighted events in the signal ntuples.
     It works fine but should be used with fast-sim samples.
     Full-sim samples yields large error bars and it's hard to learn anything from it.
     */
    
    TFile *file341524 = TFile::Open("../output/negWeight/341524_signal_200GeV.root");
    TH1D *neg200 = (TH1D*)file341524->Get("MT_tau_met");
    neg200->SetStats(false);
    TFile *file341524_ = TFile::Open("../output/posWeight/341524_signal_200GeV.root");
    TH1D *pos200 = (TH1D*)file341524_->Get("MT_tau_met");
    pos200->SetStats(false);
    
    TFile *file341531 = TFile::Open("../output/negWeight/341531_signal_600GeV.root");
    TH1D *neg600 = (TH1D*)file341531->Get("MT_tau_met");
    neg600->SetStats(false);
    TFile *file341531_ = TFile::Open("../output/posWeight/341531_signal_600GeV.root");
    TH1D *pos600 = (TH1D*)file341531_->Get("MT_tau_met");
    pos600->SetStats(false);
    
    TFile *file341003 = TFile::Open("../output/negWeight/341003_signal_400GeV.root");
    TH1D *neg400 = (TH1D*)file341003->Get("MT_tau_met");
    neg400->SetStats(false);
    TFile *file341003_ = TFile::Open("../output/posWeight/341003_signal_400GeV.root");
    TH1D *pos400 = (TH1D*)file341003_->Get("MT_tau_met");
    pos400->SetStats(false);
    
    TFile *file341535 = TFile::Open("../output/negWeight/341535_signal_1000GeV.root");
    TH1D *neg1000 = (TH1D*)file341535->Get("MT_tau_met");
    neg1000->SetStats(false);
    TFile *file341535_ = TFile::Open("../output/posWeight/341535_signal_1000GeV.root");
    TH1D *pos1000 = (TH1D*)file341535_->Get("MT_tau_met");
    pos1000->SetStats(false);

    
    TCanvas *c1 = new TCanvas("c1","test",800,500);
    c1->Divide(2,2);
    
    c1->cd(1);
    pos200->SetTitle("200 GeV");
    pos200->SetMaximum(pos200->GetMaximum()*2);
    pos200->SetLineColor(kRed);
    pos200->Draw("");
    pos200->Draw("SAME" "HIST");
    neg200->DrawNormalized("SAME",pos200->Integral());

    c1->cd(2);
    pos400->SetTitle("400 GeV");
    pos400->SetMaximum(pos400->GetMaximum()*2);
    pos400->SetLineColor(kRed);
    pos400->Draw("");
    pos400->Draw("SAME" "HIST");
    neg400->DrawNormalized("SAME",pos400->Integral());

    c1->cd(3);
    pos600->SetTitle("600 GeV");
    pos600->SetMaximum(pos600->GetMaximum()*2);
    pos600->SetLineColor(kRed);
    pos600->Draw("");
    pos600->Draw("SAME" "HIST");
    neg600->DrawNormalized("SAME",pos600->Integral());

    c1->cd(4);
    pos1000->SetTitle("1000 GeV");
    pos1000->SetMaximum(pos1000->GetMaximum()*2);
    pos1000->SetLineColor(kRed);
    pos1000->Draw("");
    pos1000->Draw("SAME" "HIST");
    neg1000->DrawNormalized("SAME",pos1000->Integral());

    
}