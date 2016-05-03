{
    double dib = 0;
    double emu = 0;
    double tau = 0;
    double top = 0;
    
    
    std::cout << "File" << "\t" << "Total" << "\t" << "True" << "\t" << "Diff" << std::endl;
    
    std::cout << "---------- DIBOSON ----------" << std::endl;
    
    TFile *file361081f = TFile::Open("../output_fakes_S/361081_Sherpa_CT10_WplvWmqq.root");
    TH1D *h361081f = (TH1D*)file361081f->Get("H_pt");
    TFile *file361081t = TFile::Open("../output_fakes//361081_Sherpa_CT10_WplvWmqq.root");
    TH1D *h361081t = (TH1D*)file361081t->Get("H_pt");
    std::cout << "361081" << "\t" << h361081t->Integral() << "\t" << h361081f->Integral() << "\t" << h361081f->Integral()-h361081t->Integral() << std::endl;
    dib = dib + h361081f->Integral()-h361081t->Integral();
    
    TFile *file361082f = TFile::Open("../output_fakes_S/361082_Sherpa_CT10_WpqqWmlv.root");
    TH1D *h361082f = (TH1D*)file361082f->Get("H_pt");
    TFile *file361082t = TFile::Open("../output_fakes//361082_Sherpa_CT10_WpqqWmlv.root");
    TH1D *h361082t = (TH1D*)file361082t->Get("H_pt");
    std::cout << "361082" << "\t" << h361082t->Integral() << "\t" << h361082f->Integral() << "\t" << h361082f->Integral()-h361082t->Integral() << std::endl;
    dib = dib + h361082f->Integral()-h361082t->Integral();

    TFile *file361083f = TFile::Open("../output_fakes_S/361083_Sherpa_CT10_WlvZqq.root");
    TH1D *h361083f = (TH1D*)file361083f->Get("H_pt");
    TFile *file361083t = TFile::Open("../output_fakes//361083_Sherpa_CT10_WlvZqq.root");
    TH1D *h361083t = (TH1D*)file361083t->Get("H_pt");
    std::cout << "361083" << "\t" << h361083t->Integral() << "\t" << h361083f->Integral() << "\t" << h361083f->Integral()-h361083t->Integral() << std::endl;
    dib = dib + h361083f->Integral()-h361083t->Integral();

    TFile *file361084f = TFile::Open("../output_fakes_S/361084_Sherpa_CT10_WqqZll.root");
    TH1D *h361084f = (TH1D*)file361084f->Get("H_pt");
    TFile *file361084t = TFile::Open("../output_fakes//361084_Sherpa_CT10_WqqZll.root");
    TH1D *h361084t = (TH1D*)file361084t->Get("H_pt");
    std::cout << "361084" << "\t" << h361084t->Integral() << "\t" << h361084f->Integral() << "\t" << h361084f->Integral()-h361084t->Integral() << std::endl;
    dib = dib + h361084f->Integral()-h361084t->Integral();

    TFile *file361085f = TFile::Open("../output_fakes_S/361085_Sherpa_CT10_WqqZvv.root");
    TH1D *h361085f = (TH1D*)file361085f->Get("H_pt");
    TFile *file361085t = TFile::Open("../output_fakes//361085_Sherpa_CT10_WqqZvv.root");
    TH1D *h361085t = (TH1D*)file361085t->Get("H_pt");
    std::cout << "361085" << "\t" << h361085t->Integral() << "\t" << h361085f->Integral() << "\t" << h361085f->Integral()-h361085t->Integral() << std::endl;
    dib = dib + h361085f->Integral()-h361085t->Integral();

    TFile *file361086f = TFile::Open("../output_fakes_S/361086_Sherpa_CT10_ZqqZll.root");
    TH1D *h361086f = (TH1D*)file361086f->Get("H_pt");
    TFile *file361086t = TFile::Open("../output_fakes//361086_Sherpa_CT10_ZqqZll.root");
    TH1D *h361086t = (TH1D*)file361086t->Get("H_pt");
    std::cout << "361086" << "\t" << h361086t->Integral() << "\t" << h361086f->Integral() << "\t" << h361086f->Integral()-h361086t->Integral() << std::endl;
    dib = dib + h361086f->Integral()-h361086t->Integral();

    TFile *file361087f = TFile::Open("../output_fakes_S/361087_Sherpa_CT10_ZqqZvv.root");
    TH1D *h361087f = (TH1D*)file361087f->Get("H_pt");
    TFile *file361087t = TFile::Open("../output_fakes//361087_Sherpa_CT10_ZqqZvv.root");
    TH1D *h361087t = (TH1D*)file361087t->Get("H_pt");
    std::cout << "361087" << "\t" << h361087t->Integral() << "\t" << h361087f->Integral() << "\t" << h361087f->Integral()-h361087t->Integral() << std::endl;
    dib = dib + h361087f->Integral()-h361087t->Integral();

    std::cout << "---------- W/Z -> e/mu ----------" << std::endl;
    
    TFile *file361500f = TFile::Open("../output_fakes_S/361500_Zee_Np0.root");
    TH1D *h361500f = (TH1D*)file361500f->Get("H_pt");
    TFile *file361500t = TFile::Open("../output_fakes//361500_Zee_Np0.root");
    TH1D *h361500t = (TH1D*)file361500t->Get("H_pt");
    std::cout << "361500" << "\t" << h361500t->Integral() << "\t" << h361500f->Integral() << "\t" << h361500f->Integral()-h361500t->Integral() << std::endl;
    emu = emu + h361500f->Integral()-h361500t->Integral();
    
    TFile *file361501f = TFile::Open("../output_fakes_S/361501_Zee_Np1.root");
    TH1D *h361501f = (TH1D*)file361501f->Get("H_pt");
    TFile *file361501t = TFile::Open("../output_fakes//361501_Zee_Np1.root");
    TH1D *h361501t = (TH1D*)file361501t->Get("H_pt");
    std::cout << "361501" << "\t" << h361501t->Integral() << "\t" << h361501f->Integral() << "\t" << h361501f->Integral()-h361501t->Integral() << std::endl;
    emu = emu + h361501f->Integral()-h361501t->Integral();

    TFile *file361502f = TFile::Open("../output_fakes_S/361502_Zee_Np2.root");
    TH1D *h361502f = (TH1D*)file361502f->Get("H_pt");
    TFile *file361502t = TFile::Open("../output_fakes//361502_Zee_Np2.root");
    TH1D *h361502t = (TH1D*)file361502t->Get("H_pt");
    std::cout << "361502" << "\t" << h361502t->Integral() << "\t" << h361502f->Integral() << "\t" << h361502f->Integral()-h361502t->Integral() << std::endl;
    emu = emu + h361502f->Integral()-h361502t->Integral();

    TFile *file361503f = TFile::Open("../output_fakes_S/361503_Zee_Np3.root");
    TH1D *h361503f = (TH1D*)file361503f->Get("H_pt");
    TFile *file361503t = TFile::Open("../output_fakes//361503_Zee_Np3.root");
    TH1D *h361503t = (TH1D*)file361503t->Get("H_pt");
    std::cout << "361503" << "\t" << h361503t->Integral() << "\t" << h361503f->Integral() << "\t" << h361503f->Integral()-h361503t->Integral() << std::endl;
    emu = emu + h361503f->Integral()-h361503t->Integral();

    TFile *file361504f = TFile::Open("../output_fakes_S/361504_Zee_Np4.root");
    TH1D *h361504f = (TH1D*)file361504f->Get("H_pt");
    TFile *file361504t = TFile::Open("../output_fakes//361504_Zee_Np4.root");
    TH1D *h361504t = (TH1D*)file361504t->Get("H_pt");
    std::cout << "361504" << "\t" << h361504t->Integral() << "\t" << h361504f->Integral() << "\t" << h361504f->Integral()-h361504t->Integral() << std::endl;
    emu = emu + h361504f->Integral()-h361504t->Integral();

    TFile *file361505f = TFile::Open("../output_fakes_S/361505_Zmumu_Np0.root");
    TH1D *h361505f = (TH1D*)file361505f->Get("H_pt");
    TFile *file361505t = TFile::Open("../output_fakes//361505_Zmumu_Np0.root");
    TH1D *h361505t = (TH1D*)file361505t->Get("H_pt");
    std::cout << "361505" << "\t" << h361505t->Integral() << "\t" << h361505f->Integral() << "\t" << h361505f->Integral()-h361505t->Integral() << std::endl;
    emu = emu + h361505f->Integral()-h361505t->Integral();

    TFile *file361506f = TFile::Open("../output_fakes_S/361506_Zmumu_Np1.root");
    TH1D *h361506f = (TH1D*)file361506f->Get("H_pt");
    TFile *file361506t = TFile::Open("../output_fakes//361506_Zmumu_Np1.root");
    TH1D *h361506t = (TH1D*)file361506t->Get("H_pt");
    std::cout << "361506" << "\t" << h361506t->Integral() << "\t" << h361506f->Integral() << "\t" << h361506f->Integral()-h361506t->Integral() << std::endl;
    emu = emu + h361506f->Integral()-h361506t->Integral();

    TFile *file361507f = TFile::Open("../output_fakes_S/361507_Zmumu_Np2.root");
    TH1D *h361507f = (TH1D*)file361507f->Get("H_pt");
    TFile *file361507t = TFile::Open("../output_fakes//361507_Zmumu_Np2.root");
    TH1D *h361507t = (TH1D*)file361507t->Get("H_pt");
    std::cout << "361507" << "\t" << h361507t->Integral() << "\t" << h361507f->Integral() << "\t" << h361507f->Integral()-h361507t->Integral() << std::endl;
    emu = emu + h361507f->Integral()-h361507t->Integral();

    TFile *file361508f = TFile::Open("../output_fakes_S/361508_Zmumu_Np3.root");
    TH1D *h361508f = (TH1D*)file361508f->Get("H_pt");
    TFile *file361508t = TFile::Open("../output_fakes//361508_Zmumu_Np3.root");
    TH1D *h361508t = (TH1D*)file361508t->Get("H_pt");
    std::cout << "361508" << "\t" << h361508t->Integral() << "\t" << h361508f->Integral() << "\t" << h361508f->Integral()-h361508t->Integral() << std::endl;
    emu = emu + h361508f->Integral()-h361508t->Integral();

    TFile *file361509f = TFile::Open("../output_fakes_S/361509_Zmumu_Np4.root");
    TH1D *h361509f = (TH1D*)file361509f->Get("H_pt");
    TFile *file361509t = TFile::Open("../output_fakes//361509_Zmumu_Np4.root");
    TH1D *h361509t = (TH1D*)file361509t->Get("H_pt");
    std::cout << "361509" << "\t" << h361509t->Integral() << "\t" << h361509f->Integral() << "\t" << h361509f->Integral()-h361509t->Integral() << std::endl;
    emu = emu + h361509f->Integral()-h361509t->Integral();

    TFile *file361520f = TFile::Open("../output_fakes_S/361520_Wenu_Np0.root");
    TH1D *h361520f = (TH1D*)file361520f->Get("H_pt");
    TFile *file361520t = TFile::Open("../output_fakes//361520_Wenu_Np0.root");
    TH1D *h361520t = (TH1D*)file361520t->Get("H_pt");
    std::cout << "361520" << "\t" << h361520t->Integral() << "\t" << h361520f->Integral() << "\t" << h361520f->Integral()-h361520t->Integral() << std::endl;
    emu = emu + h361520f->Integral()-h361520t->Integral();

    TFile *file361521f = TFile::Open("../output_fakes_S/361521_Wenu_Np1.root");
    TH1D *h361521f = (TH1D*)file361521f->Get("H_pt");
    TFile *file361521t = TFile::Open("../output_fakes//361521_Wenu_Np1.root");
    TH1D *h361521t = (TH1D*)file361521t->Get("H_pt");
    std::cout << "361521" << "\t" << h361521t->Integral() << "\t" << h361521f->Integral() << "\t" << h361521f->Integral()-h361521t->Integral() << std::endl;
    emu = emu + h361521f->Integral()-h361521t->Integral();

    TFile *file361522f = TFile::Open("../output_fakes_S/361522_Wenu_Np2.root");
    TH1D *h361522f = (TH1D*)file361522f->Get("H_pt");
    TFile *file361522t = TFile::Open("../output_fakes//361522_Wenu_Np2.root");
    TH1D *h361522t = (TH1D*)file361522t->Get("H_pt");
    std::cout << "361522" << "\t" << h361522t->Integral() << "\t" << h361522f->Integral() << "\t" << h361522f->Integral()-h361522t->Integral() << std::endl;
    emu = emu + h361522f->Integral()-h361522t->Integral();

    TFile *file361523f = TFile::Open("../output_fakes_S/361523_Wenu_Np3.root");
    TH1D *h361523f = (TH1D*)file361523f->Get("H_pt");
    TFile *file361523t = TFile::Open("../output_fakes//361523_Wenu_Np3.root");
    TH1D *h361523t = (TH1D*)file361523t->Get("H_pt");
    std::cout << "361523" << "\t" << h361523t->Integral() << "\t" << h361523f->Integral() << "\t" << h361523f->Integral()-h361523t->Integral() << std::endl;
    emu = emu + h361523f->Integral()-h361523t->Integral();

    TFile *file361524f = TFile::Open("../output_fakes_S/361524_Wenu_Np4.root");
    TH1D *h361524f = (TH1D*)file361524f->Get("H_pt");
    TFile *file361524t = TFile::Open("../output_fakes//361524_Wenu_Np4.root");
    TH1D *h361524t = (TH1D*)file361524t->Get("H_pt");
    std::cout << "361524" << "\t" << h361524t->Integral() << "\t" << h361524f->Integral() << "\t" << h361524f->Integral()-h361524t->Integral() << std::endl;
    emu = emu + h361524f->Integral()-h361524t->Integral();

    TFile *file361525f = TFile::Open("../output_fakes_S/361525_Wmunu_Np0.root");
    TH1D *h361525f = (TH1D*)file361525f->Get("H_pt");
    TFile *file361525t = TFile::Open("../output_fakes//361525_Wmunu_Np0.root");
    TH1D *h361525t = (TH1D*)file361525t->Get("H_pt");
    std::cout << "361525" << "\t" << h361525t->Integral() << "\t" << h361525f->Integral() << "\t" << h361525f->Integral()-h361525t->Integral() << std::endl;
    emu = emu + h361525f->Integral()-h361525t->Integral();

    TFile *file361526f = TFile::Open("../output_fakes_S/361526_Wmunu_Np1.root");
    TH1D *h361526f = (TH1D*)file361526f->Get("H_pt");
    TFile *file361526t = TFile::Open("../output_fakes//361526_Wmunu_Np1.root");
    TH1D *h361526t = (TH1D*)file361526t->Get("H_pt");
    std::cout << "361526" << "\t" << h361526t->Integral() << "\t" << h361526f->Integral() << "\t" << h361526f->Integral()-h361526t->Integral() << std::endl;
    emu = emu + h361526f->Integral()-h361526t->Integral();

    TFile *file361527f = TFile::Open("../output_fakes_S/361527_Wmunu_Np2.root");
    TH1D *h361527f = (TH1D*)file361527f->Get("H_pt");
    TFile *file361527t = TFile::Open("../output_fakes//361527_Wmunu_Np2.root");
    TH1D *h361527t = (TH1D*)file361527t->Get("H_pt");
    std::cout << "361527" << "\t" << h361527t->Integral() << "\t" << h361527f->Integral() << "\t" << h361527f->Integral()-h361527t->Integral() << std::endl;
    emu = emu + h361527f->Integral()-h361527t->Integral();

    TFile *file361528f = TFile::Open("../output_fakes_S/361528_Wmunu_Np3.root");
    TH1D *h361528f = (TH1D*)file361528f->Get("H_pt");
    TFile *file361528t = TFile::Open("../output_fakes//361528_Wmunu_Np3.root");
    TH1D *h361528t = (TH1D*)file361528t->Get("H_pt");
    std::cout << "361528" << "\t" << h361528t->Integral() << "\t" << h361528f->Integral() << "\t" << h361528f->Integral()-h361528t->Integral() << std::endl;
    emu = emu + h361528f->Integral()-h361528t->Integral();

    TFile *file361529f = TFile::Open("../output_fakes_S/361529_Wmunu_Np4.root");
    TH1D *h361529f = (TH1D*)file361529f->Get("H_pt");
    TFile *file361529t = TFile::Open("../output_fakes//361529_Wmunu_Np4.root");
    TH1D *h361529t = (TH1D*)file361529t->Get("H_pt");
    std::cout << "361529" << "\t" << h361529t->Integral() << "\t" << h361529f->Integral() << "\t" << h361529f->Integral()-h361529t->Integral() << std::endl;
    emu = emu + h361529f->Integral()-h361529t->Integral();

    std::cout << "---------- W/Z -> tau ----------" << std::endl;
    
    TFile *file361510f = TFile::Open("../output_fakes_S/361510_Ztautau_Np0.root");
    TH1D *h361510f = (TH1D*)file361510f->Get("H_pt");
    TFile *file361510t = TFile::Open("../output_fakes//361510_Ztautau_Np0.root");
    TH1D *h361510t = (TH1D*)file361510t->Get("H_pt");
    std::cout << "361510" << "\t" << h361510t->Integral() << "\t" << h361510f->Integral() << "\t" << h361510f->Integral()-h361510t->Integral() << std::endl;
    tau = tau + h361510f->Integral()-h361510t->Integral();
    
    TFile *file361511f = TFile::Open("../output_fakes_S/361511_Ztautau_Np1.root");
    TH1D *h361511f = (TH1D*)file361511f->Get("H_pt");
    TFile *file361511t = TFile::Open("../output_fakes//361511_Ztautau_Np1.root");
    TH1D *h361511t = (TH1D*)file361511t->Get("H_pt");
    std::cout << "361511" << "\t" << h361511t->Integral() << "\t" << h361511f->Integral() << "\t" << h361511f->Integral()-h361511t->Integral() << std::endl;
    tau = tau + h361511f->Integral()-h361511t->Integral();

    TFile *file361512f = TFile::Open("../output_fakes_S/361512_Ztautau_Np2.root");
    TH1D *h361512f = (TH1D*)file361512f->Get("H_pt");
    TFile *file361512t = TFile::Open("../output_fakes//361512_Ztautau_Np2.root");
    TH1D *h361512t = (TH1D*)file361512t->Get("H_pt");
    std::cout << "361512" << "\t" << h361512t->Integral() << "\t" << h361512f->Integral() << "\t" << h361512f->Integral()-h361512t->Integral() << std::endl;
    tau = tau + h361512f->Integral()-h361512t->Integral();

    TFile *file361513f = TFile::Open("../output_fakes_S/361513_Ztautau_Np3.root");
    TH1D *h361513f = (TH1D*)file361513f->Get("H_pt");
    TFile *file361513t = TFile::Open("../output_fakes//361513_Ztautau_Np3.root");
    TH1D *h361513t = (TH1D*)file361513t->Get("H_pt");
    std::cout << "361513" << "\t" << h361513t->Integral() << "\t" << h361513f->Integral() << "\t" << h361513f->Integral()-h361513t->Integral() << std::endl;
    tau = tau + h361513f->Integral()-h361513t->Integral();

    TFile *file361514f = TFile::Open("../output_fakes_S/361514_Ztautau_Np4.root");
    TH1D *h361514f = (TH1D*)file361514f->Get("H_pt");
    TFile *file361514t = TFile::Open("../output_fakes//361514_Ztautau_Np4.root");
    TH1D *h361514t = (TH1D*)file361514t->Get("H_pt");
    std::cout << "361514" << "\t" << h361514t->Integral() << "\t" << h361514f->Integral() << "\t" << h361514f->Integral()-h361514t->Integral() << std::endl;
    tau = tau + h361514f->Integral()-h361514t->Integral();

    TFile *file361530f = TFile::Open("../output_fakes_S/361530_Wtaunu_Np0.root");
    TH1D *h361530f = (TH1D*)file361530f->Get("H_pt");
    TFile *file361530t = TFile::Open("../output_fakes//361530_Wtaunu_Np0.root");
    TH1D *h361530t = (TH1D*)file361530t->Get("H_pt");
    std::cout << "361530" << "\t" << h361530t->Integral() << "\t" << h361530f->Integral() << "\t" << h361530f->Integral()-h361530t->Integral() << std::endl;
    tau = tau + h361530f->Integral()-h361530t->Integral();

    TFile *file361531f = TFile::Open("../output_fakes_S/361531_Wtaunu_Np1.root");
    TH1D *h361531f = (TH1D*)file361531f->Get("H_pt");
    TFile *file361531t = TFile::Open("../output_fakes//361531_Wtaunu_Np1.root");
    TH1D *h361531t = (TH1D*)file361531t->Get("H_pt");
    std::cout << "361531" << "\t" << h361531t->Integral() << "\t" << h361531f->Integral() << "\t" << h361531f->Integral()-h361531t->Integral() << std::endl;
    tau = tau + h361531f->Integral()-h361531t->Integral();

    TFile *file361532f = TFile::Open("../output_fakes_S/361532_Wtaunu_Np2.root");
    TH1D *h361532f = (TH1D*)file361532f->Get("H_pt");
    TFile *file361532t = TFile::Open("../output_fakes//361532_Wtaunu_Np2.root");
    TH1D *h361532t = (TH1D*)file361532t->Get("H_pt");
    std::cout << "361532" << "\t" << h361532t->Integral() << "\t" << h361532f->Integral() << "\t" << h361532f->Integral()-h361532t->Integral() << std::endl;
    tau = tau + h361532f->Integral()-h361532t->Integral();

    TFile *file361533f = TFile::Open("../output_fakes_S/361533_Wtaunu_Np3.root");
    TH1D *h361533f = (TH1D*)file361533f->Get("H_pt");
    TFile *file361533t = TFile::Open("../output_fakes//361533_Wtaunu_Np3.root");
    TH1D *h361533t = (TH1D*)file361533t->Get("H_pt");
    std::cout << "361533" << "\t" << h361533t->Integral() << "\t" << h361533f->Integral() << "\t" << h361533f->Integral()-h361533t->Integral() << std::endl;
    tau = tau + h361533f->Integral()-h361533t->Integral();

    TFile *file361534f = TFile::Open("../output_fakes_S/361534_Wtaunu_Np4.root");
    TH1D *h361534f = (TH1D*)file361534f->Get("H_pt");
    TFile *file361534t = TFile::Open("../output_fakes//361534_Wtaunu_Np4.root");
    TH1D *h361534t = (TH1D*)file361534t->Get("H_pt");
    std::cout << "361534" << "\t" << h361534t->Integral() << "\t" << h361534f->Integral() << "\t" << h361534f->Integral()-h361534t->Integral() << std::endl;
    tau = tau + h361534f->Integral()-h361534t->Integral();

    std::cout << "---------- ttbar + single top ----------" << std::endl;
    
    TFile *file410000f = TFile::Open("../output_fakes_S/410000_ttbar_hdamp172p5_nonallhad.root");
    TH1D *h410000f = (TH1D*)file410000f->Get("H_pt");
    TFile *file410000t = TFile::Open("../output_fakes//410000_ttbar_hdamp172p5_nonallhad.root");
    TH1D *h410000t = (TH1D*)file410000t->Get("H_pt");
    std::cout << "410000" << "\t" << h410000t->Integral() << "\t" << h410000f->Integral() << "\t" << h410000f->Integral()-h410000t->Integral() << std::endl;
    top = top + h410000f->Integral()-h410000t->Integral();
    
    TFile *file410011f = TFile::Open("../output_fakes_S/410011_singletop_tchan_lept_top.root");
    TH1D *h410011f = (TH1D*)file410011f->Get("H_pt");
    TFile *file410011t = TFile::Open("../output_fakes//410011_singletop_tchan_lept_top.root");
    TH1D *h410011t = (TH1D*)file410011t->Get("H_pt");
    std::cout << "410011" << "\t" << h410011t->Integral() << "\t" << h410011f->Integral() << "\t" << h410011f->Integral()-h410011t->Integral() << std::endl;
    top = top + h410011f->Integral()-h410011t->Integral();

    TFile *file410012f = TFile::Open("../output_fakes_S/410012_singletop_tchan_lept_antitop.root");
    TH1D *h410012f = (TH1D*)file410012f->Get("H_pt");
    TFile *file410012t = TFile::Open("../output_fakes//410012_singletop_tchan_lept_antitop.root");
    TH1D *h410012t = (TH1D*)file410012t->Get("H_pt");
    std::cout << "410012" << "\t" << h410012t->Integral() << "\t" << h410012f->Integral() << "\t" << h410012f->Integral()-h410012t->Integral() << std::endl;
    top = top + h410012f->Integral()-h410012t->Integral();

    TFile *file410013f = TFile::Open("../output_fakes_S/410013_singletop_Wt_inclusive_top.root");
    TH1D *h410013f = (TH1D*)file410013f->Get("H_pt");
    TFile *file410013t = TFile::Open("../output_fakes//410013_singletop_Wt_inclusive_top.root");
    TH1D *h410013t = (TH1D*)file410013t->Get("H_pt");
    std::cout << "410013" << "\t" << h410013t->Integral() << "\t" << h410013f->Integral() << "\t" << h410013f->Integral()-h410013t->Integral() << std::endl;
    top = top + h410013f->Integral()-h410013t->Integral();

    TFile *file410014f = TFile::Open("../output_fakes_S/410014_singletop_Wt_inclusive_antitop.root");
    TH1D *h410014f = (TH1D*)file410014f->Get("H_pt");
    TFile *file410014t = TFile::Open("../output_fakes//410014_singletop_Wt_inclusive_antitop.root");
    TH1D *h410014t = (TH1D*)file410014t->Get("H_pt");
    std::cout << "410014" << "\t" << h410014t->Integral() << "\t" << h410014f->Integral() << "\t" << h410014f->Integral()-h410014t->Integral() << std::endl;
    top = top + h410014f->Integral()-h410014t->Integral();

    TFile *file410025f = TFile::Open("../output_fakes_S/410025_SingleTopSchan_noAllHad_top.root");
    TH1D *h410025f = (TH1D*)file410025f->Get("H_pt");
    TFile *file410025t = TFile::Open("../output_fakes//410025_SingleTopSchan_noAllHad_top.root");
    TH1D *h410025t = (TH1D*)file410025t->Get("H_pt");
    std::cout << "410025" << "\t" << h410025t->Integral() << "\t" << h410025f->Integral() << "\t" << h410025f->Integral()-h410025t->Integral() << std::endl;
    top = top + h410025f->Integral()-h410025t->Integral();

    TFile *file410026f = TFile::Open("../output_fakes_S/410026_SingleTopSchan_noAllHad_antitop.root");
    TH1D *h410026f = (TH1D*)file410026f->Get("H_pt");
    TFile *file410026t = TFile::Open("../output_fakes//410026_SingleTopSchan_noAllHad_antitop.root");
    TH1D *h410026t = (TH1D*)file410026t->Get("H_pt");
    std::cout << "410026" << "\t" << h410026t->Integral() << "\t" << h410026f->Integral() << "\t" << h410026f->Integral()-h410026t->Integral() << std::endl;
    top = top + h410026f->Integral()-h410026t->Integral();

    //add fakes
    TFile *fileFakes = TFile::Open("../output_fakes_S/fakes_.root");
    TH1D *hFakes = (TH1D*)fileFakes->Get("H_pt");
    
    std::cout << "diboson total difference: " << dib << std::endl;
    std::cout << "W/Z->e/mu total diff: " << emu << std::endl;
    std::cout << "W/Z->tau total diff: " << tau << std::endl;
    std::cout << "top total diff: " << top << std::endl;
    std::cout << "total: " << dib+emu+tau+top << std::endl;
    std::cout << "fakes: " << hFakes->Integral() << std::endl;
    
    TFile *fileData = TFile::Open("../output_fakes_S/full_data_.root");
    TH1D *hData = (TH1D*)fileData->Get("H_pt");

    delete file410000f;
    delete file410011f;
    delete file410012f;
    delete file410013f;
    delete file410014f;
    delete file410025f;
    delete file410026f;
    delete file361081f;
    delete file361082f;
    delete file361083f;
    delete file361084f;
    delete file361085f;
    delete file361086f;
    delete file361087f;
    delete file361500f;
    delete file361501f;
    delete file361502f;
    delete file361503f;
    delete file361504f;
    delete file361505f;
    delete file361506f;
    delete file361507f;
    delete file361508f;
    delete file361509f;
    delete file361510f;
    delete file361511f;
    delete file361512f;
    delete file361513f;
    delete file361514f;
    delete file361520f;
    delete file361521f;
    delete file361522f;
    delete file361523f;
    delete file361524f;
    delete file361525f;
    delete file361526f;
    delete file361527f;
    delete file361528f;
    delete file361529f;
    delete file361530f;
    delete file361531f;
    delete file361532f;
    delete file361533f;
    delete file361534f;

    delete file410000t;
    delete file410011t;
    delete file410012t;
    delete file410013t;
    delete file410014t;
    delete file410025t;
    delete file410026t;
    delete file361081t;
    delete file361082t;
    delete file361083t;
    delete file361084t;
    delete file361085t;
    delete file361086t;
    delete file361087t;
    delete file361500t;
    delete file361501t;
    delete file361502t;
    delete file361503t;
    delete file361504t;
    delete file361505t;
    delete file361506t;
    delete file361507t;
    delete file361508t;
    delete file361509t;
    delete file361510t;
    delete file361511t;
    delete file361512t;
    delete file361513t;
    delete file361514t;
    delete file361520t;
    delete file361521t;
    delete file361522t;
    delete file361523t;
    delete file361524t;
    delete file361525t;
    delete file361526t;
    delete file361527t;
    delete file361528t;
    delete file361529t;
    delete file361530t;
    delete file361531t;
    delete file361532t;
    delete file361533t;
    delete file361534t;

    delete fileData;
    delete fileFakes;
    
}
