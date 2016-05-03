#include <iostream>
#include "TH1.h"
#include <vector>
#include "TDirectory.h"
#include "TLegend.h"
#include <vector>
#include "utils/AtlasLabels.C"
#include "TFormula.h"
#include "TF1.h"
#include "TFile.h"
#include "TCanvas.h"
#include <iostream>   // std::cout
#include <string>     // std::string, std::to_string
using namespace std;

double TauJetsSelection::XS(TString input){

	//  cat XSection-MC14-13TeV-fromSusyGrp.data |awk '{if ($1 != "" && $1 != "#") { s=$3*$5 ; print "if (input==\""$1"\")  scale="$2*$3";" }else{print $0}}'
	double scale=1;

	//ttbar

	if (input=="410000") scale = 451.646;
	else if (input=="410011") scale = 43.739;
	else if (input=="410012") scale = 25.778;
	else if (input=="410013") scale = 34.009;
	else if (input=="410014") scale = 33.989;
	else if (input=="410015") scale = 3.5835;
	else if (input=="410016") scale = 3.5814;
	else if (input=="361100") scale = 11306;
	else if (input=="361101") scale = 11306;
	else if (input=="361102") scale = 11306;
	else if (input=="361103") scale = 8282.6;
	else if (input=="361104") scale = 8282.6;
	else if (input=="361105") scale = 8282.6;
	else if (input=="361106") scale = 1901.2;
	else if (input=="361107") scale = 1901.2;
	else if (input=="361108") scale = 1901.2;
	else if (input=="361300") scale = 18957.3;
	else if (input=="361301") scale = 1053.77;
	else if (input=="361302") scale = 1279.88;
	else if (input=="361303") scale = 461.187;
	else if (input=="361304") scale = 111.847;
	else if (input=="361305") scale = 61.3666;
	else if (input=="361306") scale = 61.4325;
	else if (input=="361307") scale = 18.4803;
	else if (input=="361308") scale = 10.0676;
	else if (input=="361309") scale = 4.23438;
	else if (input=="361310") scale = 1.48285;
	else if (input=="361311") scale = 0.860674;
	else if (input=="361312") scale = 0.26117;
	else if (input=="361313") scale = 0.0960921;
	else if (input=="361314") scale = 0.0645571;
	else if (input=="361315") scale = 0.0447557;
	else if (input=="361316") scale = 0.0193878;
	else if (input=="361317") scale = 0.0132477;
	else if (input=="361318") scale = 0.00734014;
	else if (input=="361319") scale = 0.00250972;
	else if (input=="361320") scale = 0.00177496;
	else if (input=="361321") scale = 2.17153e-05;
	else if (input=="361322") scale = 1.33382e-05;
	else if (input=="361323") scale = 8.86397e-06;
	else if (input=="361324") scale = 19092.7;
	else if (input=="361325") scale = 1012.86;
	else if (input=="361326") scale = 1275.33;
	else if (input=="361327") scale = 462.762;
	else if (input=="361328") scale = 111.115;
	else if (input=="361329") scale = 61.3132;
	else if (input=="361330") scale = 61.6014;
	else if (input=="361331") scale = 18.3369;
	else if (input=="361332") scale = 10.1247;
	else if (input=="361333") scale = 4.26136;
	else if (input=="361334") scale = 1.42519;
	else if (input=="361335") scale = 0.864259;
	else if (input=="361336") scale = 0.263153;
	else if (input=="361337") scale = 0.101228;
	else if (input=="361338") scale = 0.0633524;
	else if (input=="361339") scale = 0.0482011;
	else if (input=="361340") scale = 0.0170147;
	else if (input=="361341") scale = 0.0125259;
	else if (input=="361342") scale = 0.00644023;
	else if (input=="361343") scale = 0.00224525;
	else if (input=="361344") scale = 0.00182928;
	else if (input=="361345") scale = 2.72241e-05;
	else if (input=="361346") scale = 1.77588e-05;
	else if (input=="361347") scale = 6.89528e-06;
	else if (input=="361348") scale = 19063.3;
	else if (input=="361349") scale = 1042.99;
	else if (input=="361350") scale = 1276.15;
	else if (input=="361351") scale = 456.946;
	else if (input=="361352") scale = 112.141;
	else if (input=="361353") scale = 60.4701;
	else if (input=="361354") scale = 61.6653;
	else if (input=="361355") scale = 18.4454;
	else if (input=="361356") scale = 10.0984;
	else if (input=="361357") scale = 4.13792;
	else if (input=="361358") scale = 1.47517;
	else if (input=="361359") scale = 0.831941;
	else if (input=="361360") scale = 0.260783;
	else if (input=="361361") scale = 0.0936654;
	else if (input=="361362") scale = 0.0645886;
	else if (input=="361363") scale = 0.0498119;
	else if (input=="361364") scale = 0.017886;
	else if (input=="361365") scale = 0.0119368;
	else if (input=="361366") scale = 0.00657487;
	else if (input=="361367") scale = 0.00236936;
	else if (input=="361368") scale = 0.00202069;
	else if (input=="361369") scale = 2.72179e-05;
	else if (input=="361370") scale = 1.3141e-05;
	else if (input=="361371") scale = 7.94256e-06;
	else if (input=="361372") scale = 1719.08;
	else if (input=="361373") scale = 314.155;
	else if (input=="361374") scale = 175.511;
	else if (input=="361375") scale = 48.7971;
	else if (input=="361376") scale = 16.4912;
	else if (input=="361377") scale = 10.0568;
	else if (input=="361378") scale = 7.27404;
	else if (input=="361379") scale = 2.81399;
	else if (input=="361380") scale = 1.75417;
	else if (input=="361381") scale = 0.498651;
	else if (input=="361382") scale = 0.220147;
	else if (input=="361383") scale = 0.130569;
	else if (input=="361384") scale = 0.0310592;
	else if (input=="361385") scale = 0.0147483;
	else if (input=="361386") scale = 0.00889234;
	else if (input=="361387") scale = 0.00579769;
	else if (input=="361388") scale = 0.00297379;
	else if (input=="361389") scale = 0.00185367;
	else if (input=="361390") scale = 0.000652865;
	else if (input=="361391") scale = 0.000244257;
	else if (input=="361392") scale = 0.00024632;
	else if (input=="361393") scale = 3.07398e-06;
	else if (input=="361394") scale = 3.49648e-06;
	else if (input=="361395") scale = 2.71804e-06;
	else if (input=="361396") scale = 1716.95;
	else if (input=="361397") scale = 312.947;
	else if (input=="361398") scale = 175.444;
	else if (input=="361399") scale = 49.1961;
	else if (input=="361400") scale = 16.4106;
	else if (input=="361401") scale = 9.89927;
	else if (input=="361402") scale = 7.15924;
	else if (input=="361403") scale = 2.79825;
	else if (input=="361404") scale = 1.73262;
	else if (input=="361405") scale = 0.502452;
	else if (input=="361406") scale = 0.245701;
	else if (input=="361407") scale = 0.137144;
	else if (input=="361408") scale = 0.0315129;
	else if (input=="361409") scale = 0.0150953;
	else if (input=="361410") scale = 0.0100163;
	else if (input=="361411") scale = 0.0058276;
	else if (input=="361412") scale = 0.00257811;
	else if (input=="361413") scale = 0.00170705;
	else if (input=="361414") scale = 0.000692582;
	else if (input=="361415") scale = 0.00055196;
	else if (input=="361416") scale = 0.000354612;
	else if (input=="361417") scale = 4.14504e-06;
	else if (input=="361418") scale = 2.47116e-06;
	else if (input=="361419") scale = 3.35289e-06;
	else if (input=="361420") scale = 1709.11;
	else if (input=="361421") scale = 313.706;
	else if (input=="361422") scale = 174.383;
	else if (input=="361423") scale = 49.3922;
	else if (input=="361424") scale = 16.8898;
	else if (input=="361425") scale = 10.0098;
	else if (input=="361426") scale = 7.04712;
	else if (input=="361427") scale = 2.8262;
	else if (input=="361428") scale = 1.63489;
	else if (input=="361429") scale = 0.49219;
	else if (input=="361430") scale = 0.219143;
	else if (input=="361431") scale = 0.143973;
	else if (input=="361432") scale = 0.0308263;
	else if (input=="361433") scale = 0.0147926;
	else if (input=="361434") scale = 0.0093362;
	else if (input=="361435") scale = 0.00499758;
	else if (input=="361436") scale = 0.00342864;
	else if (input=="361437") scale = 0.00182292;
	else if (input=="361438") scale = 0.000628368;
	else if (input=="361439") scale = 0.000509218;
	else if (input=="361440") scale = 0.00022567;
	else if (input=="361441") scale = 2.98495e-06;
	else if (input=="361442") scale = 2.0278e-06;
	else if (input=="361443") scale = 1.92697e-06;
	else if (input=="361444") scale = 9292.49;
	else if (input=="361445") scale = 1672.15;
	else if (input=="361446") scale = 956.326;
	else if (input=="361447") scale = 278.267;
	else if (input=="361448") scale = 93.5015;
	else if (input=="361449") scale = 56.9378;
	else if (input=="361450") scale = 40.4533;
	else if (input=="361451") scale = 15.6368;
	else if (input=="361452") scale = 9.76789;
	else if (input=="361453") scale = 2.81514;
	else if (input=="361454") scale = 1.25426;
	else if (input=="361455") scale = 0.794166;
	else if (input=="361456") scale = 0.16279;
	else if (input=="361457") scale = 0.08009;
	else if (input=="361458") scale = 0.0493215;
	else if (input=="361459") scale = 0.0308695;
	else if (input=="361460") scale = 0.0164447;
	else if (input=="361461") scale = 0.0110338;
	else if (input=="361462") scale = 0.00409088;
	else if (input=="361463") scale = 0.00249425;
	else if (input=="361464") scale = 0.00186222;
	else if (input=="361465") scale = 1.64897e-05;
	else if (input=="361466") scale = 5.38529e-06;
	else if (input=="361467") scale = 6.37479e-06;
	else if (input=="361064") scale = 1.8446;
	else if (input=="361065") scale = 3.6235;
	else if (input=="361066") scale = 2.5656;
	else if (input=="361067") scale = 5.0169;
	else if (input=="361068") scale = 14.022;
	else if (input=="361069") scale = 0.025765;
	else if (input=="361070") scale = 0.043375;
	else if (input=="361071") scale = 0.042017;
	else if (input=="361072") scale = 0.1279;
	else if (input=="361073") scale = 0.02095;
	else if (input=="361077") scale = 0.85492;
	else if (input=="361081") scale = 25.995;
	else if (input=="361082") scale = 25.974;
	else if (input=="361083") scale = 12.543;
	else if (input=="361084") scale = 3.7583;
	else if (input=="361085") scale = 7.4151;
	else if (input=="361087") scale = 4.633;
	else if (input=="361039") scale = 14354.9;
	else if (input=="361040") scale = 17006.7;
	else if (input=="361041") scale = 3630.41;
	else if (input=="361042") scale = 1250.35;
	else if (input=="361043") scale = 1510.09;
	else if (input=="361044") scale = 367.696;
	else if (input=="361045") scale = 97.1455;
	else if (input=="361046") scale = 118.317;
	else if (input=="361047") scale = 32.1039;
	else if (input=="361048") scale = 5.26908;
	else if (input=="361049") scale = 6.44751;
	else if (input=="361050") scale = 1.95138;
	else if (input=="361051") scale = 0.350149;
	else if (input=="361052") scale = 0.434643;
	else if (input=="361053") scale = 0.138955;
	else if (input=="361054") scale = 0.00683053;
	else if (input=="361055") scale = 0.00857763;
	else if (input=="361056") scale = 0.00299975;
	else if (input=="361057") scale = 3.01128e-05;
	else if (input=="361058") scale = 3.63509e-05;
	else if (input=="361059") scale = 1.35947e-05;
	else if (input=="361060") scale = 1.00244e-09;
	else if (input=="361061") scale = 1.04588e-09;
	else if (input=="361062") scale = 3.77167e-10;
	else if (input=="361000") scale = 76508904600;
	else if (input=="361001") scale = 1946305980;
	else if (input=="361002") scale = 24431336;
	else if (input=="361003") scale = 312104;
	else if (input=="361004") scale = 3422.36;
	else if (input=="361005") scale = 66.3778;
	else if (input=="361006") scale = 2.57984;
	else if (input=="361007") scale = 0.1803;
	else if (input=="361008") scale = 0.00645739;
	else if (input=="361009") scale = 0.00023784;
	else if (input=="361010") scale = 7.04754e-06;
	else if (input=="361011") scale = 1.13058e-07;
	else if (input=="361012") scale = 4.40618e-10;
	else if (input=="361020") scale = 80302080000;
	else if (input=="361021") scale = 5.26967e+07;
	else if (input=="361022") scale = 809380;
	else if (input=="361023") scale = 8452.85;
	else if (input=="361024") scale = 134.977;
	else if (input=="361025") scale = 4.20402;
	else if (input=="361026") scale = 0.242119;
	else if (input=="361027") scale = 0.00636958;
	else if (input=="361028") scale = 0.00635145;
	else if (input=="361029") scale = 0.000236729;
	else if (input=="361030") scale = 7.0498e-06;
	else if (input=="361031") scale = 1.1416e-07;
	else if (input=="361032") scale = 4.40618e-10;
	else if (input=="426001") scale = 1473849828;
	else if (input=="426002") scale = 1.97235e+07;
	else if (input=="426003") scale = 286031;
	else if (input=="426004") scale = 3238.71;
	else if (input=="426005") scale = 62.3029;
	else if (input=="426006") scale = 2.30961;
	else if (input=="426007") scale = 0.176181;
	else if (input=="426008") scale = 0.00643204;
	else if (input=="426009") scale = 0.000248606;

	else if (input=="361081")  scale=25.995;
	else if (input=="361082")  scale=25.974;
	else if (input=="361083")  scale=12.543;
	else if (input=="361084")  scale=3.7583;
	else if (input=="361085")  scale=7.4151;
	else if (input=="361086")  scale=2.36457;
	else if (input=="361087")  scale=4.63359;
    
    else if (input=="410025") scale = 2.0517*1.6806;
    else if (input=="410026") scale = 1.2615*1.7088;

	else if (input=="410062") scale = 32.384*1.0*1.054;
	else if (input=="410063") scale = 32.357*1.0*1.054;



	else if (input=="361500")  scale=1736.58;
	else if (input=="361501")  scale=262.656;
	else if (input=="361502")  scale=83.3909;
	else if (input=="361503")  scale=23.1433;
	else if (input=="361504")  scale=9.03355;
	else if (input=="361505")  scale=1737.08;
	else if (input=="361506")  scale=262.606;
	else if (input=="361507")  scale=83.4504;
	else if (input=="361508")  scale=23.0863;
	else if (input=="361509")  scale=9.04631;
	else if (input=="361510")  scale=1731.87;
	else if (input=="361511")  scale=261.925;
	else if (input=="361512")  scale=83.2311;
	else if (input=="361513")  scale=23.0566;
	else if (input=="361514")  scale=9.0136;
	else if (input=="361515")  scale=9234.85;
	else if (input=="361516")  scale=1474.08;
	else if (input=="361517")  scale=475.549;
	else if (input=="361518")  scale=135.211;
	else if (input=="361519")  scale=53.2947;

	else if (input=="361520")  scale=16752.6;
	else if(input=="361521")  scale=2276.3;
	else if(input=="361522")  scale=772.381;
	else if(input=="361523")  scale=215.347;
	else if(input=="361524")  scale=85.073;
	else if(input=="361525")  scale=16747.8;
	else if(input=="361526")  scale=2275.46;
	else if(input=="361527")  scale=772.429;
	else if(input=="361528")  scale=215.36;
	else if(input=="361529")  scale=85.0441;
	else if(input=="361530")  scale=16729.8;
	else if(input=="361531")  scale=2273.78;
	else if(input=="361532")  scale=771.431;
	else if(input=="361533")  scale=215.384;
	else if(input=="361534")  scale=85.3458;

	return scale;


}


