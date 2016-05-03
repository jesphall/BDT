
{
    gROOT->Reset();
    
    THStack *hs = new THStack("top_pt","top_pt");
    
    TFile *file410000 = TFile::Open("../output/410000_ttbar_hdamp172p5_nonallhad.root");
    TH1D *h410000 = (TH1D*)file410000->Get("top_pt");
    h410000->SetFillColor(kGreen);
    hs->Add(h410000);
    
    TFile *file341540 = TFile::Open("../output/341540_signal_2000GeV.root");
    TH1D *h341540 = (TH1D*)file341540->Get("top_pt");
    h341540->SetFillColor(kRed);
    hs->Add(h341540);
    
    TCanvas *c1 = new TCanvas("c1","top_pt",700,400);
    hs->Draw("hist");
    
    //legend
    leg = new TLegend(0.7,0.7,0.9,0.9);
    leg->SetHeader("From file");
    leg->AddEntry(h410000,"410000","f");
    leg->AddEntry(h341540,"341540","f");
    leg->Draw();
    
    
    c1->Update();
    
    TImage *img = TImage::Create();
    
    img->FromPad(c1);
    img->WriteImage("../hist/top_pt.png");
    
    c1->Close();

    

}
