#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLegend.h>
#include <THStack.h>
#include <TFile.h>
#include <TImage.h>
#include <iostream>

/* plotOne.C
 This is semi-copied from plotFunc.C.
 I wanted to make some small changes but still keep plotFunc.C
 plotFunc.C is better to use to produce stacked histograms.
 */

void plotOne(string str){
    
    const char * var = str.c_str();
    
    
    //add all backgrounds to stack and fill
    THStack *hs = new THStack(var,var);
    
    double norm = 0;
    
    //DIBOSON
    double diboson = 0;
    
    //add fakes and remove fake-fakes
    TFile *fileFakes = TFile::Open("../output/fakes_.root");
    TH1D *hFakes = (TH1D*)fileFakes->Get(var);
    
    hFakes->SetFillColor(5);
    hFakes->SetLineColorAlpha(5,0);
    hs->Add(hFakes);
    norm = norm + hFakes->Integral();

    
    TFile *file361081 = TFile::Open("../output/361081_Sherpa_CT10_WplvWmqq.root");
    TH1D *h361081 = (TH1D*)file361081->Get(var);
    h361081->SetFillColor(9);
    h361081->SetLineColorAlpha(9,0);
    hs->Add(h361081);
    norm = norm + h361081->Integral();
    diboson = diboson + h361081->Integral();
    
    TFile *file361082 = TFile::Open("../output/361082_Sherpa_CT10_WpqqWmlv.root");
    TH1D *h361082 = (TH1D*)file361082->Get(var);
    h361082->SetFillColor(9);
    h361082->SetLineColorAlpha(9,0);
    hs->Add(h361082);
    norm = norm + h361082->Integral();
    diboson = diboson + h361082->Integral();
    
    TFile *file361083 = TFile::Open("../output/361083_Sherpa_CT10_WlvZqq.root");
    TH1D *h361083 = (TH1D*)file361083->Get(var);
    h361083->SetFillColor(9);
    h361083->SetLineColorAlpha(9,0);
    hs->Add(h361083);
    norm = norm + h361083->Integral();
    diboson = diboson + h361083->Integral();
    
    TFile *file361084 = TFile::Open("../output/361084_Sherpa_CT10_WqqZll.root");
    TH1D *h361084 = (TH1D*)file361084->Get(var);
    h361084->SetFillColor(9);
    h361084->SetLineColorAlpha(9,0);
    hs->Add(h361084);
    norm = norm + h361084->Integral();
    diboson = diboson + h361084->Integral();
    
    TFile *file361085 = TFile::Open("../output/361085_Sherpa_CT10_WqqZvv.root");
    TH1D *h361085 = (TH1D*)file361085->Get(var);
    h361085->SetFillColor(9);
    h361085->SetLineColorAlpha(9,0);
    hs->Add(h361085);
    norm = norm + h361085->Integral();
    diboson = diboson + h361085->Integral();
    
    TFile *file361086 = TFile::Open("../output/361086_Sherpa_CT10_ZqqZll.root");
    TH1D *h361086 = (TH1D*)file361086->Get(var);
    h361086->SetFillColor(9);
    h361086->SetLineColorAlpha(9,0);
    hs->Add(h361086);
    norm = norm + h361086->Integral();
    diboson = diboson + h361086->Integral();
    
    TFile *file361087 = TFile::Open("../output/361087_Sherpa_CT10_ZqqZvv.root");
    TH1D *h361087 = (TH1D*)file361087->Get(var);
    h361087->SetFillColor(9);
    h361087->SetLineColorAlpha(9,0);
    hs->Add(h361087);
    norm = norm + h361087->Integral();
    diboson = diboson + h361087->Integral();
    
    std::cout << "Diboson contribution: " << diboson << std::endl;
    
    //W/Z->e/mu
    double WZemu = 0;
    
    TFile *file361500 = TFile::Open("../output/361500_Zee_Np0.root");
    TH1D *h361500 = (TH1D*)file361500->Get(var);
    h361500->SetFillColor(7);
    h361500->SetLineColorAlpha(7,0);
    hs->Add(h361500);
    norm = norm + h361500->Integral();
    WZemu = WZemu + h361500->Integral();
    
    TFile *file361501 = TFile::Open("../output/361501_Zee_Np1.root");
    TH1D *h361501 = (TH1D*)file361501->Get(var);
    h361501->SetFillColor(7);
    h361501->SetLineColorAlpha(7,0);
    hs->Add(h361501);
    norm = norm + h361501->Integral();
    WZemu = WZemu + h361501->Integral();
    
    TFile *file361502 = TFile::Open("../output/361502_Zee_Np2.root");
    TH1D *h361502 = (TH1D*)file361502->Get(var);
    h361502->SetFillColor(7);
    h361502->SetLineColorAlpha(7,0);
    hs->Add(h361502);
    norm = norm + h361502->Integral();
    WZemu = WZemu + h361502->Integral();
    
    TFile *file361503 = TFile::Open("../output/361503_Zee_Np3.root");
    TH1D *h361503 = (TH1D*)file361503->Get(var);
    h361503->SetFillColor(7);
    h361503->SetLineColorAlpha(7,0);
    hs->Add(h361503);
    norm = norm + h361503->Integral();
    WZemu = WZemu + h361503->Integral();
    
    TFile *file361504 = TFile::Open("../output/361504_Zee_Np4.root");
    TH1D *h361504 = (TH1D*)file361504->Get(var);
    h361504->SetFillColor(7);
    h361504->SetLineColorAlpha(7,0);
    hs->Add(h361504);
    norm = norm + h361504->Integral();
    WZemu = WZemu + h361504->Integral();
    
    TFile *file361505 = TFile::Open("../output/361505_Zmumu_Np0.root");
    TH1D *h361505 = (TH1D*)file361505->Get(var);
    h361505->SetFillColor(7);
    h361505->SetLineColorAlpha(7,0);
    hs->Add(h361505);
    norm = norm + h361505->Integral();
    WZemu = WZemu + h361505->Integral();
    
    TFile *file361506 = TFile::Open("../output/361506_Zmumu_Np1.root");
    TH1D *h361506 = (TH1D*)file361506->Get(var);
    h361506->SetFillColor(7);
    h361506->SetLineColorAlpha(7,0);
    hs->Add(h361506);
    norm = norm + h361506->Integral();
    WZemu = WZemu + h361506->Integral();
    
    TFile *file361507 = TFile::Open("../output/361507_Zmumu_Np2.root");
    TH1D *h361507 = (TH1D*)file361507->Get(var);
    h361507->SetFillColor(7);
    h361507->SetLineColorAlpha(7,0);
    hs->Add(h361507);
    norm = norm + h361507->Integral();
    WZemu = WZemu + h361507->Integral();
    
    TFile *file361508 = TFile::Open("../output/361508_Zmumu_Np3.root");
    TH1D *h361508 = (TH1D*)file361508->Get(var);
    h361508->SetFillColor(7);
    h361508->SetLineColorAlpha(7,0);
    hs->Add(h361508);
    norm = norm + h361508->Integral();
    WZemu = WZemu + h361508->Integral();
    
    TFile *file361509 = TFile::Open("../output/361509_Zmumu_Np4.root");
    TH1D *h361509 = (TH1D*)file361509->Get(var);
    h361509->SetFillColor(7);
    h361509->SetLineColorAlpha(7,0);
    hs->Add(h361509);
    norm = norm + h361509->Integral();
    WZemu = WZemu + h361509->Integral();
    
    TFile *file361520 = TFile::Open("../output/361520_Wenu_Np0.root");
    TH1D *h361520 = (TH1D*)file361520->Get(var);
    h361520->SetFillColor(7);
    h361520->SetLineColorAlpha(7,0);
    hs->Add(h361520);
    norm = norm + h361520->Integral();
    WZemu = WZemu + h361520->Integral();
    
    TFile *file361521 = TFile::Open("../output/361521_Wenu_Np1.root");
    TH1D *h361521 = (TH1D*)file361521->Get(var);
    h361521->SetFillColor(7);
    h361521->SetLineColorAlpha(7,0);
    hs->Add(h361521);
    norm = norm + h361521->Integral();
    WZemu = WZemu + h361521->Integral();
    
    TFile *file361522 = TFile::Open("../output/361522_Wenu_Np2.root");
    TH1D *h361522 = (TH1D*)file361522->Get(var);
    h361522->SetFillColor(7);
    h361522->SetLineColorAlpha(7,0);
    hs->Add(h361522);
    norm = norm + h361522->Integral();
    WZemu = WZemu + h361522->Integral();
    
    TFile *file361523 = TFile::Open("../output/361523_Wenu_Np3.root");
    TH1D *h361523 = (TH1D*)file361523->Get(var);
    h361523->SetFillColor(7);
    h361523->SetLineColorAlpha(7,0);
    hs->Add(h361523);
    norm = norm + h361523->Integral();
    WZemu = WZemu + h361523->Integral();
    
    TFile *file361524 = TFile::Open("../output/361524_Wenu_Np4.root");
    TH1D *h361524 = (TH1D*)file361524->Get(var);
    h361524->SetFillColor(7);
    h361524->SetLineColorAlpha(7,0);
    hs->Add(h361524);
    norm = norm + h361524->Integral();
    WZemu = WZemu + h361524->Integral();
    
    TFile *file361525 = TFile::Open("../output/361525_Wmunu_Np0.root");
    TH1D *h361525 = (TH1D*)file361525->Get(var);
    h361525->SetFillColor(7);
    h361525->SetLineColorAlpha(7,0);
    hs->Add(h361525);
    norm = norm + h361525->Integral();
    WZemu = WZemu + h361525->Integral();
    
    TFile *file361526 = TFile::Open("../output/361526_Wmunu_Np1.root");
    TH1D *h361526 = (TH1D*)file361526->Get(var);
    h361526->SetFillColor(7);
    h361526->SetLineColorAlpha(7,0);
    hs->Add(h361526);
    norm = norm + h361526->Integral();
    WZemu = WZemu + h361526->Integral();
    
    TFile *file361527 = TFile::Open("../output/361527_Wmunu_Np2.root");
    TH1D *h361527 = (TH1D*)file361527->Get(var);
    h361527->SetFillColor(7);
    h361527->SetLineColorAlpha(7,0);
    hs->Add(h361527);
    norm = norm + h361527->Integral();
    WZemu = WZemu + h361527->Integral();
    
    TFile *file361528 = TFile::Open("../output/361528_Wmunu_Np3.root");
    TH1D *h361528 = (TH1D*)file361528->Get(var);
    h361528->SetFillColor(7);
    h361528->SetLineColorAlpha(7,0);
    hs->Add(h361528);
    norm = norm + h361528->Integral();
    WZemu = WZemu + h361528->Integral();
    
    TFile *file361529 = TFile::Open("../output/361529_Wmunu_Np4.root");
    TH1D *h361529 = (TH1D*)file361529->Get(var);
    h361528->SetFillColor(7);
    h361528->SetLineColorAlpha(7,0);
    hs->Add(h361529);
    norm = norm + h361529->Integral();
    WZemu = WZemu + h361529->Integral();
    
    std::cout << "W/Z->e/mu contribution: " << WZemu << std::endl;
    
    
    //W/Z->tau
    double WZtau = 0;
    
    TFile *file361510 = TFile::Open("../output/361510_Ztautau_Np0.root");
    TH1D *h361510 = (TH1D*)file361510->Get(var);
    h361510->SetFillColor(11);
    h361510->SetLineColorAlpha(11,0);
    hs->Add(h361510);
    norm = norm + h361510->Integral();
    WZtau = WZtau + h361510->Integral();
    
    TFile *file361511 = TFile::Open("../output/361511_Ztautau_Np1.root");
    TH1D *h361511 = (TH1D*)file361511->Get(var);
    h361511->SetFillColor(11);
    h361511->SetLineColorAlpha(11,0);
    hs->Add(h361511);
    norm = norm + h361511->Integral();
    WZtau = WZtau + h361511->Integral();
    
    TFile *file361512 = TFile::Open("../output/361512_Ztautau_Np2.root");
    TH1D *h361512 = (TH1D*)file361512->Get(var);
    h361512->SetFillColor(11);
    h361512->SetLineColorAlpha(11,0);
    hs->Add(h361512);
    norm = norm + h361512->Integral();
    WZtau = WZtau + h361512->Integral();
    
    TFile *file361513 = TFile::Open("../output/361513_Ztautau_Np3.root");
    TH1D *h361513 = (TH1D*)file361513->Get(var);
    h361513->SetFillColor(11);
    h361513->SetLineColorAlpha(11,0);
    hs->Add(h361513);
    norm = norm + h361513->Integral();
    WZtau = WZtau + h361513->Integral();
    
    TFile *file361514 = TFile::Open("../output/361514_Ztautau_Np4.root");
    TH1D *h361514 = (TH1D*)file361514->Get(var);
    h361514->SetFillColor(11);
    h361514->SetLineColorAlpha(11,0);
    hs->Add(h361514);
    norm = norm + h361514->Integral();
    WZtau = WZtau + h361514->Integral();
    
    TFile *file361530 = TFile::Open("../output/361530_Wtaunu_Np0.root");
    TH1D *h361530 = (TH1D*)file361530->Get(var);
    h361530->SetFillColor(11);
    h361530->SetLineColorAlpha(11,0);
    hs->Add(h361530);
    norm = norm + h361530->Integral();
    WZtau = WZtau + h361530->Integral();
    
    TFile *file361531 = TFile::Open("../output/361531_Wtaunu_Np1.root");
    TH1D *h361531 = (TH1D*)file361531->Get(var);
    h361531->SetFillColor(11);
    h361531->SetLineColorAlpha(11,0);
    hs->Add(h361531);
    norm = norm + h361531->Integral();
    WZtau = WZtau + h361531->Integral();
    
    TFile *file361532 = TFile::Open("../output/361532_Wtaunu_Np2.root");
    TH1D *h361532 = (TH1D*)file361532->Get(var);
    h361532->SetFillColor(11);
    h361532->SetLineColorAlpha(11,0);
    hs->Add(h361532);
    norm = norm + h361532->Integral();
    WZtau = WZtau + h361532->Integral();
    
    TFile *file361533 = TFile::Open("../output/361533_Wtaunu_Np3.root");
    TH1D *h361533 = (TH1D*)file361533->Get(var);
    h361533->SetFillColor(11);
    h361533->SetLineColorAlpha(11,0);
    hs->Add(h361533);
    norm = norm + h361533->Integral();
    WZtau = WZtau + h361533->Integral();
    
    TFile *file361534 = TFile::Open("../output/361534_Wtaunu_Np4.root");
    TH1D *h361534 = (TH1D*)file361534->Get(var);
    h361534->SetFillColor(11);
    h361534->SetLineColorAlpha(11,0);
    hs->Add(h361534);
    norm = norm + h361534->Integral();
    WZtau = WZtau + h361534->Integral();
    
    std::cout << "W/Z->tau contribution: " << WZtau << std::endl;
    
    //TOP
    double top = 0;
    TFile *file410000 = TFile::Open("../output/410000_ttbar_hdamp172p5_nonallhad.root");
    TH1D *h410000 = (TH1D*)file410000->Get(var);
    h410000->SetFillColor(8);
    h410000->SetLineColorAlpha(8,0);
    hs->Add(h410000);
    norm = norm + h410000->Integral();
    top = top + h410000->Integral();
    
    TFile *file410011 = TFile::Open("../output/410011_singletop_tchan_lept_top.root");
    TH1D *h410011 = (TH1D*)file410011->Get(var);
    h410011->SetFillColor(8);
    h410011->SetLineColorAlpha(8,0);
    hs->Add(h410011);
    norm = norm + h410011->Integral();
    top = top + h410011->Integral();
    
    TFile *file410012 = TFile::Open("../output/410012_singletop_tchan_lept_antitop.root");
    TH1D *h410012 = (TH1D*)file410012->Get(var);
    h410012->SetFillColor(8);
    h410012->SetLineColorAlpha(8,0);
    hs->Add(h410012);
    norm = norm + h410012->Integral();
    top = top + h410012->Integral();
    
    TFile *file410013 = TFile::Open("../output/410013_singletop_Wt_inclusive_top.root");
    TH1D *h410013 = (TH1D*)file410013->Get(var);
    h410013->SetFillColor(8);
    h410013->SetLineColorAlpha(8,0);
    hs->Add(h410013);
    norm = norm + h410013->Integral();
    top = top + h410013->Integral();
    
    TFile *file410014 = TFile::Open("../output/410014_singletop_Wt_inclusive_antitop.root");
    TH1D *h410014 = (TH1D*)file410014->Get(var);
    h410014->SetFillColor(8);
    h410014->SetLineColorAlpha(8,0);
    hs->Add(h410014);
    norm = norm + h410014->Integral();
    top = top + h410014->Integral();
    
    TFile *file410025 = TFile::Open("../output/410025_SingleTopSchan_noAllHad_top.root");
    TH1D *h410025 = (TH1D*)file410025->Get(var);
    h410025->SetFillColor(8);
    h410025->SetLineColorAlpha(8,0);
    hs->Add(h410025);
    norm = norm + h410025->Integral();
    top = top + h410025->Integral();
    
    TFile *file410026 = TFile::Open("../output/410026_SingleTopSchan_noAllHad_antitop.root");
    TH1D *h410026 = (TH1D*)file410026->Get(var);
    h410026->SetFillColor(8);
    h410026->SetLineColorAlpha(8,0);
    hs->Add(h410026);
    norm = norm + h410026->Integral();
    top = top + h410026->Integral();
    
    
    
    //    std::cout << "Fakes contribution: " << hFakes->Integral() << std::endl;
    
    //    std::cout << "Top contribution: " << top << std::endl;
    ////    std::cout << "Total: " << diboson+WZemu+WZtau+top << std::endl;
    //    std::cout << "Total: " << diboson+WZemu+WZtau+top+hFakes->Integral() << std::endl;
    //    std::cout << "norm: " << norm << std::endl;
    
    //add data
    TFile *fileData = TFile::Open("../output/full_data_.root");
    TH1D *hData = (TH1D*)fileData->Get(var);
    
    //    std::cout << "data: " << hData->Integral() << std::endl;
    
    
    //create canvas and draw
    TCanvas *c1 = new TCanvas("c1",var,800,500);
    
    
    //add all signals
    TFile *file341524 = TFile::Open("../output/341524_signal_200GeV.root");
    TH1D *h341524 = (TH1D*)file341524->Get(var);
    h341524->SetLineColor(2);
    h341524->SetLineWidth(2);
    h341524->SetLineStyle(1);
//    
//    TFile *file341529 = TFile::Open("../output/341529_signal_350GeV.root");
//    TH1D *h341529 = (TH1D*)file341529->Get(var);
//    h341529->SetLineColor(2);
//    h341529->SetLineWidth(2);
//    h341529->SetLineStyle(2);
//    
    TFile *file341003 = TFile::Open("../output/341003_signal_400GeV.root");
    TH1D *h341003 = (TH1D*)file341003->Get(var);
    h341003->SetLineColor(2);
    h341003->SetLineWidth(2);
    h341003->SetLineStyle(3);

    c1->cd(2);
    TFile *file341531 = TFile::Open("../output/341531_signal_600GeV.root");
    TH1D *h341531 = (TH1D*)file341531->Get(var);
    h341531->SetLineColor(2);
    h341531->SetLineWidth(2);
    h341531->SetLineStyle(1);
    
    TFile *file341535 = TFile::Open("../output/341535_signal_1000GeV.root");
    TH1D *h341535 = (TH1D*)file341535->Get(var);
    h341535->SetLineColor(2);
    h341535->SetLineWidth(2);
    h341535->SetLineStyle(2);
//
//    TFile *file341538 = TFile::Open("../output/341538_signal_1600GeV.root");
//    TH1D *h341538 = (TH1D*)file341538->Get(var);
//    h341538->SetLineColor(2);
//    h341538->SetLineWidth(2);
//    h341538->SetLineStyle(3);
//    
//    TFile *file341540 = TFile::Open("../output/341540_signal_2000GeV.root");
//    TH1D *h341540 = (TH1D*)file341540->Get(var);
//    h341540->SetLineColor(2);
//    h341540->SetLineWidth(2);
//    h341540->SetLineStyle(4);
    
    
    hs->SetMaximum(hs->GetMaximum()*2);
    hs->Draw("hist");
    hs->GetXaxis()->SetTitle(h341524->GetXaxis()->GetTitle());
    hs->GetYaxis()->SetTitle(h341524->GetYaxis()->GetTitle());
    hs->SetTitle(h341524->GetTitle());
    h341524->DrawNormalized("hist:same",norm);
    h341003->DrawNormalized("hist:same",norm);
    h341531->DrawNormalized("hist:same",norm);
    h341535->DrawNormalized("hist:same",norm);
    hData->Draw("same");

    
    
    
    //legend
    c1->cd(1);
    TLegend *leg1 = new TLegend(0.68,0.6,0.98,0.95);
    //leg1->SetHeader("From file");
    //leg1->SetNColumns(2);
    leg1->AddEntry(h410000,"ttbar + single top","f");
    leg1->AddEntry(h361500,"Z/W->e/mu","f");
    leg1->AddEntry(h361510,"Z/W->tau","f");
    leg1->AddEntry(h361081,"diboson","f");
    leg1->AddEntry(hFakes,"Fakes","f");
    leg1->AddEntry(h341524,"200GeV","l");
    leg1->AddEntry(h341003,"400GeV","l");
    leg1->AddEntry(h341531,"600GeV","l");
    leg1->AddEntry(h341535,"1000GeV","l");
    leg1->AddEntry(hData,"Data","l");
    leg1->Draw();
    
    
    c1->Update();
    
    TImage *img = TImage::Create();
    
    string out = "../hist/plotOne/"+str+".png";
    const char * outname = out.c_str();
    img->FromPad(c1);
    img->WriteImage(outname);
    
    delete file410000;
    delete file410011;
    delete file410012;
    delete file410013;
    delete file410014;
    delete file410025;
    delete file410026;
    
    delete file361081;
    delete file361082;
    delete file361083;
    delete file361084;
    delete file361085;
    delete file361086;
    delete file361087;
    delete file341524;

    delete file361500;
    delete file361501;
    delete file361502;
    delete file361503;
    delete file361504;
    delete file361505;
    delete file361506;
    delete file361507;
    delete file361508;
    delete file361509;
    delete file361510;
    delete file361511;
    delete file361512;
    delete file361513;
    delete file361514;
    delete file361520;
    delete file361521;
    delete file361522;
    delete file361523;
    delete file361524;
    delete file361525;
    delete file361526;
    delete file361527;
    delete file361528;
    delete file361529;
    delete file361530;
    delete file361531;
    delete file361532;
    delete file361533;
    delete file361534;
    delete fileData;
    delete fileFakes;

    
}