TString TauJetsSelection::Name(TString input){
    

	TString process;


	if (input=="410000") process = "ttbar_hdamp172p5_nonallhad";

	if (input=="410011") process = "singletop_tchan_lept_top";
	if (input=="410012") process = "singletop_tchan_lept_antitop";

	if (input=="410013") process = "singletop_Wt_inclusive_top";
	if (input=="410014") process = "singletop_Wt_inclusive_antitop";
	if (input=="410015") process = "singletop_Wt_dilepton_top";
	if (input=="410016") process = "singletop_Wt_dilepton_antitop";

    if (input=="410025") process = "SingleTopSchan_noAllHad_top";
    if (input=="410026") process = "SingleTopSchan_noAllHad_antitop";

	if (input=="410062") process = "Wt_DS_inclusive_top";
	if (input=="410063") process = "Wt_DS_inclusive_antitop";


	if (input=="361100") process = "PowHeg_Wplusenu";
	if (input=="361101") process = "PowHeg_Wplusmunu";
	if (input=="361102") process = "PowHeg_Wplustaunu";
	if (input=="361103") process = "PowHeg_Wminusenu";
	if (input=="361104") process = "PowHeg_Wminusmunu";
	if (input=="361105") process = "PowHeg_Wminustaunu";


	if (input=="361106") process = "PowHeg_Zee";
	if (input=="361107") process = "PowHeg_Zmumu";
	if (input=="361108") process = "PowHeg_Ztautau";

	if (input=="361300") process = "Wenu_Pt0_70_CVetoBVeto";
	if (input=="361301") process = "Wenu_Pt0_70_CFilterBVeto";
	if (input=="361302") process = "Wenu_Pt0_70_BFilter";
	if (input=="361303") process = "Wenu_Pt70_140_CVetoBVeto";
	if (input=="361304") process = "Wenu_Pt70_140_CFilterBVeto";

	if (input=="361305") process = "Wenu_Pt70_140_BFilter";
	if (input=="361306") process = "Wenu_Pt140_280_CVetoBVeto";
	if (input=="361307") process = "Wenu_Pt140_280_CFilterBVeto";
	if (input=="361308") process = "Wenu_Pt140_280_BFilter";
	if (input=="361309") process = "Wenu_Pt280_500_CVetoBVeto";
	if (input=="361310") process = "Wenu_Pt280_500_CFilterBVeto";
	if (input=="361311") process = "Wenu_Pt280_500_BFilter";
	if (input=="361312") process = "Wenu_Pt500_700_CVetoBVeto";
	if (input=="361313") process = "Wenu_Pt500_700_CFilterBVeto";
	if (input=="361314") process = "Wenu_Pt500_700_BFilter";
	if (input=="361315") process = "Wenu_Pt700_1000_CVetoBVeto";
	if (input=="361316") process = "Wenu_Pt700_1000_CFilterBVeto";
	if (input=="361317") process = "Wenu_Pt700_1000_BFilter";
	if (input=="361318") process = "Wenu_Pt1000_2000_CVetoBVeto";
	if (input=="361319") process = "Wenu_Pt1000_2000_CFilterBVeto";
	if (input=="361320") process = "Wenu_Pt1000_2000_BFilter";
	if (input=="361321") process = "Wenu_Pt2000_E_CMS_CVetoBVeto";
	if (input=="361322") process = "Wenu_Pt2000_E_CMS_CFilterBVeto";
	if (input=="361323") process = "Wenu_Pt2000_E_CMS_BFilter";
	if (input=="361324") process = "Wmunu_Pt0_70_CVetoBVeto";
	if (input=="361325") process = "Wmunu_Pt0_70_CFilterBVeto";
	if (input=="361326") process = "Wmunu_Pt0_70_BFilter";
	if (input=="361327") process = "Wmunu_Pt70_140_CVetoBVeto";
	if (input=="361328") process = "Wmunu_Pt70_140_CFilterBVeto";
	if (input=="361329") process = "Wmunu_Pt70_140_BFilter";
	if (input=="361330") process = "Wmunu_Pt140_280_CVetoBVeto";
	if (input=="361331") process = "Wmunu_Pt140_280_CFilterBVeto";
	if (input=="361332") process = "Wmunu_Pt140_280_BFilter";
	if (input=="361333") process = "Wmunu_Pt280_500_CVetoBVeto";
	if (input=="361334") process = "Wmunu_Pt280_500_CFilterBVeto";
	if (input=="361335") process = "Wmunu_Pt280_500_BFilter";
	if (input=="361336") process = "Wmunu_Pt500_700_CVetoBVeto";
	if (input=="361337") process = "Wmunu_Pt500_700_CFilterBVeto";
	if (input=="361338") process = "Wmunu_Pt500_700_BFilter";
	if (input=="361339") process = "Wmunu_Pt700_1000_CVetoBVeto";
	if (input=="361340") process = "Wmunu_Pt700_1000_CFilterBVeto";
	if (input=="361341") process = "Wmunu_Pt700_1000_BFilter";
	if (input=="361342") process = "Wmunu_Pt1000_2000_CVetoBVeto";
	if (input=="361343") process = "Wmunu_Pt1000_2000_CFilterBVeto";
	if (input=="361344") process = "Wmunu_Pt1000_2000_BFilter";
	if (input=="361345") process = "Wmunu_Pt2000_E_CMS_CVetoBVeto";
	if (input=="361346") process = "Wmunu_Pt2000_E_CMS_CFilterBVeto";
	if (input=="361347") process = "Wmunu_Pt2000_E_CMS_BFilter";
	if (input=="361348") process = "Wtaunu_Pt0_70_CVetoBVeto";
	if (input=="361349") process = "Wtaunu_Pt0_70_CFilterBVeto";
	if (input=="361350") process = "Wtaunu_Pt0_70_BFilter";
	if (input=="361351") process = "Wtaunu_Pt70_140_CVetoBVeto";
	if (input=="361352") process = "Wtaunu_Pt70_140_CFilterBVeto";
	if (input=="361353") process = "Wtaunu_Pt70_140_BFilter";
	if (input=="361354") process = "Wtaunu_Pt140_280_CVetoBVeto";
	if (input=="361355") process = "Wtaunu_Pt140_280_CFilterBVeto";
	if (input=="361356") process = "Wtaunu_Pt140_280_BFilter";
	if (input=="361357") process = "Wtaunu_Pt280_500_CVetoBVeto";
	if (input=="361358") process = "Wtaunu_Pt280_500_CFilterBVeto";
	if (input=="361359") process = "Wtaunu_Pt280_500_BFilter";
	if (input=="361360") process = "Wtaunu_Pt500_700_CVetoBVeto";
	if (input=="361361") process = "Wtaunu_Pt500_700_CFilterBVeto";
	if (input=="361362") process = "Wtaunu_Pt500_700_BFilter";
	if (input=="361363") process = "Wtaunu_Pt700_1000_CVetoBVeto";
	if (input=="361364") process = "Wtaunu_Pt700_1000_CFilterBVeto";
	if (input=="361365") process = "Wtaunu_Pt700_1000_BFilter";
	if (input=="361366") process = "Wtaunu_Pt1000_2000_CVetoBVeto";
	if (input=="361367") process = "Wtaunu_Pt1000_2000_CFilterBVeto";
	if (input=="361368") process = "Wtaunu_Pt1000_2000_BFilter";
	if (input=="361369") process = "Wtaunu_Pt2000_E_CMS_CVetoBVeto";
	if (input=="361370") process = "Wtaunu_Pt2000_E_CMS_CFilterBVeto";
	if (input=="361371") process = "Wtaunu_Pt2000_E_CMS_BFilter";


	if (input=="361372") process = "Zee_Pt0_70_CVetoBVeto";
	if (input=="361373") process = "Zee_Pt0_70_CFilterBVeto";
	if (input=="361374") process = "Zee_Pt0_70_BFilter";
	if (input=="361375") process = "Zee_Pt70_140_CVetoBVeto";
	if (input=="361376") process = "Zee_Pt70_140_CFilterBVeto";
	if (input=="361377") process = "Zee_Pt70_140_BFilter";
	if (input=="361378") process = "Zee_Pt140_280_CVetoBVeto";
	if (input=="361379") process = "Zee_Pt140_280_CFilterBVeto";
	if (input=="361380") process = "Zee_Pt140_280_BFilter";
	if (input=="361381") process = "Zee_Pt280_500_CVetoBVeto";
	if (input=="361382") process = "Zee_Pt280_500_CFilterBVeto";
	if (input=="361383") process = "Zee_Pt280_500_BFilter";
	if (input=="361384") process = "Zee_Pt500_700_CVetoBVeto";
	if (input=="361385") process = "Zee_Pt500_700_CFilterBVeto";
	if (input=="361386") process = "Zee_Pt500_700_BFilter";
	if (input=="361387") process = "Zee_Pt700_1000_CVetoBVeto";
	if (input=="361388") process = "Zee_Pt700_1000_CFilterBVeto";
	if (input=="361389") process = "Zee_Pt700_1000_BFilter";
	if (input=="361390") process = "Zee_Pt1000_2000_CVetoBVeto";
	if (input=="361391") process = "Zee_Pt1000_2000_CFilterBVeto";
	if (input=="361392") process = "Zee_Pt1000_2000_BFilter";
	if (input=="361393") process = "Zee_Pt2000_E_CMS_CVetoBVeto";
	if (input=="361394") process = "Zee_Pt2000_E_CMS_CFilterBVeto";
	if (input=="361395") process = "Zee_Pt2000_E_CMS_BFilter";
	if (input=="361396") process = "Zmumu_Pt0_70_CVetoBVeto";
	if (input=="361397") process = "ZtautauPt0_70_CFilterBVeto";
	if (input=="361398") process = "Zmumu_Pt0_70_BFilter";
	if (input=="361399") process = "Zmumu_Pt70_140_CVetoBVeto";
	if (input=="361400") process = "Zmumu_Pt70_140_CFilterBVeto";
	if (input=="361401") process = "Zmumu_Pt70_140_BFilter";
	if (input=="361402") process = "Zmumu_Pt140_280_CVetoBVeto";
	if (input=="361403") process = "Zmumu_Pt140_280_CFilterBVeto";
	if (input=="361404") process = "Zmumu_Pt140_280_BFilter";
	if (input=="361405") process = "Zmumu_Pt280_500_CVetoBVeto";
	if (input=="361406") process = "Zmumu_Pt280_500_CFilterBVeto";
	if (input=="361407") process = "Zmumu_Pt280_500_BFilter";
	if (input=="361408") process = "Zmumu_Pt500_700_CVetoBVeto";
	if (input=="361409") process = "Zmumu_Pt500_700_CFilterBVeto";
	if (input=="361410") process = "Zmumu_Pt500_700_BFilter";
	if (input=="361411") process = "Zmumu_Pt700_1000_CVetoBVeto";
	if (input=="361412") process = "Zmumu_Pt700_1000_CFilterBVeto";
	if (input=="361413") process = "Zmumu_Pt700_1000_BFilter";
	if (input=="361414") process = "Zmumu_Pt1000_2000_CVetoBVeto";
	if (input=="361415") process = "Zmumu_Pt1000_2000_CFilterBVeto";
	if (input=="361416") process = "Zmumu_Pt1000_2000_BFilter";
	if (input=="361417") process = "Zmumu_Pt2000_E_CMS_CVetoBVeto";
	if (input=="361418") process = "Zmumu_Pt2000_E_CMS_CFilterBVeto";
	if (input=="361419") process = "Zmumu_Pt2000_E_CMS_BFilter";
	if (input=="361420") process = "Ztautau_Pt0_70_CVetoBVeto";
	if (input=="361421") process = "Ztautau_Pt0_70_CFilterBVeto";
	if (input=="361422") process = "Ztautau_Pt0_70_BFilter";
	if (input=="361423") process = "Ztautau_Pt70_140_CVetoBVeto";
	if (input=="361424") process = "Ztautau_Pt70_140_CFilterBVeto";
	if (input=="361425") process = "Ztautau_Pt70_140_BFilter";
	if (input=="361426") process = "Ztautau_Pt140_280_CVetoBVeto";
	if (input=="361427") process = "Ztautau_Pt140_280_CFilterBVeto";
	if (input=="361428") process = "Ztautau_Pt140_280_BFilter";
	if (input=="361429") process = "Ztautau_Pt280_500_CVetoBVeto";
	if (input=="361430") process = "Ztautau_Pt280_500_CFilterBVeto";
	if (input=="361431") process = "Ztautau_Pt280_500_BFilter";
	if (input=="361432") process = "Ztautau_Pt500_700_CVetoBVeto";
	if (input=="361433") process = "Ztautau_Pt500_700_CFilterBVeto";
	if (input=="361434") process = "Ztautau_Pt500_700_BFilter";
	if (input=="361435") process = "Ztautau_Pt700_1000_CVetoBVeto";
	if (input=="361436") process = "Ztautau_Pt700_1000_CFilterBVeto";
	if (input=="361437") process = "Ztautau_Pt700_1000_BFilter";
	if (input=="361438") process = "Ztautau_Pt1000_2000_CVetoBVeto";
	if (input=="361439") process = "Ztautau_Pt1000_2000_CFilterBVeto";
	if (input=="361440") process = "Ztautau_Pt1000_2000_BFilter";
	if (input=="361441") process = "Ztautau_Pt2000_E_CMS_CVetoBVeto";
	if (input=="361442") process = "Ztautau_Pt2000_E_CMS_CFilterBVeto";
	if (input=="361443") process = "Ztautau_Pt2000_E_CMS_BFilter";
	if (input=="361444") process = "Znunu_Pt0_70_CVetoBVeto";
	if (input=="361445") process = "Znunu_Pt0_70_CFilterBVeto";
	if (input=="361446") process = "Znunu_Pt0_70_BFilter";
	if (input=="361447") process = "Znunu_Pt70_140_CVetoBVeto";
	if (input=="361448") process = "Znunu_Pt70_140_CFilterBVeto";
	if (input=="361449") process = "Znunu_Pt70_140_BFilter";
	if (input=="361450") process = "Znunu_Pt140_280_CVetoBVeto";
	if (input=="361451") process = "Znunu_Pt140_280_CFilterBVeto";
	if (input=="361452") process = "Znunu_Pt140_280_BFilter";
	if (input=="361453") process = "Znunu_Pt280_500_CVetoBVeto";
	if (input=="361454") process = "Znunu_Pt280_500_CFilterBVeto";
	if (input=="361455") process = "Znunu_Pt280_500_BFilter";
	if (input=="361456") process = "Znunu_Pt500_700_CVetoBVeto";
	if (input=="361457") process = "Znunu_Pt500_700_CFilterBVeto";
	if (input=="361458") process = "Znunu_Pt500_700_BFilter";
	if (input=="361459") process = "Znunu_Pt700_1000_CVetoBVeto";
	if (input=="361460") process = "Znunu_Pt700_1000_CFilterBVeto";
	if (input=="361461") process = "Znunu_Pt700_1000_BFilter";
	if (input=="361462") process = "Znunu_Pt1000_2000_CVetoBVeto";
	if (input=="361463") process = "Znunu_Pt1000_2000_CFilterBVeto";
	if (input=="361464") process = "Znunu_Pt1000_2000_BFilter";
	if (input=="361465") process = "Znunu_Pt2000_E_CMS_CVetoBVeto";
	if (input=="361466") process = "Znunu_Pt2000_E_CMS_CFilterBVeto";
	if (input=="361467") process = "Znunu_Pt2000_E_CMS_BFilter";


	if (input=="361064") process = "Sherpa_CT10_lllvSFMinus";
	if (input=="361065") process = "Sherpa_CT10_lllvOFMinus";//
	if (input=="361066") process = "Sherpa_CT10_lllvSFPlus";//
	if (input=="361067") process = "Sherpa_CT10_lllvOFPlus";//
	if (input=="361068") process = "Sherpa_CT10_llvv";//
	if (input=="361069") process = "Sherpa_CT10_llvvjj_ss_EW4";//
	if (input=="361070") process = "Sherpa_CT10_llvvjj_ss_EW6";//
	if (input=="361071") process = "Sherpa_CT10_lllvjj_EW6";//
	if (input=="361072") process = "Sherpa_CT10_lllljj_EW6";//
	if (input=="361073") process = "Sherpa_CT10_ggllll";//
	if (input=="361077") process = "Sherpa_CT10_ggllvv";//
	if (input=="361081") process = "Sherpa_CT10_WplvWmqq";//
	if (input=="361082") process = "Sherpa_CT10_WpqqWmlv";//
	if (input=="361083") process = "Sherpa_CT10_WlvZqq";//
	if (input=="361084") process = "Sherpa_CT10_WqqZll";//
	if (input=="361085") process = "Sherpa_CT10_WqqZvv";//
	if (input=="361087") process = "Sherpa_CT10_ZqqZvv";//


	if (input=="341524") process="signal_200GeV"; // add
	if (input=="341003") process="signal_400GeV"; // add

	if (input=="341535") process="signal_1000GeV";

	if (input=="341525") process="signal_225GeV";

	if (input=="341526") process="signal_250GeV";
	if (input=="341527") process="signal_275GeV";
	if (input=="341528") process="signal_300GeV";
	if (input=="341529") process="signal_350GeV"; // add
	if (input=="341530") process="signal_500GeV";
	if (input=="341531") process="signal_600GeV"; // add
	if (input=="341532") process="signal_700GeV";
	if (input=="341533") process="signal_800GeV";
	if (input=="341534") process="signal_900GeV";
	if (input=="341535") process="signal_1000GeV"; // add
	if (input=="341536") process="signal_1200GeV";
	if (input=="341537") process="signal_1400GeV";
	if (input=="341538") process="signal_1600GeV"; // add
	if (input=="341539") process="signal_1800GeV";
	if (input=="341540") process="signal_2000GeV"; // add

	if (input=="361081")  process="Sherpa_CT10_WplvWmqq";
	if (input=="361082")  process="Sherpa_CT10_WpqqWmlv";
	if (input=="361083")  process="Sherpa_CT10_WlvZqq";
	if (input=="361084")  process="Sherpa_CT10_WqqZll";
	if (input=="361085")  process="Sherpa_CT10_WqqZvv";
	if (input=="361086")  process="Sherpa_CT10_ZqqZll";
	if (input=="361087")  process="Sherpa_CT10_ZqqZvv";

	if (input=="342092") process="signal_160GeV";
	if (input=="342093") process="signal_165GeV";
	if (input=="342094") process="signal_170GeV";
	if (input=="342095") process="signal_175GeV";
	if (input=="342096") process="signal_180GeV";

	if (input=="361520")  process="Wenu_Np0";
	if (input=="361521")  process="Wenu_Np1";
	if (input=="361522")  process="Wenu_Np2";
	if (input=="361523")  process="Wenu_Np3";
	if (input=="361524")  process="Wenu_Np4";
	if (input=="361525")  process="Wmunu_Np0";
	if (input=="361526")  process="Wmunu_Np1";
	if (input=="361527")  process="Wmunu_Np2";
	if (input=="361528")  process="Wmunu_Np3";
	if (input=="361529")  process="Wmunu_Np4";
	if (input=="361530")  process="Wtaunu_Np0";
	if (input=="361531")  process="Wtaunu_Np1";
	if (input=="361532")  process="Wtaunu_Np2";
	if (input=="361533")  process="Wtaunu_Np3";
	if (input=="361534")  process="Wtaunu_Np4";


	if (input=="361500")  process="Zee_Np0";
	if (input=="361501")  process="Zee_Np1";
	if (input=="361502")  process="Zee_Np2";
	if (input=="361503")  process="Zee_Np3";
	if (input=="361504")  process="Zee_Np4";
	if (input=="361505")  process="Zmumu_Np0";
	if (input=="361506")  process="Zmumu_Np1";
	if (input=="361507")  process="Zmumu_Np2";
	if (input=="361508")  process="Zmumu_Np3";
	if (input=="361509")  process="Zmumu_Np4";
	if (input=="361510")  process="Ztautau_Np0";
	if (input=="361511")  process="Ztautau_Np1";
	if (input=="361512")  process="Ztautau_Np2";
	if (input=="361513")  process="Ztautau_Np3";
	if (input=="361514")  process="Ztautau_Np4";
	if (input=="361515")  process="Znunu_Np0";
	if (input=="361516")  process="Znunu_Np1";
	if (input=="361517")  process="Znunu_Np2";
	if (input=="361518")  process="Znunu_Np3";
	if (input=="361519")  process="Znunu_Np4";

	//

	return process;
}

