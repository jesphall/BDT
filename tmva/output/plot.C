{
    /* plot.C
     This plots several ROC-curves in the same frame.
     Also calculates the ROC-curve for MT_tau_met and plots that.
     Change the TFile paths and the legend to change target.
     */
    
    TFile *all = TFile::Open("1000GeV/final.root");
    TH1D *h0 = (TH1D*)all->Get("Method_BDT/BDTG/MVA_BDTG_rejBvsS");
    h0->SetLineColor(kRed);
    h0->SetLineWidth(3);
    h0->SetStats(false);

    TFile *f1 = TFile::Open("1000GeV/noAng.root");
    TH1D *h1 = (TH1D*)f1->Get("Method_BDT/BDTG/MVA_BDTG_rejBvsS");
    h1->SetLineColor(kGreen);
    h1->SetLineWidth(3);
    h1->SetStats(false);

//    TFile *f2 = TFile::Open("200GeV/3.root");
//    TH1D *h2 = (TH1D*)f2->Get("Method_BDT/BDTG/MVA_BDTG_rejBvsS");
//    h2->SetLineColor(kMagenta);
//    h2->SetLineWidth(3);
//    h2->SetStats(false);
//
//    TFile *f3 = TFile::Open("200GeV/4.root");
//    TH1D *h3 = (TH1D*)f3->Get("Method_BDT/BDTG/MVA_BDTG_rejBvsS");
//    h3->SetLineColor(kBlue);
//    h3->SetLineWidth(3);
//    h3->SetStats(false);
//
//    TFile *f4 = TFile::Open("200GeV/6.root");
//    TH1D *h4 = (TH1D*)f4->Get("Method_BDT/BDTG/MVA_BDTG_rejBvsS");
//    h4->SetLineColor(kCyan);
//    h4->SetLineWidth(3);

//    TFile *f5 = TFile::Open("350GeV/10var_cut1_weighted.root");
//    TH1D *h5 = (TH1D*)f5->Get("Method_BDT/BDT/MVA_BDT_rejBvsS");
//    h5->SetLineColor(kMagenta);
//    h5->SetLineWidth(3);
//
//    TFile *f6 = TFile::Open("350GeV/10var_cut2_unweighted.root");
//    TH1D *h6 = (TH1D*)f6->Get("Method_BDT/BDT/MVA_BDT_rejBvsS");
//    h6->SetLineColor(kBlack);
//    h6->SetLineWidth(3);
//    
//    TFile *f7 = TFile::Open("350GeV/10var_cut2_weighted.root");
//    TH1D *h7 = (TH1D*)f7->Get("Method_BDT/BDT/MVA_BDT_rejBvsS");
//    h7->SetLineColor(kGray);
//    h7->SetLineWidth(3);
    
    TH1D *MTsig = (TH1D*)all->Get("InputVariables_Id/MT_tau_met__Signal_Id");
    TH1D *MTbgd = (TH1D*)all->Get("InputVariables_Id/MT_tau_met__Background_Id");
    TH1D *MTroc = new TH1D("MTroc","MTroc",100,0,1);
    MTroc->SetMarkerStyle(8);
    double ys = 1;
    double yb = 1;
    int bin = 0;
    
    for (int ibin = 1; ibin <= MTsig->GetNbinsX(); ++ibin) {
        ys = ys - MTsig->GetBinContent(ibin)/MTsig->Integral();
        yb = yb - MTbgd->GetBinContent(ibin)/MTbgd->Integral();
        if (ys<0.5) continue;
        bin = (int)(ys*100+0.5);
        MTroc->SetBinContent(bin,1-yb);
    }

    
    
    
    //old way
//    for (int ibin = 1; ibin <= MTsig->GetNbinsX(); ++ibin) {
//        ys = ys - MTsig->GetBinContent(ibin)/MTsig->Integral();
//        yb = yb + MTbgd->GetBinContent(ibin)/MTbgd->Integral();
//        MTroc->Fill(ys,yb);
//    }
//    MTroc->SetLineColor(kBlack);
//    MTroc->SetMarkerStyle(8);

    
    TCanvas *c1 = new TCanvas("c1","ROCs",800,500);
    
    h0->Draw("L");
    h0->GetXaxis()->SetRangeUser(.85,1);
    h0->GetYaxis()->SetRangeUser(.85,1);
    h0->SetTitle("ROC curves, 1000 GeV");
    h1->Draw("L" "SAME");
//    h2->Draw("L" "SAME");
//    h3->Draw("L" "SAME");
//    h4->Draw("L" "SAME");
    MTroc->Draw("P" "SAME");
//    h5->Draw("L" "SAME");
//    h6->Draw("L" "SAME");
//    h7->Draw("L" "SAME");
//    
    TLegend *leg = new TLegend(0.11,0.11,0.5,0.3);
    leg->AddEntry(h0,"6 best variables","l");

    leg->AddEntry(h1,"6 best variables, no angular","l");

//    leg->AddEntry(h2,"no mT in training","l");
//    leg->AddEntry(h3,"no angular variables","l");
//    leg->AddEntry(h4,"7 variables + dPt","l");
    leg->AddEntry(MTroc,"MT_tau_met","p");
//    leg->AddEntry(h5,"350 GeV cut1 weight","l");
//    leg->AddEntry(h6,"350 GeV cut2 unweight","l");
//    leg->AddEntry(h7,"350 GeV cut2 weight","l");
    leg->Draw();
    c1->Update();
    
    
}