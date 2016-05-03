
{
    gROOT->Reset();
    
    THStack *H_phi = new THStack("H_phi","H_phi");
    
    TFile *file410000 = TFile::Open("../output/410000_ttbar_hdamp172p5_nonallhad.root");
    TH1D *h410000 = (TH1D*)file410000->Get("H_phi");
    h410000->SetFillColor(kGreen);
    H_phi->Add(h410000);
    
    TFile *file341540 = TFile::Open("../output/341540_signal_2000GeV.root");
    TH1D *h341540 = (TH1D*)file341540->Get("H_phi");
    h341540->SetFillColor(kRed);
    H_phi->Add(h341540);
    
    TCanvas *c1 = new TCanvas("c1","H_phi",700,400);
    H_phi->Draw("hist");
    
    //legend
    leg = new TLegend(0.7,0.7,0.9,0.9);
    leg->SetHeader("From file");
    leg->AddEntry(h410000,"410000","f");
    leg->AddEntry(h341540,"341540","f");
    leg->Draw();
    
    
    c1->Update();
    
    TImage *img = TImage::Create();
    
    img->FromPad(c1);
    img->WriteImage("../hist/H_phi.png");
    
}