Int_t TauJetsSelection::Type(TString input){

	Int_t type;

	// signal = 0
	// top = 1
	// W+taunu = 2
	// Z+tautau = 3
	// diboson =4
	// W/Z+lnu/nunu = 5

	if (input=="410000") type = 1;

	if (input=="410011") type = 1;
	if (input=="410012") type = 1;

	if (input=="410013") type = 1;
	if (input=="410014") type = 1;
	if (input=="410015") type = 1;
	if (input=="410016") type = 1;
    
    if (input=="410025") type = 1;
    if (input=="410026") type = 1;

	if (input=="410062") type = 1;
	if (input=="410063") type = 1;




	if (input=="341524") type = 0;//="signal_200GeV";
	if (input=="341003") type = 0;//="signal_400GeV";

	if (input=="341535") type = 0;//="signal_1000GeV";

	if (input=="341525") type = 0;//="signal_225GeV";

	if (input=="341526") type = 0;//="signal_250GeV";
	if (input=="341527") type = 0;//="signal_275GeV";
	if (input=="341528") type = 0;//="signal_300GeV";
	if (input=="341529") type = 0;//="signal_350GeV";
	if (input=="341530") type = 0;//="signal_500GeV";
	if (input=="341531") type = 0;//="signal_600GeV";
	if (input=="341532") type = 0;//="signal_700GeV";
	if (input=="341533") type = 0;//="signal_800GeV";
	if (input=="341534") type = 0;//="signal_900GeV";
	if (input=="341535") type = 0;//="signal_1000GeV";
	if (input=="341536") type = 0;//="signal_1200GeV";
	if (input=="341537") type = 0;//="signal_1400GeV";
	if (input=="341538") type = 0;//="signal_1600GeV";
	if (input=="341539") type = 0;//="signal_1800GeV";
	if (input=="341540") type = 0;//="signal_2000GeV";

	if (input=="361081")  type = 4;//="Sherpa_CT10_WplvWmqq";
	if (input=="361082")  type = 4;//="Sherpa_CT10_WpqqWmlv";
	if (input=="361083")  type = 4;//="Sherpa_CT10_WlvZqq";
	if (input=="361084")  type = 4;//="Sherpa_CT10_WqqZll";
	if (input=="361085")  type = 4;//="Sherpa_CT10_WqqZvv";
	if (input=="361086")  type = 4;//="Sherpa_CT10_ZqqZll";
	if (input=="361087")  type = 4;//="Sherpa_CT10_ZqqZvv";

	if (input=="342092") type = 0;//="signal_160GeV";
	if (input=="342093") type = 0;//="signal_165GeV";
	if (input=="342094") type = 0;//="signal_170GeV";
	if (input=="342095") type = 0;//="signal_175GeV";
	if (input=="342096") type = 0;//="signal_180GeV";

	if (input=="361520")  type = 5;//="Wenu_Np0";
	if (input=="361521")  type = 5;//="Wenu_Np1";
	if (input=="361522")  type = 5;//="Wenu_Np2";
	if (input=="361523")  type = 5;//="Wenu_Np3";
	if (input=="361524")  type = 5;//="Wenu_Np4";
	if (input=="361525")  type = 5;//="Wmunu_Np0";
	if (input=="361526")  type = 5;//="Wmunu_Np1";
	if (input=="361527")  type = 5;//="Wmunu_Np2";
	if (input=="361528")  type = 5;//="Wmunu_Np3";
	if (input=="361529")  type = 5;//="Wmunu_Np4";
    
    
	if (input=="361530")  type = 2;//="Wtaunu_Np0";
	if (input=="361531")  type = 2;//="Wtaunu_Np1";
	if (input=="361532")  type = 2;//="Wtaunu_Np2";
	if (input=="361533")  type = 2;//="Wtaunu_Np3";
	if (input=="361534")  type = 2;//="Wtaunu_Np4";


	if (input=="361500")  type = 5;//="Zee_Np0";
	if (input=="361501")  type = 5;//="Zee_Np1";
	if (input=="361502")  type = 5;//="Zee_Np2";
	if (input=="361503")  type = 5;//="Zee_Np3";
	if (input=="361504")  type = 5;//="Zee_Np4";
	if (input=="361505")  type = 5;//="Zmumu_Np0";
	if (input=="361506")  type = 5;//="Zmumu_Np1";
	if (input=="361507")  type = 5;//="Zmumu_Np2";
	if (input=="361508")  type = 5;//="Zmumu_Np3";
	if (input=="361509")  type = 5;//="Zmumu_Np4";
    
	if (input=="361510")  type = 3;//="Ztautau_Np0";
	if (input=="361511")  type = 3;//="Ztautau_Np1";
	if (input=="361512")  type = 3;//="Ztautau_Np2";
	if (input=="361513")  type = 3;//="Ztautau_Np3";
	if (input=="361514")  type = 3;//="Ztautau_Np4";
    
	if (input=="361515")  type = 5;//="Znunu_Np0";
	if (input=="361516")  type = 5;//="Znunu_Np1";
	if (input=="361517")  type = 5;//="Znunu_Np2";
	if (input=="361518")  type = 5;//="Znunu_Np3";
	if (input=="361519")  type = 5;//="Znunu_Np4";

	if (input=="fakes")  type = 6;//="Znunu_Np4";
	if (input=="data")  type = 7;//="Znunu_Np4";
    if (input=="full_data") type = 7;

	//

	return type;
}



double TauJetsSelection::GetWeight(TString input){

	if (Type(input)==0){
        
		return bjet_sf_MVX_NOMINAL_sf*bjet_sf_MVX_NOMINAL_ineff_sf*weight_pileup*tau_0_sf_NOMINAL_TAU_EFF_RECO*tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTMEDIUM*tau_0_sf_NOMINAL_TAU_EFF_ELEOLR;
	}
	else if(Type(input)==7){
		return 1;
	}
	else if (Type(input)==6){
        return tau_0_ff_medium_05;
	}
	else{
//        return tau_0_ff_medium_05;

		return bjet_sf_MVX_NOMINAL_sf*bjet_sf_MVX_NOMINAL_ineff_sf*weight_pileup*weight_mc*tau_0_sf_NOMINAL_TAU_EFF_RECO*tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTMEDIUM*tau_0_sf_NOMINAL_TAU_EFF_ELEOLR;
	}
}
