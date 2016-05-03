{
    /* compPlot.C
     This creates a plot where separation for different masses and different models are shown.
     Everything is done manually.
     */
 
    Float_t xbins[5] = {100,300,500,700,1300};
    Float_t xbins2[19] {187.5,212.5,237.5,262.5,287.5,312.5,387.5,412.5,587.5,612.5,787.5,812.5,987.5,1012.5,1387.5,1412.5,1787.5,1812.5,2187.5};

    TH1D *best = new TH1D("separation comparison","separation comparison",4,xbins);
    best->SetBinContent(1,0.662233);
    best->SetBinContent(2,0.859546);
    best->SetBinContent(3,0.917573);
    best->SetBinContent(4,0.955119);
    best->SetLineColor(kRed);
    best->SetMarkerColor(kRed);
    best->SetLineWidth(3);
    best->SetStats(false);
    best->SetMarkerStyle(5);
    best->SetMarkerSize(3);

    TH1D *noAng = new TH1D("separation comparison","separation comparison",4,xbins);
    noAng->SetBinContent(1,0.640896);
    noAng->SetBinContent(2,0.851304);
    noAng->SetBinContent(3,0.907795);
    noAng->SetBinContent(4,0.941527);
    noAng->SetLineColor(kGreen+1);
    noAng->SetMarkerColor(kGreen+1);
    noAng->SetMarkerSize(3);
    noAng->SetLineWidth(3);
    noAng->SetStats(false);
    noAng->SetMarkerStyle(2);
    noAng->SetXTitle("mass [GeV]");
    noAng->SetYTitle("Separation <S^2>");

    TH1D *MT = new TH1D("separation comparison","Separation comparison",18,xbins2);
    MT->SetBinContent(1,0.501725);
    MT->SetBinContent(2,0.549886);
    MT->SetBinContent(3,0.643385);
    MT->SetBinContent(4,0.681434);
    MT->SetBinContent(5,0.719222);
    MT->SetBinContent(6,0.768152);
    MT->SetBinContent(7,0.80963);
    MT->SetBinContent(8,0.83458);
    MT->SetBinContent(9,0.87493);
    MT->SetBinContent(10,0.879875);
    MT->SetBinContent(11,0.904652);
    MT->SetBinContent(12,0.9035);
    MT->SetBinContent(13,0.919296);
    MT->SetBinContent(14,0.92454);
    MT->SetBinContent(15,0.934419);
    MT->SetBinContent(16,0.939662);
    MT->SetBinContent(17,0.947655);
    MT->SetBinContent(18,0.938491);
    MT->SetLineColor(kBlack);
    MT->SetLineWidth(3);
    MT->SetStats(false);
    MT->SetXTitle("mass [GeV]");
    MT->SetYTitle("Separation <S^2>");
    
    TH1D *all = new TH1D("all","all",18,xbins2);
    all->SetBinContent(1,0.647732);
    all->SetBinContent(2,0.691512);
    all->SetBinContent(3,0.73797);
    all->SetBinContent(4,0.784694);
    all->SetBinContent(5,0.801096);
    all->SetBinContent(6,0.839256);
    all->SetBinContent(7,0.859546);
    all->SetBinContent(8,0.889841);
    all->SetBinContent(9,0.917573);
    all->SetBinContent(10,0.931321);
    all->SetBinContent(11,0.941657);
    all->SetBinContent(12,0.951472);
    all->SetBinContent(13,0.946539);
    all->SetBinContent(14,0.957655);
    all->SetBinContent(15,0.974728);
    all->SetBinContent(16,0.968691);
    all->SetBinContent(17,0.971285);
    all->SetBinContent(18,0.973761);
    all->SetLineWidth(3);

    TCanvas *c1 = new TCanvas("c1","ROCs",800,500);
            MT->Draw("L" "SAME");

//    MT->GetXaxis()->SetRangeUser(100,1100);
    MT->GetYaxis()->SetRangeUser(.45,1);
    noAng->Draw("P" "SAME");
    best->Draw("P" "SAME");
    all->Draw("L" "SAME");

    TLegend *leg = new TLegend(0.6,0.1,0.9,0.3);
    leg->AddEntry(best,"Best combination of variables","p");
    leg->AddEntry(noAng,"Best combination without angular","p");
    leg->AddEntry(all,"Fixed set of 6 variables","l");
    leg->AddEntry(MT,"MT_tau_met","l");
    leg->Draw();
    c1->Update();
    
}