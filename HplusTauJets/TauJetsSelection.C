#define TauJetsSelection_cxx
#include "TauJetsSelection.h"
#include "FunctUtil.C"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TMath.h>
#include "TApplication.h"
#include <iostream>
#include "TProfile.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cmath>
#include <TLorentzVector.h>

using namespace std;

void TauJetsSelection::Loop(TString input)
{
	TH1::SetDefaultSumw2();

	double c1=0;
	double c2=0;
	double c3=0;
	double c4=0;
	double c5=0;
	double c6=0;
	double c7=0;
	double c8=0;
	double c9=0;
	double c10=0;


	double c1_trueTau=0;
	double c2_trueTau=0;
	double c3_trueTau=0;
	double c4_trueTau=0;
	double c5_trueTau=0;
	double c6_trueTau=0;
	double c7_trueTau=0;
	double c8_trueTau=0;
	double c9_trueTau=0;
	double c10_trueTau=0;


	double c1_fakeTau=0;
	double c2_fakeTau=0;
	double c3_fakeTau=0;
	double c4_fakeTau=0;
	double c5_fakeTau=0;
	double c6_fakeTau=0;
	double c7_fakeTau=0;
	double c8_fakeTau=0;
	double c9_fakeTau=0;
	double c10_fakeTau=0;


	double c0w=0;
	double c0=0;
	double c0w_trueTau=0;
	double c0w_fakeTau=0;

	double c1w=0;
	double c2w=0;
	double c3w=0;
	double c4w=0;
	double c5w=0;
	double c6w=0;
	double c7w=0;
	double c8w=0;
	double c9w=0;
	double c10w=0;

	double c1w_trueTau=0;
	double c2w_trueTau=0;
	double c3w_trueTau=0;
	double c4w_trueTau=0;
	double c5w_trueTau=0;
	double c6w_trueTau=0;
	double c7w_trueTau=0;
	double c8w_trueTau=0;
	double c9w_trueTau=0;
	double c10w_trueTau=0;

	double c1w_fakeTau=0;
	double c2w_fakeTau=0;
	double c3w_fakeTau=0;
	double c4w_fakeTau=0;
	double c5w_fakeTau=0;
	double c6w_fakeTau=0;
	double c7w_fakeTau=0;
	double c8w_fakeTau=0;
	double c9w_fakeTau=0;
	double c10w_fakeTau=0;
    
    // Some variables I added to check for errors in b-tagging
    int no_btags = 0;
    int no_jet1 = 0;
    int no_jet2 = 0;
    int conflict = 0;
    int totalevents = 0;

	bool trueTau;

    //initialize all variables you want to build
	TLorentzVector met;
	TLorentzVector tau;
	TLorentzVector jet1;
	TLorentzVector jet2;
	TLorentzVector jet3;
    TLorentzVector jet4;

	TLorentzVector bjet1;
	TLorentzVector bjet2;

	TLorentzVector W;
	TLorentzVector H;


	TLorentzVector jet1_bjetveto;
	TLorentzVector jet2_bjetveto;

	double weight;

	bool jet_0_btag;
	bool jet_1_btag;
	bool jet_2_btag;
	bool jet_3_btag;


    //build new ntuple
	acceptance = fChain->CloneTree(0);
	acceptance->SetAutoSave(0);
	//acceptance->SetAutoFlush(0);
	acceptance->SetDirectory(0);


    
    //Add branches for the output ntuple
    
	acceptance->Branch("XS_Lumi_Weight", &XS_Lumi_Weight, "XS_Lumi_Weight/D");
	acceptance->Branch("Bkg_Type", &Bkg_Type, "Bkg_Type/I");

	acceptance->Branch("bjet_pt1", &bjet_pt1, "bjet_pt1/D");
	acceptance->Branch("bjet_pt2", &bjet_pt2, "bjet_pt2/D");

	acceptance->Branch("bjet_eta1", &bjet_eta1, "bjet_eta1/D");
	acceptance->Branch("bjet_eta2", &bjet_eta2, "bjet_eta2/D");

	acceptance->Branch("bjet_phi1", &bjet_phi1, "bjet_phi1/D");
	acceptance->Branch("bjet_phi2", &bjet_phi2, "bjet_phi2/D");

	acceptance->Branch("jet_bveto_pt1", &jet_bveto_pt1, "jet_bveto_pt1/D");
	acceptance->Branch("jet_bveto_pt2", &jet_bveto_pt2, "jet_bveto_pt2/D");

	acceptance->Branch("jet_bveto_eta1", &jet_bveto_eta1, "jet_bveto_eta1/D");
	acceptance->Branch("jet_bveto_eta2", &jet_bveto_eta2, "jet_bveto_eta2/D");

	acceptance->Branch("jet_bveto_phi1", &jet_bveto_phi1, "jet_bveto_phi1/D");
	acceptance->Branch("jet_bveto_phi2", &jet_bveto_phi2, "jet_bveto_phi2/D");

	acceptance->Branch("finalweight", &finalweight, "finalweight/D");

	acceptance->Branch("W_pt", &W_pt, "W_pt/D");
	acceptance->Branch("W_eta", &W_eta, "W_eta/D");
	acceptance->Branch("W_phi", &W_phi, "W_phi/D");
    acceptance->Branch("W_m", &W_m, "W_m/D");
    acceptance->Branch("W_mT", &W_mT, "W_mT/D");
    
	acceptance->Branch("H_pt", &H_pt, "H_pt/D");
	acceptance->Branch("H_eta", &H_eta, "H_eta");
	acceptance->Branch("H_phi", &H_phi, "H_phi/D");
    acceptance->Branch("H_m", &H_m, "H_m/D");
    acceptance->Branch("H_mT", &H_mT, "H_mT/D");

	acceptance->Branch("top_pt", &top_pt, "top_pt/D");
	acceptance->Branch("top_eta", &top_eta, "top_eta/D");
	acceptance->Branch("top_phi", &top_phi, "top_phi/D");
    acceptance->Branch("top_m", &top_m, "top_m/D");
    acceptance->Branch("top_mT", &top_mT, "top_mT/D");
    
    acceptance->Branch("tau_pt", &tau_pt, "tau_pt/D");
    acceptance->Branch("tau_eta", &tau_eta, "tau_eta/D");
    acceptance->Branch("tau_phi", &tau_phi, "tau_phi/D");
    acceptance->Branch("tau_m", &tau_m, "tau_m/D");
    acceptance->Branch("tau_mT", &tau_mT, "tau_mT/D");

    acceptance->Branch("met_pt", &met_pt, "met_pt/D");
    acceptance->Branch("met_phi", &met_phi, "met_phi/D");
    
    acceptance->Branch("jet1_pt", &jet1_pt, "jet1_pt/D");
    acceptance->Branch("jet1_eta", &jet1_eta, "jet1_eta/D");
    acceptance->Branch("jet1_phi", &jet1_phi, "jet1_phi/D");
    acceptance->Branch("jet1_m", &jet1_m, "jet1_m/D");
    acceptance->Branch("jet1_mT", &jet1_mT, "jet1_mT/D");

    acceptance->Branch("jet2_pt", &jet2_pt, "jet2_pt/D");
    acceptance->Branch("jet2_eta", &jet2_eta, "jet2_eta/D");
    acceptance->Branch("jet2_phi", &jet2_phi, "jet2_phi/D");
    acceptance->Branch("jet2_m", &jet2_m, "jet2_m/D");
    acceptance->Branch("jet2_mT", &jet2_mT, "jet2_mT/D");

    acceptance->Branch("bjet1_pt", &bjet1_pt, "bjet1_pt/D");
    acceptance->Branch("bjet1_eta", &bjet1_eta, "bjet1_eta/D");
    acceptance->Branch("bjet1_phi", &bjet1_phi, "bjet1_phi/D");
    acceptance->Branch("bjet1_m", &bjet1_m, "bjet1_m/D");
    acceptance->Branch("bjet1_mT", &bjet1_mT, "bjet1_mT/D");

    acceptance->Branch("bjet2_pt", &bjet2_pt, "bjet2_pt/D");
    acceptance->Branch("bjet2_eta", &bjet2_eta, "bjet2_eta/D");
    acceptance->Branch("bjet2_phi", &bjet2_phi, "bjet2_phi/D");
    acceptance->Branch("bjet2_m", &bjet2_m, "bjet2_m/D");
    acceptance->Branch("bjet2_mT", &bjet2_mT, "bjet2_mT/D");
    
    acceptance->Branch("MT_tau_met", &MT_tau_met, "MT_tau_met/D");
    
    acceptance->Branch("dPhi_met_W", &dPhi_met_W, "dPhi_met_W/D");
    acceptance->Branch("dPhi_met_H", &dPhi_met_H, "dPhi_met_H/D");
    acceptance->Branch("dPhi_met_top", &dPhi_met_top, "dPhi_met_top/D");
    acceptance->Branch("dPhi_met_tau", &dPhi_met_tau, "dPhi_met_tau/D");
    acceptance->Branch("dPhi_met_jet1", &dPhi_met_jet1, "dPhi_met_jet1/D");
    acceptance->Branch("dPhi_met_jet2", &dPhi_met_jet2, "dPhi_met_jet2/D");
    acceptance->Branch("dPhi_met_bjet1", &dPhi_met_bjet1, "dPhi_met_bjet1/D");
    acceptance->Branch("dPhi_met_bjet2", &dPhi_met_bjet2, "dPhi_met_bjet2/D");

    acceptance->Branch("dPt_met_W", &dPt_met_W, "dPt_met_W/D");
    acceptance->Branch("dPt_met_H", &dPt_met_H, "dPt_met_H/D");
    acceptance->Branch("dPt_met_top", &dPt_met_top, "dPt_met_top/D");
    acceptance->Branch("dPt_met_tau", &dPt_met_tau, "dPt_met_tau/D");
    acceptance->Branch("dPt_met_jet1", &dPt_met_jet1, "dPt_met_jet1/D");
    acceptance->Branch("dPt_met_jet2", &dPt_met_jet2, "dPt_met_jet2/D");
    acceptance->Branch("dPt_met_bjet1", &dPt_met_bjet1, "dPt_met_bjet1/D");
    acceptance->Branch("dPt_met_bjet2", &dPt_met_bjet2, "dPt_met_bjet2/D");
    
    acceptance->Branch("dPhi_W_H", &dPhi_W_H, "dPhi_W_H/D");
    acceptance->Branch("dPhi_W_top", &dPhi_W_top, "dPhi_W_top/D");
    acceptance->Branch("dPhi_W_tau", &dPhi_W_tau, "dPhi_W_tau/D");
    acceptance->Branch("dPhi_W_jet1", &dPhi_W_jet1, "dPhi_W_jet1/D");
    acceptance->Branch("dPhi_W_bjet1", &dPhi_W_bjet1, "dPhi_bjet1_H/D");
    acceptance->Branch("dPhi_W_jet2", &dPhi_W_jet2, "dPhi_W_jet2/D");
    acceptance->Branch("dPhi_W_bjet2", &dPhi_W_bjet2, "dPhi_W_bjet2/D");
    acceptance->Branch("dPhi_H_top", &dPhi_H_top, "dPhi_H_top/D");
    acceptance->Branch("dPhi_H_tau", &dPhi_H_tau, "dPhi_H_tau/D");
    acceptance->Branch("dPhi_H_jet1", &dPhi_H_jet1, "dPhi_H_jet1/D");
    acceptance->Branch("dPhi_H_bjet1", &dPhi_H_bjet1, "dPhi_H_bjet1/D");
    acceptance->Branch("dPhi_H_jet2", &dPhi_H_jet2, "dPhi_H_jet2/D");
    acceptance->Branch("dPhi_H_bjet2", &dPhi_H_bjet2, "dPhi_H_bjet2/D");
    acceptance->Branch("dPhi_top_tau", &dPhi_top_tau, "dPhi_top_tau/D");
    acceptance->Branch("dPhi_top_jet1", &dPhi_top_jet1, "dPhi_top_jet1/D");
    acceptance->Branch("dPhi_top_bjet1", &dPhi_top_bjet1, "dPhi_top_bjet1/D");
    acceptance->Branch("dPhi_top_jet2", &dPhi_top_jet2, "dPhi_top_jet2/D");
    acceptance->Branch("dPhi_top_bjet2", &dPhi_top_bjet2, "dPhi_top_bjet2/D");
    acceptance->Branch("dPhi_tau_jet1", &dPhi_tau_jet1, "dPhi_tau_jet1/D");
    acceptance->Branch("dPhi_tau_bjet1", &dPhi_tau_bjet1, "dPhi_tau_bjet1/D");
    acceptance->Branch("dPhi_tau_jet2", &dPhi_tau_jet2, "dPhi_tau_jet2/D");
    acceptance->Branch("dPhi_tau_bjet2", &dPhi_tau_bjet2, "dPhi_tau_bjet2/D");
    acceptance->Branch("dPhi_jet1_bjet1", &dPhi_jet1_bjet1, "dPhi_jet1_bjet1/D");
    acceptance->Branch("dPhi_jet1_jet2", &dPhi_jet1_jet2, "dPhi_jet1_jet2/D");
    acceptance->Branch("dPhi_jet1_bjet2", &dPhi_jet1_bjet2, "dPhi_jet1_bjet2/D");
    acceptance->Branch("dPhi_bjet1_jet2", &dPhi_bjet1_jet2, "dPhi_bjet1_jet2/D");
    acceptance->Branch("dPhi_bjet1_bjet2", &dPhi_bjet1_bjet2, "dPhi_bjet1_bjet2/D");
    acceptance->Branch("dPhi_jet2_bjet2", &dPhi_jet2_bjet2, "dPhi_jet2_bjet2/D");
    
    acceptance->Branch("dPt_W_H", &dPt_W_H, "dPt_W_H/D");
    acceptance->Branch("dPt_W_top", &dPt_W_top, "dPt_W_top/D");
    acceptance->Branch("dPt_W_tau", &dPt_W_tau, "dPt_W_tau/D");
    acceptance->Branch("dPt_W_jet1", &dPt_W_jet1, "dPt_W_jet1/D");
    acceptance->Branch("dPt_W_bjet1", &dPt_W_bjet1, "dPt_bjet1_H/D");
    acceptance->Branch("dPt_W_jet2", &dPt_W_jet2, "dPt_W_jet2/D");
    acceptance->Branch("dPt_W_bjet2", &dPt_W_bjet2, "dPt_W_bjet2/D");
    acceptance->Branch("dPt_H_top", &dPt_H_top, "dPt_H_top/D");
    acceptance->Branch("dPt_H_tau", &dPt_H_tau, "dPt_H_tau/D");
    acceptance->Branch("dPt_H_jet1", &dPt_H_jet1, "dPt_H_jet1/D");
    acceptance->Branch("dPt_H_bjet1", &dPt_H_bjet1, "dPt_H_bjet1/D");
    acceptance->Branch("dPt_H_jet2", &dPt_H_jet2, "dPt_H_jet2/D");
    acceptance->Branch("dPt_H_bjet2", &dPt_H_bjet2, "dPt_H_bjet2/D");
    acceptance->Branch("dPt_top_tau", &dPt_top_tau, "dPt_top_tau/D");
    acceptance->Branch("dPt_top_jet1", &dPt_top_jet1, "dPt_top_jet1/D");
    acceptance->Branch("dPt_top_bjet1", &dPt_top_bjet1, "dPt_top_bjet1/D");
    acceptance->Branch("dPt_top_jet2", &dPt_top_jet2, "dPt_top_jet2/D");
    acceptance->Branch("dPt_top_bjet2", &dPt_top_bjet2, "dPt_top_bjet2/D");
    acceptance->Branch("dPt_tau_jet1", &dPt_tau_jet1, "dPt_tau_jet1/D");
    acceptance->Branch("dPt_tau_bjet1", &dPt_tau_bjet1, "dPt_tau_bjet1/D");
    acceptance->Branch("dPt_tau_jet2", &dPt_tau_jet2, "dPt_tau_jet2/D");
    acceptance->Branch("dPt_tau_bjet2", &dPt_tau_bjet2, "dPt_tau_bjet2/D");
    acceptance->Branch("dPt_jet1_bjet1", &dPt_jet1_bjet1, "dPt_jet1_bjet1/D");
    acceptance->Branch("dPt_jet1_jet2", &dPt_jet1_jet2, "dPt_jet1_jet2/D");
    acceptance->Branch("dPt_jet1_bjet2", &dPt_jet1_bjet2, "dPt_jet1_bjet2/D");
    acceptance->Branch("dPt_bjet1_jet2", &dPt_bjet1_jet2, "dPt_bjet1_jet2/D");
    acceptance->Branch("dPt_bjet1_bjet2", &dPt_bjet1_bjet2, "dPt_bjet1_bjet2/D");
    acceptance->Branch("dPt_jet2_bjet2", &dPt_jet2_bjet2, "dPt_jet2_bjet2/D");
    
    acceptance->Branch("dEta_W_H", &dEta_W_H, "dEta_W_H/D");
    acceptance->Branch("dEta_W_top", &dEta_W_top, "dEta_W_top/D");
    acceptance->Branch("dEta_W_tau", &dEta_W_tau, "dEta_W_tau/D");
    acceptance->Branch("dEta_W_jet1", &dEta_W_jet1, "dEta_W_jet1/D");
    acceptance->Branch("dEta_W_bjet1", &dEta_W_bjet1, "dEta_bjet1_H/D");
    acceptance->Branch("dEta_W_jet2", &dEta_W_jet2, "dEta_W_jet2/D");
    acceptance->Branch("dEta_W_bjet2", &dEta_W_bjet2, "dEta_W_bjet2/D");
    acceptance->Branch("dEta_H_top", &dEta_H_top, "dEta_H_top/D");
    acceptance->Branch("dEta_H_tau", &dEta_H_tau, "dEta_H_tau/D");
    acceptance->Branch("dEta_H_jet1", &dEta_H_jet1, "dEta_H_jet1/D");
    acceptance->Branch("dEta_H_bjet1", &dEta_H_bjet1, "dEta_H_bjet1/D");
    acceptance->Branch("dEta_H_jet2", &dEta_H_jet2, "dEta_H_jet2/D");
    acceptance->Branch("dEta_H_bjet2", &dEta_H_bjet2, "dEta_H_bjet2/D");
    acceptance->Branch("dEta_top_tau", &dEta_top_tau, "dEta_top_tau/D");
    acceptance->Branch("dEta_top_jet1", &dEta_top_jet1, "dEta_top_jet1/D");
    acceptance->Branch("dEta_top_bjet1", &dEta_top_bjet1, "dEta_top_bjet1/D");
    acceptance->Branch("dEta_top_jet2", &dEta_top_jet2, "dEta_top_jet2/D");
    acceptance->Branch("dEta_top_bjet2", &dEta_top_bjet2, "dEta_top_bjet2/D");
    acceptance->Branch("dEta_tau_jet1", &dEta_tau_jet1, "dEta_tau_jet1/D");
    acceptance->Branch("dEta_tau_bjet1", &dEta_tau_bjet1, "dEta_tau_bjet1/D");
    acceptance->Branch("dEta_tau_jet2", &dEta_tau_jet2, "dEta_tau_jet2/D");
    acceptance->Branch("dEta_tau_bjet2", &dEta_tau_bjet2, "dEta_tau_bjet2/D");
    acceptance->Branch("dEta_jet1_bjet1", &dEta_jet1_bjet1, "dEta_jet1_bjet1/D");
    acceptance->Branch("dEta_jet1_jet2", &dEta_jet1_jet2, "dEta_jet1_jet2/D");
    acceptance->Branch("dEta_jet1_bjet2", &dEta_jet1_bjet2, "dEta_jet1_bjet2/D");
    acceptance->Branch("dEta_bjet1_jet2", &dEta_bjet1_jet2, "dEta_bjet1_jet2/D");
    acceptance->Branch("dEta_bjet1_bjet2", &dEta_bjet1_bjet2, "dEta_bjet1_bjet2/D");
    acceptance->Branch("dEta_jet2_bjet2", &dEta_jet2_bjet2, "dEta_jet2_bjet2/D");

    acceptance->Branch("dR_W_H", &dR_W_H, "dR_W_H/D");
    acceptance->Branch("dR_W_top", &dR_W_top, "dR_W_top/D");
    acceptance->Branch("dR_W_tau", &dR_W_tau, "dR_W_tau/D");
    acceptance->Branch("dR_W_jet1", &dR_W_jet1, "dR_W_jet1/D");
    acceptance->Branch("dR_W_bjet1", &dR_W_bjet1, "dR_bjet1_H/D");
    acceptance->Branch("dR_W_jet2", &dR_W_jet2, "dR_W_jet2/D");
    acceptance->Branch("dR_W_bjet2", &dR_W_bjet2, "dR_W_bjet2/D");
    acceptance->Branch("dR_H_top", &dR_H_top, "dR_H_top/D");
    acceptance->Branch("dR_H_tau", &dR_H_tau, "dR_H_tau/D");
    acceptance->Branch("dR_H_jet1", &dR_H_jet1, "dR_H_jet1/D");
    acceptance->Branch("dR_H_bjet1", &dR_H_bjet1, "dR_H_bjet1/D");
    acceptance->Branch("dR_H_jet2", &dR_H_jet2, "dR_H_jet2/D");
    acceptance->Branch("dR_H_bjet2", &dR_H_bjet2, "dR_H_bjet2/D");
    acceptance->Branch("dR_top_tau", &dR_top_tau, "dR_top_tau/D");
    acceptance->Branch("dR_top_jet1", &dR_top_jet1, "dR_top_jet1/D");
    acceptance->Branch("dR_top_bjet1", &dR_top_bjet1, "dR_top_bjet1/D");
    acceptance->Branch("dR_top_jet2", &dR_top_jet2, "dR_top_jet2/D");
    acceptance->Branch("dR_top_bjet2", &dR_top_bjet2, "dR_top_bjet2/D");
    acceptance->Branch("dR_tau_jet1", &dR_tau_jet1, "dR_tau_jet1/D");
    acceptance->Branch("dR_tau_bjet1", &dR_tau_bjet1, "dR_tau_bjet1/D");
    acceptance->Branch("dR_tau_jet2", &dR_tau_jet2, "dR_tau_jet2/D");
    acceptance->Branch("dR_tau_bjet2", &dR_tau_bjet2, "dR_tau_bjet2/D");
    acceptance->Branch("dR_jet1_bjet1", &dR_jet1_bjet1, "dR_jet1_bjet1/D");
    acceptance->Branch("dR_jet1_jet2", &dR_jet1_jet2, "dR_jet1_jet2/D");
    acceptance->Branch("dR_jet1_bjet2", &dR_jet1_bjet2, "dR_jet1_bjet2/D");
    acceptance->Branch("dR_bjet1_jet2", &dR_bjet1_jet2, "dR_bjet1_jet2/D");
    acceptance->Branch("dR_bjet1_bjet2", &dR_bjet1_bjet2, "dR_bjet1_bjet2/D");
    acceptance->Branch("dR_jet2_bjet2", &dR_jet2_bjet2, "dR_jet2_bjet2/D");
    
    acceptance->Branch("Ang_W_H", &Ang_W_H, "Ang_W_H/D");
    acceptance->Branch("Ang_W_top", &Ang_W_top, "Ang_W_top/D");
    acceptance->Branch("Ang_W_tau", &Ang_W_tau, "Ang_W_tau/D");
    acceptance->Branch("Ang_W_jet1", &Ang_W_jet1, "Ang_W_jet1/D");
    acceptance->Branch("Ang_W_bjet1", &Ang_W_bjet1, "Ang_bjet1_H/D");
    acceptance->Branch("Ang_W_jet2", &Ang_W_jet2, "Ang_W_jet2/D");
    acceptance->Branch("Ang_W_bjet2", &Ang_W_bjet2, "Ang_W_bjet2/D");
    acceptance->Branch("Ang_H_top", &Ang_H_top, "Ang_H_top/D");
    acceptance->Branch("Ang_H_tau", &Ang_H_tau, "Ang_H_tau/D");
    acceptance->Branch("Ang_H_jet1", &Ang_H_jet1, "Ang_H_jet1/D");
    acceptance->Branch("Ang_H_bjet1", &Ang_H_bjet1, "Ang_H_bjet1/D");
    acceptance->Branch("Ang_H_jet2", &Ang_H_jet2, "Ang_H_jet2/D");
    acceptance->Branch("Ang_H_bjet2", &Ang_H_bjet2, "Ang_H_bjet2/D");
    acceptance->Branch("Ang_top_tau", &Ang_top_tau, "Ang_top_tau/D");
    acceptance->Branch("Ang_top_jet1", &Ang_top_jet1, "Ang_top_jet1/D");
    acceptance->Branch("Ang_top_bjet1", &Ang_top_bjet1, "Ang_top_bjet1/D");
    acceptance->Branch("Ang_top_jet2", &Ang_top_jet2, "Ang_top_jet2/D");
    acceptance->Branch("Ang_top_bjet2", &Ang_top_bjet2, "Ang_top_bjet2/D");
    acceptance->Branch("Ang_tau_jet1", &Ang_tau_jet1, "Ang_tau_jet1/D");
    acceptance->Branch("Ang_tau_bjet1", &Ang_tau_bjet1, "Ang_tau_bjet1/D");
    acceptance->Branch("Ang_tau_jet2", &Ang_tau_jet2, "Ang_tau_jet2/D");
    acceptance->Branch("Ang_tau_bjet2", &Ang_tau_bjet2, "Ang_tau_bjet2/D");
    acceptance->Branch("Ang_jet1_bjet1", &Ang_jet1_bjet1, "Ang_jet1_bjet1/D");
    acceptance->Branch("Ang_jet1_jet2", &Ang_jet1_jet2, "Ang_jet1_jet2/D");
    acceptance->Branch("Ang_jet1_bjet2", &Ang_jet1_bjet2, "Ang_jet1_bjet2/D");
    acceptance->Branch("Ang_bjet1_jet2", &Ang_bjet1_jet2, "Ang_bjet1_jet2/D");
    acceptance->Branch("Ang_bjet1_bjet2", &Ang_bjet1_bjet2, "Ang_bjet1_bjet2/D");
    acceptance->Branch("Ang_jet2_bjet2", &Ang_jet2_bjet2, "Ang_jet2_bjet2/D");
    
    acceptance->Branch("sumPt_jet1_jet2", &sumPt_jet1_jet2, "sumPt_jet1_jet2/D");
    acceptance->Branch("n_btags", &n_btags, "n_btags/I");

    acceptance->Branch("met_sig", &met_sig, "met_sig/D");
    acceptance->Branch("met_sumet", &met_sumet, "met_sumet/D");
    
    acceptance->Branch("EtaEta_tau_jet1", &EtaEta_tau_jet1, "EtaEta_tau_jet1/D");
    acceptance->Branch("EtaEta_tau_jet2", &EtaEta_tau_jet2, "EtaEta_tau_jet2/D");
    acceptance->Branch("EtaEta_tau_bjet1", &EtaEta_tau_bjet1, "EtaEta_tau_bjet1/D");
    acceptance->Branch("EtaEta_jet1_jet2", &EtaEta_jet1_jet2, "EtaEta_jet1_jet2/D");
    acceptance->Branch("EtaEta_jet1_bjet1", &EtaEta_jet1_bjet1, "EtaEta_jet1_bjet1/D");
    acceptance->Branch("EtaEta_jet2_bjet1", &EtaEta_jet2_bjet1, "EtaEta_jet2_bjet1/D");
    
    
    acceptance->Branch("upsilon1", &upsilon1, "upsilon1/D");
//    acceptance->Branch("upsilon3", &upsilon3, "upsilon3/D");
    acceptance->Branch("tau_0_n_tacks", &tau_0_n_tracks, "tau_0_n_tracks/I");
    

    //acceptance->Branch("sumPt", &sumPt, "sumPt/D");

    

    
    // Add histograms
    
	TH1D* CutFlow_unweighted = new TH1D("CutFlow_unweighted","CutFlow_unweighted;  Cut",7,0,6);
	TH1D* CutFlow_weighted = new TH1D("CutFlow_weighted","CutFlow_weighted;  Cut",7,0,6);
	TH1D* CutFlow_weighted_trueTaus = new TH1D("CutFlow_weighted_trueTaus","CutFlow_weighted_trueTaus;  Cut",7,0,6);
	TH1D* CutFlow_weighted_fakeTaus = new TH1D("CutFlow_weighted_fakeTaus","CutFlow_weighted_fakeTaus;  Cut",7,0,6);
    
    TH1D* histW_pt = new TH1D("W_pt","W p_{T};p_{T} (GeV);Expected number of events",20,1,1200);
    TH1D* histH_pt = new TH1D("H_pt","H p_{T};p_{T} (GeV);Expected number of events",20,1,1000);
    TH1D* histtop_pt = new TH1D("top_pt","top p_{T};p_{T} (GeV);Expected number of events",20,1,1000);
    TH1D* histtau_pt = new TH1D("tau_pt","#tau p_{T};p_{T} (GeV);Expected number of events",20,0,500);
    TH1D* histmet_pt = new TH1D("met_pt","MET p_{T};p_{T} (GeV);Expected number of events",20,100,500);
    TH1D* histjet1_pt = new TH1D("jet1_pt","jet_{1} p_{T};p_{T} (GeV);Expected number of events",20,1,1200);
    TH1D* histjet2_pt = new TH1D("jet2_pt","jet_{2} p_{T};p_{T} (GeV);Expected number of events",20,0,350);
    TH1D* histbjet1_pt = new TH1D("bjet1_pt","b_{1} p_{T};p_{T} (GeV);Expected number of events",20,0,500);
    TH1D* histbjet2_pt = new TH1D("bjet2_pt","b_{2} p_{T};p_{T} (GeV);Expected number of events",20,1,400);
    
    TH1D* histW_eta = new TH1D("W_eta","W #eta;#eta (rad);Expected number of events",20,-3.5,3.5);
    TH1D* histH_eta = new TH1D("H_eta","H #eta;#eta (rad);Expected number of events",20,-3.5,3.5);
    TH1D* histtop_eta = new TH1D("top_eta","top #eta;#eta (rad);Expected number of events",20,-3.5,3.5);
    TH1D* histtau_eta = new TH1D("tau_eta","#tau #eta;#eta (rad);Expected number of events",20,-3.5,3.5);
    TH1D* histjet1_eta = new TH1D("jet1_eta","jet_{1} #eta;#eta (rad);Expected number of events",20,-3.5,3.5);
    TH1D* histjet2_eta = new TH1D("jet2_eta","jet_{2} #eta;#eta (rad);Expected number of events",20,-3.5,3.5);
    TH1D* histbjet1_eta = new TH1D("bjet1_eta","b_{1} #eta;#eta (rad);Expected number of events",20,-3.5,3.5);
    TH1D* histbjet2_eta = new TH1D("bjet2_eta","b_{2} #eta;#eta (rad);Expected number of events",20,-3.5,3.5);
    
    TH1D* histW_phi = new TH1D("W_phi","W #phi;#phi (rad);Expected number of events",20,-3.5,3.5);
    TH1D* histH_phi = new TH1D("H_phi","H #phi;#phi (rad);Expected number of events",20,-3.5,3.5);
    TH1D* histtop_phi = new TH1D("top_phi","top #phi (rad);#phi;Expected number of events",20,-3.5,3.5);
    TH1D* histtau_phi = new TH1D("tau_phi","#tau #phi (rad);#phi;Expected number of events",20,-3.5,3.5);
    TH1D* histmet_phi = new TH1D("met_phi","MET #phi;#phi (rad);Expected number of events",20,-3.5,3.5);
    TH1D* histjet1_phi = new TH1D("jet1_phi","jet_{1} #phi;#phi (rad);Expected number of events",20,-3.5,3.5);
    TH1D* histjet2_phi = new TH1D("jet2_phi","jet_{2} #phi;#phi (rad);Expected number of events",20,-3.5,3.5);
    TH1D* histbjet1_phi = new TH1D("bjet1_phi","b_{1} #phi;#phi (rad);Expected number of events",20,-3.5,3.5);
    TH1D* histbjet2_phi = new TH1D("bjet2_phi","b_{2} #phi;#phi (rad);Expected number of events",20,-3.5,3.5);

    TH1D* histW_m = new TH1D("W_m","W mass;m (GeV);Expected number of events",20,0,1200);
    TH1D* histH_m = new TH1D("H_m","H mass;m (GeV);Expected number of events",20,0,1200);
    TH1D* histtop_m = new TH1D("top_m","top mass;m (GeV);Expected number of events",20,0,1200);
    TH1D* histtau_m = new TH1D("tau_m","#tau mass;m (GeV);Expected number of events",20,0,1200);
    TH1D* histjet1_m = new TH1D("jet1_m","jet_{1} mass;m (GeV);Expected number of events",20,0,150);
    TH1D* histjet2_m = new TH1D("jet2_m","jet_{2} mass;m (GeV);Expected number of events",20,0,100);
    TH1D* histbjet1_m = new TH1D("bjet1_m","bjet_{1} mass;m (GeV);Expected number of events",20,0,150);
    TH1D* histbjet2_m = new TH1D("bjet2_m","bjet_{2} mass;m (GeV);Expected number of events",20,0,100);

    TH1D* histW_mT = new TH1D("W_mT","W m_{T};m_{T} (GeV);Expected number of events",20,0,1200);
    TH1D* histH_mT = new TH1D("H_mT","H m_{T};m_{T} (GeV);Expected number of events",20,0,1200);
    TH1D* histtop_mT = new TH1D("top_mT","top m_{T};m_{T} (GeV);Expected number of events",20,0,1200);
    TH1D* histtau_mT = new TH1D("tau_mT","#tau m_{T};m_{T} (GeV);Expected number of events",20,0,1200);
    TH1D* histjet1_mT = new TH1D("jet1_mT","jet_{1} m_{T};m_{T} (GeV);Expected number of events",20,0,1200);
    TH1D* histjet2_mT = new TH1D("jet2_mT","jet_{2} m_{T};m_{T} (GeV);Expected number of events",20,0,600);
    TH1D* histbjet1_mT = new TH1D("bjet1_mT","bjet_{1} m_{T};m_{T} (GeV);Expected number of events",20,0,250);
    TH1D* histbjet2_mT = new TH1D("bjet2_mT","bjet_{2} m_{T};m_{T} (GeV);Expected number of events",20,0,400);
    
    TH1D* histMT_tau_met = new TH1D("MT_tau_met", "m_{T} (#tau,MET);m_{T} (GeV);Expected number of events",20,0,800);

    TH1D* histdPhi_met_W = new TH1D("dPhi_met_W", "#Delta#phi (MET,W);#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_met_H = new TH1D("dPhi_met_H", "#Delta#phi (MET,H);#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_met_top = new TH1D("dPhi_met_top", "#Delta#phi (MET,top);#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_met_tau = new TH1D("dPhi_met_tau", "#Delta#phi (MET,#tau);#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_met_jet1 = new TH1D("dPhi_met_jet1", "#Delta#phi (MET,jet_{1});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_met_jet2 = new TH1D("dPhi_met_jet2", "#Delta#phi (MET,jet_{2});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_met_bjet1 = new TH1D("dPhi_met_bjet1", "#Delta#phi (MET,b_{1});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_met_bjet2 = new TH1D("dPhi_met_bjet2", "#Delta#phi (MET,b_{2});#Delta#phi (rad);Expected number of events",20,0,3.5);
    
    TH1D* histdPt_met_W = new TH1D("dPt_met_W", "#Delta p_{T} (MET,W);#Delta p_{T} (GeV);Expected number of events",20,0,1000);
    TH1D* histdPt_met_H = new TH1D("dPt_met_H", "#Delta p_{T} (MET,H);#Delta p_{T} (GeV);Expected number of events",20,0,1200);
    TH1D* histdPt_met_top = new TH1D("dPt_met_top", "#Delta p_{T} (MET,top);#Delta p_{T} (GeV);Expected number of events",20,0,1000);
    TH1D* histdPt_met_tau = new TH1D("dPt_met_tau", "#Delta p_{T} (MET,#tau);#Delta p_{T} (GeV);Expected number of events",20,0,1000);
    TH1D* histdPt_met_jet1 = new TH1D("dPt_met_jet1", "#Delta p_{T} (MET,jet_{1});#Delta p_{T} (GeV);Expected number of events",20,0,1200);
    TH1D* histdPt_met_jet2 = new TH1D("dPt_met_jet2", "#Delta p_{T} (MET,jet_{2});#Delta p_{T} (GeV);Expected number of events",20,0,1200);
    TH1D* histdPt_met_bjet1 = new TH1D("dPt_met_bjet1", "#Delta p_{T} (MET,b_{1});#Delta p_{T} (GeV);Expected number of events",20,0,1200);
    TH1D* histdPt_met_bjet2 = new TH1D("dPt_met_bjet2", "#Delta p_{T} (MET,b_{2});#Delta p_{T} (GeV);Expected number of events",20,0,1200);
    
    TH1D* histdPhi_W_H = new TH1D("dPhi_W_H", "#Delta#phi (W,H);#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_W_top = new TH1D("dPhi_W_top", "#Delta#phi (W,top);#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_W_tau = new TH1D("dPhi_W_tau", "#Delta#phi (W,#tau);#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_W_jet1 = new TH1D("dPhi_W_jet1", "#Delta#phi (W,jet_{1});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_W_bjet1 = new TH1D("dPhi_W_bjet1", "#Delta#phi (W,b_{1});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_W_jet2 = new TH1D("dPhi_W_jet2", "#Delta#phi (W,jet_{2});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_W_bjet2 = new TH1D("dPhi_W_bjet2", "#Delta#phi (W,b_{2});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_H_top = new TH1D("dPhi_H_top", "#Delta#phi (H,top);#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_H_tau = new TH1D("dPhi_H_tau", "#Delta#phi (H,#tau);#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_H_jet1 = new TH1D("dPhi_H_jet1", "#Delta#phi (H,jet_{1});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_H_bjet1 = new TH1D("dPhi_H_bjet1", "#Delta#phi (H,b_{1});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_H_jet2 = new TH1D("dPhi_H_jet2", "#Delta#phi (H,jet_{2});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_H_bjet2 = new TH1D("dPhi_H_bjet2", "#Delta#phi (H,b_{2});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_top_tau = new TH1D("dPhi_top_tau", "#Delta#phi (top,#tau);#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_top_jet1 = new TH1D("dPhi_top_jet1", "#Delta#phi (top,jet_{1});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_top_bjet1 = new TH1D("dPhi_top_bjet1", "#Delta#phi (top,b_{1});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_top_jet2 = new TH1D("dPhi_top_jet2", "#Delta#phi (top,jet_{2});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_top_bjet2 = new TH1D("dPhi_top_bjet2", "#Delta#phi (top,b_{2});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_tau_jet1 = new TH1D("dPhi_tau_jet1", "#Delta#phi (#tau,jet_{1});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_tau_bjet1 = new TH1D("dPhi_tau_bjet1", "#Delta#phi (#tau,b_{1});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_tau_jet2 = new TH1D("dPhi_tau_jet2", "#Delta#phi (#tau,jet_{2});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_tau_bjet2 = new TH1D("dPhi_tau_bjet2", "#Delta#phi (#tau,b_{2});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_jet1_bjet1 = new TH1D("dPhi_jet1_bjet1", "#Delta#phi (jet_{1},b_{1});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_jet1_jet2 = new TH1D("dPhi_jet1_jet2", "#Delta#phi (jet_{1},jet_{2});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_jet1_bjet2 = new TH1D("dPhi_jet1_bjet2", "#Delta#phi (jet_{1},b_{2});#Delta#phi (rad);Expected number of events",20,0,3.5);
    
    TH1D* histdPhi_bjet1_jet2 = new TH1D("dPhi_bjet1_jet2", "#Delta#phi (b_{1},jet_{2});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_bjet1_bjet2 = new TH1D("dPhi_bjet1_bjet2", "#Delta#phi (b_{1},b_{2});#Delta#phi (rad);Expected number of events",20,0,3.5);
    TH1D* histdPhi_jet2_bjet2 = new TH1D("dPhi_jet2_bjet2", "#Delta#phi (jet_{2},b_{2});#Delta#phi (rad);Expected number of events",20,0,3.5);
    
    TH1D* histdPt_W_H = new TH1D("dPt_W_H", "#Delta p_{T} (W,H);#Delta p_{T} (GeV);Expected number of events",20,0,600);
    TH1D* histdPt_W_top = new TH1D("dPt_W_top", "#Delta p_{T} (W,top);#Delta p_{T} (GeV);Expected number of events",20,0,600);
    TH1D* histdPt_W_tau = new TH1D("dPt_W_tau", "#Delta p_{T} (W,#tau);#Delta p_{T} (GeV);Expected number of events",20,0,1000);
    TH1D* histdPt_W_jet1 = new TH1D("dPt_W_jet1", "#Delta p_{T} (W,jet_{1});#Delta p_{T} (GeV);Expected number of events",20,0,400);
    TH1D* histdPt_W_bjet1 = new TH1D("dPt_W_bjet1", "#Delta p_{T} (W,b_{1});#Delta p_{T} (GeV);Expected number of events",20,0,1000);
    TH1D* histdPt_W_jet2 = new TH1D("dPt_W_jet2", "#Delta p_{T} (W,jet_{2});#Delta p_{T} (GeV);Expected number of events",20,0,800);
    TH1D* histdPt_W_bjet2 = new TH1D("dPt_W_bjet2", "#Delta p_{T} (W,b_{2});#Delta p_{T} (GeV);Expected number of events",20,0,800);
    TH1D* histdPt_H_top = new TH1D("dPt_H_top", "#Delta p_{T} (H,top);#Delta p_{T} (GeV);Expected number of events",20,0,400);
    TH1D* histdPt_H_tau = new TH1D("dPt_H_tau", "#Delta p_{T} (H,#tau);#Delta p_{T} (GeV);Expected number of events",20,0,800);
    TH1D* histdPt_H_jet1 = new TH1D("dPt_H_jet1", "#Delta p_{T} (H,jet_{1});#Delta p_{T} (GeV);Expected number of events",20,0,600);
    TH1D* histdPt_H_bjet1 = new TH1D("dPt_H_bjet1", "#Delta p_{T} (H,b_{1});#Delta p_{T} (GeV);Expected number of events",20,0,800);
    TH1D* histdPt_H_jet2 = new TH1D("dPt_H_jet2", "#Delta p_{T} (H,jet_{2});#Delta p_{T} (GeV);Expected number of events",20,0,800);
    TH1D* histdPt_H_bjet2 = new TH1D("dPt_H_bjet2", "#Delta p_{T} (H,b_{2});#Delta p_{T} (GeV);Expected number of events",20,0,800);
    TH1D* histdPt_top_tau = new TH1D("dPt_top_tau", "#Delta p_{T} (top,#tau);#Delta p_{T} (GeV);Expected number of events",20,0,1000);
    TH1D* histdPt_top_jet1 = new TH1D("dPt_top_jet1", "#Delta p_{T} (top,jet_{1});#Delta p_{T} (GeV);Expected number of events",20,0,600);
    TH1D* histdPt_top_bjet1 = new TH1D("dPt_top_bjet1", "#Delta p_{T} (top,b_{1});#Delta p_{T} (GeV);Expected number of events",20,0,800);
    TH1D* histdPt_top_jet2 = new TH1D("dPt_top_jet2", "#Delta p_{T} (top,jet_{2});#Delta p_{T} (GeV);Expected number of events",20,0,1000);
    TH1D* histdPt_top_bjet2 = new TH1D("dPt_top_bjet2", "#Delta p_{T} (top,b_{2});#Delta p_{T} (GeV);Expected number of events",20,0,800);
    TH1D* histdPt_tau_jet1 = new TH1D("dPt_tau_jet1", "#Delta p_{T} (#tau,jet_{1});#Delta p_{T} (GeV);Expected number of events",20,0,1000);
    TH1D* histdPt_tau_bjet1 = new TH1D("dPt_tau_bjet1", "#Delta p_{T} (#tau,b_{1});#Delta p_{T} (GeV);Expected number of events",20,0,1000);
    TH1D* histdPt_tau_jet2 = new TH1D("dPt_tau_jet2", "#Delta p_{T} (#tau,jet_{2});#Delta p_{T} (GeV);Expected number of events",20,0,1000);
    TH1D* histdPt_tau_bjet2 = new TH1D("dPt_tau_bjet2", "#Delta p_{T} (#tau,b_{2});#Delta p_{T} (GeV);Expected number of events",20,0,1000);
    TH1D* histdPt_jet1_bjet1 = new TH1D("dPt_jet1_bjet1", "#Delta p_{T} (jet_{1},b_{1});#Delta p_{T} (GeV);Expected number of events",20,0,550);
    TH1D* histdPt_jet1_bjet1_notAbs = new TH1D("dPt_jet1_bjet1_notAbs", "jet_{1} p_{T} - b_{1} p_{T};#Delta p_{T} (GeV);Expected number of events",20,-550,550);
    TH1D* histdPt_jet1_jet2 = new TH1D("dPt_jet1_jet2", "#Delta p_{T} (jet_{1},jet_{2});#Delta p_{T} (GeV);Expected number of events",20,0,700);
    TH1D* histdPt_jet1_bjet2 = new TH1D("dPt_jet1_bjet2", "#Delta p_{T} (jet_{1},b_{2});#Delta p_{T} (GeV);Expected number of events",20,0,800);
    TH1D* histdPt_bjet1_jet2 = new TH1D("dPt_bjet1_jet2", "#Delta p_{T} (b_{1},jet_{2});#Delta p_{T} (GeV);Expected number of events",20,0,500);
    TH1D* histdPt_bjet1_bjet2 = new TH1D("dPt_bjet1_bjet2", "#Delta p_{T} (b_{1},b_{2});#Delta p_{T} (GeV);Expected number of events",20,0,500);
    TH1D* histdPt_jet2_bjet2 = new TH1D("dPt_jet2_bjet2", "#Delta p_{T} (jet_{2},b_{2});#Delta p_{T} (GeV);Expected number of events",20,0,400);

    TH1D* histdEta_W_H = new TH1D("dEta_W_H", "#Delta#eta (W,H);#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_W_top = new TH1D("dEta_W_top", "#Delta#eta (W,top);#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_W_tau = new TH1D("dEta_W_tau", "#Delta#eta (W,#tau);#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_W_jet1 = new TH1D("dEta_W_jet1", "#Delta#eta (W,jet_{1});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_W_bjet1 = new TH1D("dEta_W_bjet1", "#Delta#eta (W,b_{1});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_W_jet2 = new TH1D("dEta_W_jet2", "#Delta#eta (W,jet_{2});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_W_bjet2 = new TH1D("dEta_W_bjet2", "#Delta#eta (W,b_{2});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_H_top = new TH1D("dEta_H_top", "#Delta#eta (H,top);#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_H_tau = new TH1D("dEta_H_tau", "#Delta#eta (H,#tau);#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_H_jet1 = new TH1D("dEta_H_jet1", "#Delta#eta (H,jet_{1});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_H_bjet1 = new TH1D("dEta_H_bjet1", "#Delta#eta (H,b_{1});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_H_jet2 = new TH1D("dEta_H_jet2", "#Delta#eta (H,jet_{2});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_H_bjet2 = new TH1D("dEta_H_bjet2", "#Delta#eta (H,b_{2});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_top_tau = new TH1D("dEta_top_tau", "#Delta#eta (top,#tau);#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_top_jet1 = new TH1D("dEta_top_jet1", "#Delta#eta (top,jet_{1});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_top_bjet1 = new TH1D("dEta_top_bjet1", "#Delta#eta (top,b_{1});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_top_jet2 = new TH1D("dEta_top_jet2", "#Delta#eta (top,jet_{2});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_top_bjet2 = new TH1D("dEta_top_bjet2", "#Delta#eta (top,b_{2});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_tau_jet1 = new TH1D("dEta_tau_jet1", "#Delta#eta (#tau,jet_{1});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_tau_bjet1 = new TH1D("dEta_tau_bjet1", "#Delta#eta (#tau,b_{1});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_tau_jet2 = new TH1D("dEta_tau_jet2", "#Delta#eta (#tau,jet_{2});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_tau_bjet2 = new TH1D("dEta_tau_bjet2", "#Delta#eta (#tau,b_{2});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_jet1_bjet1 = new TH1D("dEta_jet1_bjet1", "#Delta#eta (jet_{1},b_{1});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_jet1_jet2 = new TH1D("dEta_jet1_jet2", "#Delta#eta (jet_{1},jet_{2});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_jet1_bjet2 = new TH1D("dEta_jet1_bjet2", "#Delta#eta (jet_{1},b_{2});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_bjet1_jet2 = new TH1D("dEta_bjet1_jet2", "#Delta#eta (b_{1},jet_{2});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_bjet1_bjet2 = new TH1D("dEta_bjet1_bjet2", "#Delta#eta (b_{1},b_{2});#Delta#eta (rad);Expected number of events",20,0,4);
    TH1D* histdEta_jet2_bjet2 = new TH1D("dEta_jet2_bjet2", "#Delta#eta (jet_{2},b_{2});#Delta#eta (rad);Expected number of events",20,0,4);

    TH1D* histdR_W_H = new TH1D("dR_W_H", "#Delta R (W,H);#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_W_top = new TH1D("dR_W_top", "#Delta R (W,top);#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_W_tau = new TH1D("dR_W_tau", "#Delta R (W,#tau);#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_W_jet1 = new TH1D("dR_W_jet1", "#Delta R (W,jet_{1});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_W_bjet1 = new TH1D("dR_W_bjet1", "#Delta R (W,b_{1});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_W_jet2 = new TH1D("dR_W_jet2", "#Delta R (W,jet_{2});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_W_bjet2 = new TH1D("dR_W_bjet2", "#Delta R (W,b_{2});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_H_top = new TH1D("dR_H_top", "#Delta R (H,top);#Delta R (rad);Expected number of events",20,0.5,5.5);
    TH1D* histdR_H_tau = new TH1D("dR_H_tau", "#Delta R (H,#tau);#Delta R (rad);Expected number of events",20,0,4);
    TH1D* histdR_H_jet1 = new TH1D("dR_H_jet1", "#Delta R (H,jet_{1});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_H_bjet1 = new TH1D("dR_H_bjet1", "#Delta R (H,b_{1});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_H_jet2 = new TH1D("dR_H_jet2", "#Delta R (H,jet_{2});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_H_bjet2 = new TH1D("dR_H_bjet2", "#Delta R (H,b_{2});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_top_tau = new TH1D("dR_top_tau", "#Delta R (top,#tau);#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_top_jet1 = new TH1D("dR_top_jet1", "#Delta R (top,jet_{1});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_top_bjet1 = new TH1D("dR_top_bjet1", "#Delta R (top,b_{1});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_top_jet2 = new TH1D("dR_top_jet2", "#Delta R (top,jet_{2});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_top_bjet2 = new TH1D("dR_top_bjet2", "#Delta R (top,b_{2});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_tau_jet1 = new TH1D("dR_tau_jet1", "#Delta R (#tau,jet_{1});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_tau_bjet1 = new TH1D("dR_tau_bjet1", "#Delta R (#tau,b_{1});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_tau_jet2 = new TH1D("dR_tau_jet2", "#Delta R (#tau,jet_{2});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_tau_bjet2 = new TH1D("dR_tau_bjet2", "#Delta R (#tau,b_{2});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_jet1_bjet1 = new TH1D("dR_jet1_bjet1", "#Delta R (jet_{1},b_{1});#Delta R (rad);Expected number of events",20,0,5.5);
    TH1D* histdR_jet1_jet2 = new TH1D("dR_jet1_jet2", "#Delta R (jet_{1},jet_{2});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_jet1_bjet2 = new TH1D("dR_jet1_bjet2", "#Delta R (jet_{1},b_{2});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_bjet1_jet2 = new TH1D("dR_bjet1_jet2", "#Delta R (b_{1},jet_{2});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_bjet1_bjet2 = new TH1D("dR_bjet1_bjet2", "#Delta R (b_{1},b_{2});#Delta R (rad);Expected number of events",20,0,6);
    TH1D* histdR_jet2_bjet2 = new TH1D("dR_jet2_bjet2", "#Delta R (jet_{2},b_{2});#Delta R (rad);Expected number of events",20,0,6);

    TH1D* histAng_W_H = new TH1D("Ang_W_H", "Angle (W,H);(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_W_top = new TH1D("Ang_W_top", "Angle (W,top);(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_W_tau = new TH1D("Ang_W_tau", "Angle (W,#tau);(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_W_jet1 = new TH1D("Ang_W_jet1", "Angle (W,jet_{1});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_W_bjet1 = new TH1D("Ang_W_bjet1", "Angle (W,b_{1});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_W_jet2 = new TH1D("Ang_W_jet2", "Angle (W,jet_{2});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_W_bjet2 = new TH1D("Ang_W_bjet2", "Angle (W,b_{2});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_H_top = new TH1D("Ang_H_top", "Angle (H,top);(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_H_tau = new TH1D("Ang_H_tau", "Angle (H,#tau);(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_H_jet1 = new TH1D("Ang_H_jet1", "Angle (H,jet_{1});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_H_bjet1 = new TH1D("Ang_H_bjet1", "Angle (H,b_{1});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_H_jet2 = new TH1D("Ang_H_jet2", "Angle (H,jet_{2});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_H_bjet2 = new TH1D("Ang_H_bjet2", "Angle (H,b_{2});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_top_tau = new TH1D("Ang_top_tau", "Angle (top,#tau);(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_top_jet1 = new TH1D("Ang_top_jet1", "Angle (top,jet_{1});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_top_bjet1 = new TH1D("Ang_top_bjet1", "Angle (top,b_{1});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_top_jet2 = new TH1D("Ang_top_jet2", "Angle (top,jet_{2});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_top_bjet2 = new TH1D("Ang_top_bjet2", "Angle (top,b_{2});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_tau_jet1 = new TH1D("Ang_tau_jet1", "Angle (#tau,jet_{1});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_tau_bjet1 = new TH1D("Ang_tau_bjet1", "Angle (#tau,b_{1});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_tau_jet2 = new TH1D("Ang_tau_jet2", "Angle (#tau,jet_{2});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_tau_bjet2 = new TH1D("Ang_tau_bjet2", "Angle (#tau,b_{2});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_jet1_bjet1 = new TH1D("Ang_jet1_bjet1", "Angle (jet_{1},b_{1});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_jet1_jet2 = new TH1D("Ang_jet1_jet2", "Angle (jet_{1},jet_{2});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_jet1_bjet2 = new TH1D("Ang_jet1_bjet2", "Angle (jet_{1},b_{2});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_bjet1_jet2 = new TH1D("Ang_bjet1_jet2", "Angle (b_{1},jet_{2});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_bjet1_bjet2 = new TH1D("Ang_bjet1_bjet2", "Angle (b_{1},b_{2});(rad);Expected number of events",20,0,3.5);
    TH1D* histAng_jet2_bjet2 = new TH1D("Ang_jet2_bjet2", "Angle (jet_{2},b_{2});(rad);Expected number of events",20,0,3.5);
    
    TH1D* histsumPt_jet1_jet2 = new TH1D("sumPt_jet1_jet2", "sumPt_jet1_jet2",20,0,1200);
    TH1D* histn_btags = new TH1D("n_btags", "n_btags", 3,0,2);
    
    TH2D* h2 = new TH2D("h2","met_pt vs dPt_jet1_bjet1",20,100,500,20,-550,550);
    TH2D* h3 = new TH2D("h3","met_pt vs abs(dPt_jet1_bjet1)",20,100,500,20,0,550);
    TH2D* h4 = new TH2D("h4","met_pt vs jet1_pt-met_pt > 0",20,100,500,20,0,550);
    TH2D* h5 = new TH2D("h5","met_pt vs jet1_pt-met_pt < 0",20,100,500,20,-550,0);
    TH2D* h6 = new TH2D("h6","met_pt vs jet1_pt",20,100,500,20,0,550);
    TH2D* h7 = new TH2D("h7","met_pt vs bjet1_pt",20,100,500,20,0,550);
    
    //TH1D* hmet_sig = new TH1D("met_sig","met_sig",20,0,40);
    //TH1D* hmet_sumet = new TH1D("met_sumet","met_sumet",20,0,500);
    
    TH1D* hEtaEta_tau_jet1 = new TH1D("EtaEta_tau_jet1","#eta x #eta (#tau,jet_{1})",20,-6,6);
    TH1D* hEtaEta_tau_jet2 = new TH1D("EtaEta_tau_jet2","#eta x #eta (#tau,jet_{2})",20,-6,6);
    TH1D* hEtaEta_tau_bjet1 = new TH1D("EtaEta_tau_bjet1","#eta x #eta (#tau,b_{1})",20,-6,6);
    TH1D* hEtaEta_jet1_jet2 = new TH1D("EtaEta_jet1_jet2","#eta x #eta (jet_{1},jet_{2})",20,-6,6);
    TH1D* hEtaEta_jet1_bjet1 = new TH1D("EtaEta_jet1_bjet1","#eta x #eta (jet_{1},b_{1})",20,-6,6);
    TH1D* hEtaEta_jet2_bjet1 = new TH1D("EtaEta_jet2_bjet1","#eta x #eta (jet_{2},b_{1})",20,-6,6);
    
    TH1D* hupsilon1 = new TH1D("upsilon1", "upsilon 1-prong",20,-2,2);
//    TH1D* hupsilon3 = new TH1D("upsilon3", "upsilon 3-prong",20,-2,2);
    
    //TH1D* hsumPt = new TH1D("sumPt","#sum p_{T}",20,0,2200);

    
	TH1D* initialweights = (TH1D*)gDirectory->Get("h_mc_derivation");
	double total_events=1;
	double total_events_noweight=1;
	double Lumi=3200;


	if (initialweights){
	total_events=initialweights->GetBinContent(4);
	total_events_noweight=initialweights->GetBinContent(1);
	}
    
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "h_mc_derivation BinContent(1) = " << initialweights->GetBinContent(1) << std::endl;
    std::cout << "h_mc_derivation BinContent(2) = " << initialweights->GetBinContent(2) << std::endl;
    std::cout << "h_mc_derivation BinContent(3) = " << initialweights->GetBinContent(3) << std::endl;
    std::cout << "h_mc_derivation BinContent(4) = " << initialweights->GetBinContent(4) << std::endl;
    std::cout << "h_mc_derivation BinContent(5) = " << initialweights->GetBinContent(5) << std::endl;
    std::cout << "h_mc_derivation BinContent(6) = " << initialweights->GetBinContent(6) << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;


	double CrossSec=XS(input);
	Bkg_Type = Type(input);

	if (CrossSec==1){
		std::cout<<"UKNOWN TID, SCALE=1"<<std::endl;
	}

	double all = CrossSec*Lumi/total_events;
    std::cout << CrossSec << "  " << Lumi << "  " << total_events << std::endl;
	double all_noweight = CrossSec*Lumi/total_events_noweight;

    std::cout << "all: " << all << std::endl;
    std::cout << "all_noweight: " << all_noweight << std::endl;

	if (input=="data" || input=="full_data" || input == "fakes"){
		all =1;
		all_noweight=1;
	}

	XS_Lumi_Weight = all;

	if (fChain == 0) return;


	Long64_t nentries = fChain->GetEntriesFast();

	std::cout<<"initial number of entries "<<fChain->GetEntries()<<std::endl;

	Long64_t nbytes = 0, nb = 0;
	for (Long64_t jentry=0; jentry<nentries;jentry++) {
		Long64_t ientry = LoadTree(jentry);
		if (ientry < 0) break;
		nb = fChain->GetEntry(jentry);   nbytes += nb;


		weight=GetWeight(input);
		finalweight=weight;
		trueTau=kFALSE;

		if ((tau_0_is_had_tau_home)==1) trueTau= kTRUE;
        
        //enable this if you want to cut fakes
        if (!trueTau) continue;
        
        //for weight justification, splitting between pos and neg weights
        //if (weight_mc > 0) continue;
        
        //cut events that are not 1- or 3-prong
        if (tau_0_n_tracks != 1 && tau_0_n_tracks != 3) continue;

		// Yields no cut
		c0++;
		c0w = c0w + weight;

		if (trueTau){
			c0w_trueTau= c0w_trueTau +weight;
		}
		else{
			c0w_fakeTau= c0w_fakeTau +weight;

		}


		// Jet cleaning

		if (bsm_tj_dirty_jet!=0) continue;

		c1++;
		c1w = c1w + weight;

		if (trueTau){
			c1w_trueTau= c1w_trueTau +weight;
			c1_trueTau++;
		}
		else{
			c1w_fakeTau= c1w_fakeTau +weight;
			c1_fakeTau++;
		}


		// At least 3 jets

		if (n_jets<3) continue;

		c2++;
		c2w = c2w + weight;

		if (trueTau){
			c2w_trueTau= c2w_trueTau +weight;
			c2_trueTau++;
		}
		else{
			c2w_fakeTau= c2w_fakeTau +weight;
			c2_fakeTau++;
		}

		// Trigger

		if (HLT_xe70!=1 ) continue;

		c3++;
		c3w = c3w + weight;


		if (trueTau){
			c3w_trueTau= c3w_trueTau +weight;
			c3_trueTau++;
		}
		else{
			c3w_fakeTau= c3w_fakeTau +weight;
			c3_fakeTau++;
		}

		// Jet BDT medium

		if (input!="fakes"){
		if (tau_0_jet_bdt_medium!=1) continue;

		c4++;
		c4w = c4w + weight;


		if (trueTau){
			c4w_trueTau= c4w_trueTau +weight;
			c4_trueTau++;
		}
		else{
			c4w_fakeTau= c4w_fakeTau +weight;
			c4_fakeTau++;
            
		}}

		if (input=="fakes"){
			if (tau_0_jet_bdt_loose==1 || tau_0_jet_bdt_score<0.5) continue;

			c4++;
			c4w = c4w + weight;


			if (trueTau){
				c4w_trueTau= c4w_trueTau +weight;
				c4_trueTau++;
			}
			else{
				c4w_fakeTau= c4w_fakeTau +weight;
				c4_fakeTau++;
			}
      }


		// pT>40 GeV

		if (tau_0_pt<40000) continue;

		c5++;
		c5w = c5w + weight;


		if (trueTau){
			c5w_trueTau= c5w_trueTau +weight;
			c5_trueTau++;
		}
		else{
			c5w_fakeTau= c5w_fakeTau +weight;
			c5_fakeTau++;
		}

		// VETO electrons and muons


		if (n_muons!=0 || n_electrons!=0) continue;

		c6++;
		c6w = c6w + weight;


		if (trueTau){
			c6w_trueTau= c6w_trueTau +weight;
			c6_trueTau++;
		}
		else{
			c6w_fakeTau= c6w_fakeTau +weight;
			c6_fakeTau++;

		}

		// at least 1bjet

		if (n_bjets<1) continue;

		c7++;
		c7w = c7w + weight;


		if (trueTau){
			c7w_trueTau= c7w_trueTau +weight;
			c7_trueTau++;
		}
		else{
			c7w_fakeTau= c7w_fakeTau +weight;
			c7_fakeTau++;

		}


		if (met_et<100*GeV) continue;

		c8++;
		c8w = c8w + weight;


		if (trueTau){
			c8w_trueTau= c8w_trueTau +weight;
			c8_trueTau++;
		}
		else{
			c8w_fakeTau= c8w_fakeTau +weight;
			c8_fakeTau++;
		}



		MT_tau_met = sqrt(2*tau_0_pt*met_et*(1-TMath::Cos((tau_0_phi-met_phi))));

		if (MT_tau_met<60*GeV){
            
            //continue;
            
			c9++;
			c9w = c9w + weight;


			if (trueTau){
				c9w_trueTau= c9w_trueTau +weight;
				c9_trueTau++;
			}
			else{
				c9w_fakeTau= c9w_fakeTau +weight;
				c9_fakeTau++;

			}

			if (tau_0_is_had_tau_home){

				c10++;
				c10w = c10w + weight;


				if (trueTau){
					c10w_trueTau= c10w_trueTau +weight;
					c10_trueTau++;
				}
				else{
					c10w_fakeTau= c10w_fakeTau +weight;
					c10_fakeTau++;

				}


			}
		}




		jet_0_btag=0;
		jet_1_btag=0;
		jet_2_btag=0;
		jet_3_btag=0;

		if (jet_0_mv2c20>-0.0436) jet_0_btag=1;
		if (jet_1_mv2c20>-0.0436) jet_1_btag=1;
		if (jet_2_mv2c20>-0.0436) jet_2_btag=1;
		if (jet_3_mv2c20>-0.0436) jet_3_btag=1;



        //initialize new variables
		bjet_pt1=0;
		bjet_pt2=0;

		bjet_eta1=-1000;
		bjet_eta2=-1000;

		bjet_phi1=-1000;
		bjet_phi2=-1000;

		bjet_m1=-1000;
		bjet_m2=-1000;

		jet_bveto_pt1=-1000*GeV;
		jet_bveto_pt2=-1000*GeV;

		jet_bveto_eta1=-1000;
		jet_bveto_eta2=-1000;

		jet_bveto_phi1=-1000;
		jet_bveto_phi2=-1000;

		jet_bveto_m1=-1000;
		jet_bveto_m2=-1000;

		W_pt=-1000;
		H_pt=-1000;
		top_pt=-1000;
        tau_pt=-1000;
        met_pt=-1000;

		W_eta=-1000;
		H_eta=-1000;
		top_eta=-1000;
        tau_eta=-1000;


		W_phi=-1000;
		H_phi=-1000;
		top_phi=-1000;
        tau_phi=-1000;
        
        
        
//        upsilon1 = -999.;            // upsilon is defined only for 1-prong taus!
//        upsilon3 = -999;
//        if( tau_0_n_tracks==1 )
        upsilon1 = 2*(tau_0_leadTrk_pt/tau_0_pt)-1.;
//        if( tau_0_n_tracks==3 )  upsilon3 = 2*(tau_0_leadTrk_pt/tau_0_pt)-1.;

        

        //give 4-vectors values
		double indexbjet=-2;
        double indexbjet2=-2;
        double indexjet1=-2;
        double indexjet2=-2;
        double nbjet=0;
		Double_t tau_mass = 1200;
		met.SetPtEtaPhiM(met_et, 0, met_phi, 0);
		tau.SetPtEtaPhiM(tau_0_pt, tau_0_eta, tau_0_phi, tau_mass);
		jet1.SetPtEtaPhiM(jet_0_pt,jet_0_eta,jet_0_phi,jet_0_m);
		jet2.SetPtEtaPhiM(jet_1_pt,jet_1_eta,jet_1_phi,jet_1_m);
		jet3.SetPtEtaPhiM(jet_2_pt,jet_2_eta,jet_2_phi,jet_2_m);
        jet4.SetPtEtaPhiM(jet_3_pt,jet_3_eta,jet_3_phi,jet_3_m);
        

        //separate b-tagged jets från b-vetoed
		if (jet_0_btag==0){
			jet1_bjetveto.SetPtEtaPhiM(jet_0_pt,jet_0_eta,jet_0_phi,jet_0_m);
            indexjet1 = 0;
            if (jet_1_btag==0) {
                jet2_bjetveto.SetPtEtaPhiM(jet_1_pt,jet_1_eta,jet_1_phi,jet_1_m);
                indexjet2 = 1;
            }
            else if (jet_2_btag==0) {
                jet2_bjetveto.SetPtEtaPhiM(jet_2_pt,jet_2_eta,jet_2_phi,jet_2_m);
                indexjet2 = 2;
            }
            else if (jet_3_btag==0) {
                jet2_bjetveto.SetPtEtaPhiM(jet_3_pt,jet_3_eta,jet_3_phi,jet_3_m);
                indexjet2 = 3;
            }
		} else if (jet_1_btag==0){
			jet1_bjetveto.SetPtEtaPhiM(jet_1_pt,jet_1_eta,jet_1_phi,jet_1_m);
            indexjet1 = 1;
            if (jet_2_btag==0) {
                jet2_bjetveto.SetPtEtaPhiM(jet_2_pt,jet_2_eta,jet_2_phi,jet_2_m);
                indexjet2 = 2;
            }
            else if (jet_3_btag==0) {
                jet2_bjetveto.SetPtEtaPhiM(jet_3_pt,jet_3_eta,jet_3_phi,jet_3_m);
                indexjet2 = 3;
            }
		} else if (jet_2_btag==0){
			jet1_bjetveto.SetPtEtaPhiM(jet_2_pt,jet_2_eta,jet_2_phi,jet_2_m);
            indexjet1 = 2;
            if (jet_3_btag==0) {
                jet2_bjetveto.SetPtEtaPhiM(jet_3_pt,jet_3_eta,jet_3_phi,jet_3_m);
                indexjet2 = 3;
            }
		}

        if (jet_0_btag==1) {
			bjet_pt1=jet_0_pt;
			bjet_eta1=jet_0_eta;
			bjet_phi1=jet_0_phi;
			bjet_m1=jet_0_m;
			indexbjet=0;
            nbjet=1;
            jet1_bjetveto.SetPtEtaPhiM(jet_1_pt,jet_1_eta,jet_1_phi,jet_1_m);
            indexjet1 = 1;
            jet2_bjetveto.SetPtEtaPhiM(jet_2_pt,jet_2_eta,jet_2_phi,jet_2_m);
            indexjet2 = 2;


//			if (jet_1_btag==1){
//				bjet_pt2=jet_1_pt;
//				bjet_eta2=jet_1_eta;
//				bjet_phi2=jet_1_phi;
//				bjet_m2=jet_1_m;
//                nbjet=2;
//                indexbjet2=1;
//
//            }   else if (jet_2_btag == 1){
//                bjet_pt2=jet_2_pt;
//                bjet_eta2=jet_2_eta;
//                bjet_phi2=jet_2_phi;
//                bjet_m2=jet_2_m;
//                nbjet=2;
//                indexbjet2=2;
//            } else if (jet_3_btag == 1 && n_jets >= 4){
//                bjet_pt2=jet_3_pt;
//                bjet_eta2=jet_3_eta;
//                bjet_phi2=jet_3_phi;
//                bjet_m2=jet_3_m;
//                nbjet=2;
//                indexbjet2=3;
//            }
		} else if (jet_1_btag==1 && jet_0_btag==0) {
			bjet_pt1=jet_1_pt;
			bjet_eta1=jet_1_eta;
			bjet_phi1=jet_1_phi;
			bjet_m1=jet_1_m;
			indexbjet=1;
            nbjet=1;
            jet2_bjetveto.SetPtEtaPhiM(jet_2_pt,jet_2_eta,jet_2_phi,jet_2_m);
            indexjet2 = 2;

//			if (jet_2_btag==1){
//				bjet_pt2=jet_2_pt;
//				bjet_eta2=jet_2_eta;
//				bjet_phi2=jet_2_phi;
//				bjet_m2=jet_2_m;
//                nbjet=2;
//                indexbjet2=2;
//            } else if (jet_3_btag==1 && n_jets >= 4){
//                bjet_pt2=jet_3_pt;
//                bjet_eta2=jet_3_eta;
//                bjet_phi2=jet_3_phi;
//                bjet_m2=jet_3_m;
//                nbjet=2;
//                indexbjet2=3;
//            }
		} else if (jet_2_btag==1 && jet_0_btag==0 && jet_1_btag==0){
			bjet_pt1=jet_2_pt;
			bjet_eta1=jet_2_eta;
			bjet_phi1=jet_2_phi;
			bjet_m1=jet_2_m;
			indexbjet=2;
            nbjet=1;
            if (jet_3_btag == 1 && n_jets >= 4) {
                bjet_pt2=jet_3_pt;
                bjet_eta2=jet_3_eta;
                bjet_phi2=jet_3_phi;
                bjet_m2=jet_3_m;
                nbjet=2;
                indexbjet2=3;
            }
		} else if (jet_3_btag == 1 && jet_0_btag == 0 && jet_1_btag == 0 && jet_2_btag == 0) { //&& n_jets >= 4
            bjet_pt1=jet_3_pt;
            bjet_eta1=jet_3_eta;
            bjet_phi1=jet_3_phi;
            bjet_m1=jet_3_m;
            indexbjet=3;
            nbjet=1;
        }
        
        
        
        if (indexjet1 == -2) {
            no_jet1++;
        }
        if (indexjet2 == -2) {
            no_jet2++;
        }
        
        if (indexjet1 == indexjet2 && indexjet1 != -2) {
            conflict++;
        }
        if (indexbjet == -2) {
            continue;
        }
        totalevents++;
        
		jet_bveto_pt1=jet1_bjetveto.Pt();
		jet_bveto_pt2=jet2_bjetveto.Pt();

		jet_bveto_eta1=jet1_bjetveto.Eta();
		jet_bveto_eta2=jet2_bjetveto.Eta();

		jet_bveto_phi1=jet1_bjetveto.Phi();
		jet_bveto_phi2=jet2_bjetveto.Phi();

		jet_bveto_m1=jet1_bjetveto.M();
		jet_bveto_m2=jet2_bjetveto.M();



		bjet1.SetPtEtaPhiM(bjet_pt1,bjet_eta1,bjet_phi1,bjet_m1);
		bjet2.SetPtEtaPhiM(bjet_pt2,bjet_eta2,bjet_phi2,bjet_m2);

        //recreate mothers
		W = jet1_bjetveto + jet2_bjetveto;

		H = tau+met;

		TLorentzVector top1 = bjet1+jet1_bjetveto + jet2_bjetveto;
		TLorentzVector top2 = bjet2+jet1_bjetveto + jet2_bjetveto;

		double masstop1=top1.M();
		double masstop2=top2.M();
		double mtop=1733400;

		TLorentzVector top;
        
        if (nbjet == 0) {
            top = W;
        } else if (nbjet == 1) {
            top = top1;
        } else if (abs(masstop1-mtop)<abs(masstop2-mtop)){
			top=top1;
		}
		else{
            top=top2;
        }
        

        //give the variables entering the output ntuple values from the 4-vectors
		W_pt=W.Pt();
		H_pt=H.Pt();
		top_pt=top.Pt();
        tau_pt=tau.Pt();
        met_pt=met.Pt();

		W_eta=W.Eta();
		H_eta=H.Eta();
		top_eta=top.Eta();
        tau_eta=tau.Eta();

		W_phi=W.Phi();
		H_phi=H.Phi();
		top_phi=top.Phi();
        tau_phi=tau.Phi();
        met_phi=met.Phi();
        
        W_m=W.M();
        H_m=H.M();
        top_m=top.M();
        tau_m=tau.M();
        
        jet1_pt=jet1_bjetveto.Pt();
        jet2_pt=jet2_bjetveto.Pt();
        bjet1_pt=bjet1.Pt();
        
        jet1_eta=jet1_bjetveto.Eta();
        jet2_eta=jet2_bjetveto.Eta();
        bjet1_eta=bjet_eta1;
        
        jet1_phi=jet1_bjetveto.Phi();
        jet2_phi=jet2_bjetveto.Phi();
        bjet1_phi=bjet1.Phi();
        
        jet1_m=jet1_bjetveto.M();
        jet2_m=jet2_bjetveto.M();
        bjet1_m=bjet1.M();
        
        W_mT = W.Mt();
        H_mT=H.Mt();
        top_mT=top.Mt();
        tau_mT=tau.Mt();
        jet1_mT=jet1_bjetveto.Mt();
        jet2_mT=jet2_bjetveto.Mt();
        bjet1_mT=bjet1.Mt();
        
        sumPt_jet1_jet2 = jet1_pt + jet2_pt;
        n_btags = nbjet;
     
    
        dPhi_met_H = abs(met.DeltaPhi(H));
        dPhi_met_W = abs(met.DeltaPhi(W));
        dPhi_met_top = abs(met.DeltaPhi(top));
        dPhi_met_tau = abs(met.DeltaPhi(tau));
        dPhi_met_jet1 = abs(met.DeltaPhi(jet1_bjetveto));
        dPhi_met_jet2 = abs(met.DeltaPhi(jet2_bjetveto));
        dPhi_met_bjet1 = abs(met.DeltaPhi(bjet1));
        
        dPt_met_H = abs(met_pt - H_pt);
        dPt_met_W = abs(met_pt - W_pt);
        dPt_met_top = abs(met_pt - top_pt);
        dPt_met_tau = abs(met_pt - tau_pt);
        dPt_met_jet1 = abs(met_pt - jet1_pt);
        dPt_met_jet2 = abs(met_pt - jet2_pt);
        dPt_met_bjet1 = abs(met_pt - bjet1_pt);
        
        dPhi_W_H = abs(W.DeltaPhi(H));
        dPhi_W_top = abs(W.DeltaPhi(top));
        dPhi_W_tau = abs(W.DeltaPhi(tau));
        dPhi_W_jet1 = abs(W.DeltaPhi(jet1_bjetveto));
        dPhi_W_bjet1 = abs(W.DeltaPhi(bjet1));
        dPhi_W_jet2 = abs(W.DeltaPhi(jet2_bjetveto));
        dPhi_H_top = abs(H.DeltaPhi(top));
        dPhi_H_tau = abs(H.DeltaPhi(tau));
        dPhi_H_jet1 = abs(H.DeltaPhi(jet1_bjetveto));
        dPhi_H_bjet1 = abs(H.DeltaPhi(bjet1));
        dPhi_H_jet2 = abs(H.DeltaPhi(jet2_bjetveto));
        dPhi_top_tau = abs(top.DeltaPhi(tau));
        dPhi_top_jet1 = abs(top.DeltaPhi(jet1_bjetveto));
        dPhi_top_bjet1 = abs(top.DeltaPhi(bjet1));
        dPhi_top_jet2 = abs(top.DeltaPhi(jet2_bjetveto));
        dPhi_tau_jet1 = abs(tau.DeltaPhi(jet1_bjetveto));
        dPhi_tau_bjet1 = abs(tau.DeltaPhi(bjet1));
        dPhi_tau_jet2 = abs(tau.DeltaPhi(jet2_bjetveto));
        dPhi_jet1_bjet1 = abs(jet1_bjetveto.DeltaPhi(bjet1));
        dPhi_jet1_jet2 = abs(jet1_bjetveto.DeltaPhi(jet2_bjetveto));
        dPhi_bjet1_jet2 = abs(bjet1.DeltaPhi(jet2_bjetveto));
        
        dPt_W_H = abs(W_pt - H_pt);
        dPt_W_top = abs(W_pt - top_pt);
        dPt_W_tau = abs(W_pt - tau_pt);
        dPt_W_jet1 = abs(W_pt - jet1_pt);
        dPt_W_bjet1 = abs(W_pt - bjet1_pt);
        dPt_W_jet2 = abs(W_pt - jet2_pt);
        dPt_H_top = abs(H_pt - top_pt);
        dPt_H_tau = abs(H_pt - tau_pt);
        dPt_H_jet1 = abs(H_pt - jet1_pt);
        dPt_H_bjet1 = abs(H_pt - bjet1_pt);
        dPt_H_jet2 = abs(H_pt - jet2_pt);
        dPt_top_tau = abs(top_pt - tau_pt);
        dPt_top_jet1 = abs(top_pt - jet1_pt);
        dPt_top_bjet1 = abs(top_pt - bjet1_pt);
        dPt_top_jet2 = abs(top_pt - jet2_pt);
        dPt_tau_jet1 = abs(tau_pt - jet1_pt);
        dPt_tau_bjet1 = abs(tau_pt - bjet1_pt);
        dPt_tau_jet2 = abs(tau_pt - jet2_pt);
        dPt_jet1_bjet1 = abs(jet1_pt - bjet1_pt);
        dPt_jet1_bjet1_notAbs = jet1_pt - bjet1_pt;
        dPt_jet1_jet2 = abs(jet1_pt - jet2_pt);
        dPt_bjet1_jet2 = abs(bjet1_pt - jet2_pt);
        
        dR_W_H = W.DeltaR(H);
        dR_W_top = W.DeltaR(top);
        dR_W_tau = W.DeltaR(tau);
        dR_W_jet1 = W.DeltaR(jet1_bjetveto);
        dR_W_bjet1 = W.DeltaR(bjet1);
        dR_W_jet2 = W.DeltaR(jet2_bjetveto);
        dR_H_top = H.DeltaR(top);
        dR_H_tau = H.DeltaR(tau);
        dR_H_jet1 = H.DeltaR(jet1_bjetveto);
        dR_H_bjet1 = H.DeltaR(bjet1);
        dR_H_jet2 = H.DeltaR(jet2_bjetveto);
        dR_top_tau = top.DeltaR(tau);
        dR_top_jet1 = top.DeltaR(jet1_bjetveto);
        dR_top_bjet1 = top.DeltaR(bjet1);
        dR_top_jet2 = top.DeltaR(jet2_bjetveto);
        dR_tau_jet1 = tau.DeltaR(jet1_bjetveto);
        dR_tau_bjet1 = tau.DeltaR(bjet1);
        dR_tau_jet2 = tau.DeltaR(jet2_bjetveto);
        dR_jet1_bjet1 = jet1_bjetveto.DeltaR(bjet1);
        dR_jet1_jet2 = jet1_bjetveto.DeltaR(jet2_bjetveto);
        dR_bjet1_jet2 = bjet1.DeltaR(jet2_bjetveto);
        
        dEta_W_H = abs(W_eta - H_eta);
        dEta_W_top = abs(W_eta - top_eta);
        dEta_W_tau = abs(W_eta - tau_eta);
        dEta_W_jet1 = abs(W_eta - jet1_eta);
        dEta_W_bjet1 = abs(W_eta - bjet1_eta);
        dEta_W_jet2 = abs(W_eta - jet2_eta);
        dEta_H_top = abs(H_eta - top_eta);
        dEta_H_tau = abs(H_eta - tau_eta);
        dEta_H_jet1 = abs(H_eta - jet1_eta);
        dEta_H_bjet1 = abs(H_eta - bjet1_eta);
        dEta_H_jet2 = abs(H_eta - jet2_eta);
        dEta_top_tau = abs(top_eta - tau_eta);
        dEta_top_jet1 = abs(top_eta - jet1_eta);
        dEta_top_bjet1 = abs(top_eta - bjet1_eta);
        dEta_top_jet2 = abs(top_eta - jet2_eta);
        dEta_tau_jet1 = abs(tau_eta - jet1_eta);
        dEta_tau_bjet1 = abs(tau_eta - bjet1_eta);
        dEta_tau_jet2 = abs(tau_eta - jet2_eta);
        dEta_jet1_bjet1 = abs(jet1_eta - bjet1_eta);
        dEta_jet1_jet2 = abs(jet1_eta - jet2_eta);
        dEta_bjet1_jet2 = abs(bjet1_eta - jet2_eta);
    
        Ang_W_H = W.Angle(H.Vect());
        Ang_W_top = W.Angle(top.Vect());
        Ang_W_tau = W.Angle(tau.Vect());
        Ang_W_jet1 = W.Angle(jet1_bjetveto.Vect());
        Ang_W_bjet1 = W.Angle(bjet1.Vect());
        Ang_W_jet2 = W.Angle(jet2_bjetveto.Vect());
        Ang_H_top = H.Angle(top.Vect());
        Ang_H_tau = H.Angle(tau.Vect());
        Ang_H_jet1 = H.Angle(jet1_bjetveto.Vect());
        Ang_H_bjet1 = H.Angle(bjet1.Vect());
        Ang_H_jet2 = H.Angle(jet2_bjetveto.Vect());
        Ang_top_tau = top.Angle(tau.Vect());
        Ang_top_jet1 = top.Angle(jet1_bjetveto.Vect());
        Ang_top_bjet1 = top.Angle(bjet1.Vect());
        Ang_top_jet2 = top.Angle(jet2_bjetveto.Vect());
        Ang_tau_jet1 = tau.Angle(jet1_bjetveto.Vect());
        Ang_tau_bjet1 = tau.Angle(bjet1.Vect());
        Ang_tau_jet2 = tau.Angle(jet2_bjetveto.Vect());
        Ang_jet1_bjet1 = jet1_bjetveto.Angle(bjet1.Vect());
        Ang_jet1_jet2 = jet1_bjetveto.Angle(jet2_bjetveto.Vect());
        Ang_bjet1_jet2 = bjet1.Angle(jet2_bjetveto.Vect());
        
        EtaEta_tau_jet1 = tau_eta*jet1_eta;
        EtaEta_tau_jet2 = tau_eta*jet2_eta;
        EtaEta_tau_bjet1 = tau_eta*bjet1_eta;
        EtaEta_jet1_jet2 = jet1_eta*jet2_eta;
        EtaEta_jet1_bjet1 = jet1_eta*bjet1_eta;
        EtaEta_jet2_bjet1 = jet2_eta*bjet1_eta;
        
        sumPt = tau_pt + met_pt + jet1_pt + jet2_pt + bjet1_pt;
        
        //variables that includes bjet2
        if (nbjet == 2) {
            bjet2_pt=bjet2.Pt();
            bjet2_eta=bjet_eta2;
            bjet2_phi=bjet2.Phi();
            bjet2_m=bjet2.M();
            bjet2_mT=bjet2.Mt();
            dPhi_met_bjet2 = met.DeltaPhi(bjet2);
            dPt_met_bjet2 = abs(met_pt - bjet2_pt);
            
            dPhi_W_bjet2 = W.DeltaPhi(bjet2);
            dPhi_H_bjet2 = H.DeltaPhi(bjet2);
            dPhi_top_bjet2 = top.DeltaPhi(bjet2);
            dPhi_tau_bjet2 = tau.DeltaPhi(bjet2);
            dPhi_jet1_bjet2 = jet1_bjetveto.DeltaPhi(bjet2);
            dPhi_bjet1_bjet2 = bjet1.DeltaPhi(bjet2);
            dPhi_jet2_bjet2 = jet2_bjetveto.DeltaPhi(bjet2);
            
            dPt_W_bjet2 = abs(W_pt - bjet2_pt);
            dPt_H_bjet2 = abs(H_pt - bjet2_pt);
            dPt_top_bjet2 = abs(top_pt - bjet2_pt);
            dPt_tau_bjet2 = abs(tau_pt - bjet2_pt);
            dPt_jet1_bjet2 = abs(jet1_pt - bjet2_pt);
            dPt_bjet1_bjet2 = abs(bjet1_pt - bjet2_pt);
            dPt_jet2_bjet2 = abs(jet2_pt - bjet2_pt);

            dR_W_bjet2 = W.DeltaR(bjet2);
            dR_H_bjet2 = H.DeltaR(bjet2);
            dR_top_bjet2 = top.DeltaR(bjet2);
            dR_tau_bjet2 = tau.DeltaR(bjet2);
            dR_jet1_bjet2 = jet1_bjetveto.DeltaR(bjet2);
            dR_bjet1_bjet2 = bjet1.DeltaR(bjet2);
            dR_jet2_bjet2 = jet2_bjetveto.DeltaR(bjet2);
            
            dEta_W_bjet2 = abs(W_eta - bjet2_eta);
            dEta_H_bjet2 = abs(H_eta - bjet2_eta);
            dEta_top_bjet2 = abs(top_eta - bjet2_eta);
            dEta_tau_bjet2 = abs(tau_eta - bjet2_eta);
            dEta_jet1_bjet2 = abs(jet1_eta - bjet2_eta);
            dEta_bjet1_bjet2 = abs(bjet1_eta - bjet2_eta);
            dEta_jet2_bjet2 = abs(jet2_eta - bjet2_eta);
            
            Ang_W_bjet2 = W.Angle(bjet2.Vect());
            Ang_H_bjet2 = H.Angle(bjet2.Vect());
            Ang_top_bjet2 = top.Angle(bjet2.Vect());
            Ang_tau_bjet2 = tau.Angle(bjet2.Vect());
            Ang_jet1_bjet2 = jet1_bjetveto.Angle(bjet2.Vect());
            Ang_bjet1_bjet2 = bjet1.Angle(bjet2.Vect());
            Ang_jet2_bjet2 = jet2_bjetveto.Angle(bjet2.Vect());
            
            
//            std::cout << "jet_3_btag: " << jet_3_btag << std::endl;
//            std::cout << "jet_3_pt: " << jet_3_pt << std::endl;

            
//            std::cout << "nbjet: " << nbjet << std::endl;
//            std::cout << "indexbjet: " << indexbjet << std::endl;
//            std::cout << "indexbjet2: " << indexbjet2 << std::endl;
//            std::cout << "bjet2_pt: " << bjet2_pt << std::endl;
//            std::cout << "bjet2_phi: " << bjet2_phi << std::endl;
//            std::cout << "bjet2_eta: " << bjet2_eta << std::endl;
//            std::cout << "bjet2_m: " << bjet2_m << std::endl;
//            std::cout << "----------------------------------------------" << std::endl;


        }

        
        //fill the output ntuple
		acceptance->Fill();
        histW_pt->Fill(W_pt/GeV,weight);
        histH_pt->Fill(H_pt/GeV,weight);
        histtop_pt->Fill(top_pt/GeV,weight);
        histtau_pt->Fill(tau_pt/GeV,weight);
        histmet_pt->Fill(met_pt/GeV,weight);
        histjet1_pt->Fill(jet1_pt/GeV,weight);
        histjet2_pt->Fill(jet2_pt/GeV,weight);
        
        histW_eta->Fill(W_eta,weight);
        histH_eta->Fill(H_eta,weight);
        histtop_eta->Fill(top_eta,weight);
        histtau_eta->Fill(tau_eta,weight);
        histjet1_eta->Fill(jet1_eta,weight);
        histjet2_eta->Fill(jet2_eta,weight);
        
        histW_phi->Fill(W_phi,weight);
        histH_phi->Fill(H_phi,weight);
        histtop_phi->Fill(top_phi,weight);
        histtau_phi->Fill(tau_phi,weight);
        histmet_phi->Fill(met_phi,weight);
        histjet1_phi->Fill(jet1_phi,weight);
        histjet2_phi->Fill(jet2_phi,weight);
        
        histW_m->Fill(W_m/GeV,weight);
        histH_m->Fill(H_m/GeV,weight);
        histtop_m->Fill(top_m/GeV,weight);
        histtau_m->Fill(tau_m/GeV,weight);
        histjet1_m->Fill(jet1_m/GeV,weight);
        histjet2_m->Fill(jet2_m/GeV,weight);
        
        histW_mT->Fill(W_mT/GeV,weight);
        histH_mT->Fill(H_mT/GeV,weight);
        histtop_mT->Fill(top_mT/GeV,weight);
        histtau_mT->Fill(tau_mT/GeV,weight);
        histjet1_mT->Fill(jet1_mT/GeV,weight);
        histjet2_mT->Fill(jet2_mT/GeV,weight);
        
        histMT_tau_met->Fill(MT_tau_met/GeV,weight);
        
        histdPhi_met_H->Fill(dPhi_met_H,weight);
        histdPhi_met_W->Fill(dPhi_met_W,weight);
        histdPhi_met_top->Fill(dPhi_met_top,weight);
        histdPhi_met_tau->Fill(dPhi_met_tau,weight);
        histdPhi_met_jet1->Fill(dPhi_met_jet1,weight);
        histdPhi_met_jet2->Fill(dPhi_met_jet2,weight);
        
        histdPt_met_H->Fill(dPt_met_H/GeV,weight);
        histdPt_met_W->Fill(dPt_met_W/GeV,weight);
        histdPt_met_top->Fill(dPt_met_top/GeV,weight);
        histdPt_met_tau->Fill(dPt_met_tau/GeV,weight);
        histdPt_met_jet1->Fill(dPt_met_jet1/GeV,weight);
        histdPt_met_jet2->Fill(dPt_met_jet2/GeV,weight);
        
        histdPhi_W_H->Fill(dPhi_W_H,weight);
        histdPhi_W_top->Fill(dPhi_W_top,weight);
        histdPhi_W_tau->Fill(dPhi_W_tau,weight);
        histdPhi_W_jet1->Fill(dPhi_W_jet1,weight);
        histdPhi_W_jet2->Fill(dPhi_W_jet2,weight);
        histdPhi_H_top->Fill(dPhi_H_top,weight);
        histdPhi_H_tau->Fill(dPhi_H_tau,weight);
        histdPhi_H_jet1->Fill(dPhi_H_jet1,weight);
        histdPhi_H_jet2->Fill(dPhi_H_jet2,weight);
        histdPhi_top_tau->Fill(dPhi_top_tau,weight);
        histdPhi_top_jet1->Fill(dPhi_top_jet1,weight);
        histdPhi_top_jet2->Fill(dPhi_top_jet2,weight);
        histdPhi_tau_jet1->Fill(dPhi_tau_jet1,weight);
        histdPhi_tau_jet2->Fill(dPhi_tau_jet2,weight);
        histdPhi_jet1_jet2->Fill(dPhi_jet1_jet2,weight);
        
        histdPt_W_H->Fill(dPt_W_H/GeV,weight);
        histdPt_W_top->Fill(dPt_W_top/GeV,weight);
        histdPt_W_tau->Fill(dPt_W_tau/GeV,weight);
        histdPt_W_jet1->Fill(dPt_W_jet1/GeV,weight);
        histdPt_W_jet2->Fill(dPt_W_jet2/GeV,weight);
        histdPt_H_top->Fill(dPt_H_top/GeV,weight);
        histdPt_H_tau->Fill(dPt_H_tau/GeV,weight);
        histdPt_H_jet1->Fill(dPt_H_jet1/GeV,weight);
        histdPt_H_jet2->Fill(dPt_H_jet2/GeV,weight);
        histdPt_top_tau->Fill(dPt_top_tau/GeV,weight);
        histdPt_top_jet1->Fill(dPt_top_jet1/GeV,weight);
        histdPt_top_jet2->Fill(dPt_top_jet2/GeV,weight);
        histdPt_tau_jet1->Fill(dPt_tau_jet1/GeV,weight);
        histdPt_tau_jet2->Fill(dPt_tau_jet2/GeV,weight);
        histdPt_jet1_jet2->Fill(dPt_jet1_jet2/GeV,weight);
        
        histdEta_W_H->Fill(dEta_W_H,weight);
        histdEta_W_top->Fill(dEta_W_top,weight);
        histdEta_W_tau->Fill(dEta_W_tau,weight);
        histdEta_W_jet1->Fill(dEta_W_jet1,weight);
        histdEta_W_jet2->Fill(dEta_W_jet2,weight);
        histdEta_H_top->Fill(dEta_H_top,weight);
        histdEta_H_tau->Fill(dEta_H_tau,weight);
        histdEta_H_jet1->Fill(dEta_H_jet1,weight);
        histdEta_H_jet2->Fill(dEta_H_jet2,weight);
        histdEta_top_tau->Fill(dEta_top_tau,weight);
        histdEta_top_jet1->Fill(dEta_top_jet1,weight);
        histdEta_top_jet2->Fill(dEta_top_jet2,weight);
        histdEta_tau_jet1->Fill(dEta_tau_jet1,weight);
        histdEta_tau_jet2->Fill(dEta_tau_jet2,weight);
        histdEta_jet1_jet2->Fill(dEta_jet1_jet2,weight);
        
        histdR_W_H->Fill(dR_W_H,weight);
        histdR_W_top->Fill(dR_W_top,weight);
        histdR_W_tau->Fill(dR_W_tau,weight);
        histdR_W_jet1->Fill(dR_W_jet1,weight);
        histdR_W_jet2->Fill(dR_W_jet2,weight);
        histdR_H_top->Fill(dR_H_top,weight);
        histdR_H_tau->Fill(dR_H_tau,weight);
        histdR_H_jet1->Fill(dR_H_jet1,weight);
        histdR_H_jet2->Fill(dR_H_jet2,weight);
        histdR_top_tau->Fill(dR_top_tau,weight);
        histdR_top_jet1->Fill(dR_top_jet1,weight);
        histdR_top_jet2->Fill(dR_top_jet2,weight);
        histdR_tau_jet1->Fill(dR_tau_jet1,weight);
        histdR_tau_jet2->Fill(dR_tau_jet2,weight);
        histdR_jet1_jet2->Fill(dR_jet1_jet2,weight);
        
        histAng_W_H->Fill(Ang_W_H,weight);
        histAng_W_top->Fill(Ang_W_top,weight);
        histAng_W_tau->Fill(Ang_W_tau,weight);
        histAng_W_jet1->Fill(Ang_W_jet1,weight);
        histAng_W_jet2->Fill(Ang_W_jet2,weight);
        histAng_H_top->Fill(Ang_H_top,weight);
        histAng_H_tau->Fill(Ang_H_tau,weight);
        histAng_H_jet1->Fill(Ang_H_jet1,weight);
        histAng_H_jet2->Fill(Ang_H_jet2,weight);
        histAng_top_tau->Fill(Ang_top_tau,weight);
        histAng_top_jet1->Fill(Ang_top_jet1,weight);
        histAng_top_jet2->Fill(Ang_top_jet2,weight);
        histAng_tau_jet1->Fill(Ang_tau_jet1,weight);
        histAng_tau_jet2->Fill(Ang_tau_jet2,weight);
        histAng_jet1_jet2->Fill(Ang_jet1_jet2,weight);

        
        
        histbjet1_pt->Fill(bjet1_pt/GeV,weight);
        histbjet1_eta->Fill(bjet1_eta,weight);
        histbjet1_phi->Fill(bjet1_phi,weight);
        histbjet1_m->Fill(bjet1_m/GeV,weight);
        histdPhi_met_bjet1->Fill(dPhi_met_bjet1,weight);
        histdPt_met_bjet1->Fill(dPt_met_bjet1/GeV,weight);
        
        histdPhi_W_bjet1->Fill(dPhi_W_bjet1,weight);
        histdPhi_H_bjet1->Fill(dPhi_H_bjet1,weight);
        histdPhi_top_bjet1->Fill(dPhi_top_bjet1,weight);
        histdPhi_tau_bjet1->Fill(dPhi_tau_bjet1,weight);
        histdPhi_jet1_bjet1->Fill(dPhi_jet1_bjet1,weight);
        histdPhi_bjet1_jet2->Fill(dPhi_bjet1_jet2,weight);
        
        histdPt_W_bjet1->Fill(dPt_W_bjet1/GeV,weight);
        histdPt_H_bjet1->Fill(dPt_H_bjet1/GeV,weight);
        histdPt_top_bjet1->Fill(dPt_top_bjet1/GeV,weight);
        histdPt_tau_bjet1->Fill(dPt_tau_bjet1/GeV,weight);
        histdPt_jet1_bjet1->Fill(dPt_jet1_bjet1/GeV,weight);
        histdPt_jet1_bjet1_notAbs->Fill(dPt_jet1_bjet1_notAbs/GeV,weight);
        histdPt_bjet1_jet2->Fill(dPt_bjet1_jet2/GeV,weight);
        
        histdEta_W_bjet1->Fill(dEta_W_bjet1,weight);
        histdEta_H_bjet1->Fill(dEta_H_bjet1,weight);
        histdEta_top_bjet1->Fill(dEta_top_bjet1,weight);
        histdEta_tau_bjet1->Fill(dEta_tau_bjet1,weight);
        histdEta_jet1_bjet1->Fill(dEta_jet1_bjet1,weight);
        histdEta_bjet1_jet2->Fill(dEta_bjet1_jet2,weight);
        
        histdR_W_bjet1->Fill(dR_W_bjet1,weight);
        histdR_H_bjet1->Fill(dR_H_bjet1,weight);
        histdR_top_bjet1->Fill(dR_top_bjet1,weight);
        histdR_tau_bjet1->Fill(dR_tau_bjet1,weight);
        histdR_jet1_bjet1->Fill(dR_jet1_bjet1,weight);
        histdR_bjet1_jet2->Fill(dR_bjet1_jet2,weight);
        
        histAng_W_bjet1->Fill(Ang_W_bjet1,weight);
        histAng_H_bjet1->Fill(Ang_H_bjet1,weight);
        histAng_top_bjet1->Fill(Ang_top_bjet1,weight);
        histAng_tau_bjet1->Fill(Ang_tau_bjet1,weight);
        histAng_jet1_bjet1->Fill(Ang_jet1_bjet1,weight);
        histAng_bjet1_jet2->Fill(Ang_bjet1_jet2,weight);
        
        h2->Fill(met_pt/GeV,dPt_jet1_bjet1_notAbs/GeV,weight);
        h3->Fill(met_pt/GeV,dPt_jet1_bjet1/GeV,weight);
        if (jet1_pt > met_pt) {
            h4->Fill(met_pt/GeV,dPt_jet1_bjet1_notAbs/GeV,weight);
        } else if (jet1_pt < met_pt) {
            h5->Fill(met_pt/GeV,dPt_jet1_bjet1_notAbs/GeV,weight);
        }
        h6->Fill(met_pt/GeV,jet1_pt/GeV,weight);
        h7->Fill(met_pt/GeV,bjet1_pt/GeV,weight);
        
//        hmet_sig->Fill(met_sig,weight);
//        hmet_sumet->Fill(met_sumet/GeV,weight);
        
        hupsilon1->Fill(upsilon1,weight);
//        hupsilon3->Fill(upsilon3,weight);
        
        hEtaEta_tau_jet1->Fill(EtaEta_tau_jet1,weight);
        hEtaEta_tau_jet2->Fill(EtaEta_tau_jet2,weight);
        hEtaEta_tau_bjet1->Fill(EtaEta_tau_bjet1,weight);
        hEtaEta_jet1_jet2->Fill(EtaEta_jet1_jet2,weight);
        hEtaEta_jet1_bjet1->Fill(EtaEta_jet1_bjet1,weight);
        hEtaEta_jet2_bjet1->Fill(EtaEta_jet2_bjet1,weight);
        
        //hsumPt->Fill(sumPt/GeV,weight);
        
        if (nbjet == 2) {
            //fill events that require 2 bjets
            histbjet2_pt->Fill(bjet2_pt/GeV,weight);
            histbjet2_eta->Fill(bjet2_eta,weight);
            histbjet2_phi->Fill(bjet2_phi,weight);
            histbjet2_m->Fill(bjet2_m/GeV,weight);
            histbjet2_mT->Fill(bjet2_mT/GeV,weight);
            histdPhi_met_bjet2->Fill(dPhi_met_bjet2,weight);
            histdPt_met_bjet2->Fill(dPt_met_bjet2/GeV,weight);
            
            histdPhi_W_bjet2->Fill(dPhi_W_bjet2,weight);
            histdPhi_H_bjet2->Fill(dPhi_H_bjet2,weight);
            histdPhi_top_bjet2->Fill(dPhi_top_bjet2,weight);
            histdPhi_tau_bjet2->Fill(dPhi_tau_bjet2,weight);
            histdPhi_jet1_bjet2->Fill(dPhi_jet1_bjet2,weight);
            histdPhi_bjet1_bjet2->Fill(dPhi_bjet1_bjet2,weight);
            histdPhi_jet2_bjet2->Fill(dPhi_jet2_bjet2,weight);
            
            histdPt_W_bjet2->Fill(dPt_W_bjet2/GeV,weight);
            histdPt_H_bjet2->Fill(dPt_H_bjet2/GeV,weight);
            histdPt_top_bjet2->Fill(dPt_top_bjet2/GeV,weight);
            histdPt_tau_bjet2->Fill(dPt_tau_bjet2/GeV,weight);
            histdPt_jet1_bjet2->Fill(dPt_jet1_bjet2/GeV,weight);
            histdPt_bjet1_bjet2->Fill(dPt_bjet1_bjet2/GeV,weight);
            histdPt_jet2_bjet2->Fill(dPt_jet2_bjet2/GeV,weight);
            
            histdEta_W_bjet2->Fill(dEta_W_bjet2,weight);
            histdEta_H_bjet2->Fill(dEta_H_bjet2,weight);
            histdEta_top_bjet2->Fill(dEta_top_bjet2,weight);
            histdEta_tau_bjet2->Fill(dEta_tau_bjet2,weight);
            histdEta_jet1_bjet2->Fill(dEta_jet1_bjet2,weight);
            histdEta_bjet1_bjet2->Fill(dEta_bjet1_bjet2,weight);
            histdEta_jet2_bjet2->Fill(dEta_jet2_bjet2,weight);
            
            histdR_W_bjet2->Fill(dR_W_bjet2,weight);
            histdR_H_bjet2->Fill(dR_H_bjet2,weight);
            histdR_top_bjet2->Fill(dR_top_bjet2,weight);
            histdR_tau_bjet2->Fill(dR_tau_bjet2,weight);
            histdR_jet1_bjet2->Fill(dR_jet1_bjet2,weight);
            histdR_bjet1_bjet2->Fill(dR_bjet1_bjet2,weight);
            histdR_jet2_bjet2->Fill(dR_jet2_bjet2,weight);
            
            histAng_W_bjet2->Fill(Ang_W_bjet2,weight);
            histAng_H_bjet2->Fill(Ang_H_bjet2,weight);
            histAng_top_bjet2->Fill(Ang_top_bjet2,weight);
            histAng_tau_bjet2->Fill(Ang_tau_bjet2,weight);
            histAng_jet1_bjet2->Fill(Ang_jet1_bjet2,weight);
            histAng_bjet1_bjet2->Fill(Ang_bjet1_bjet2,weight);
            histAng_jet2_bjet2->Fill(Ang_jet2_bjet2,weight);
        }
	}


	TString output = Name(input);
    std::cout << "events missing b-tag: " << no_btags << std::endl;
    std::cout << "events missing jet1: " << no_jet1 << std::endl;
    std::cout << "events missing jet2: " << no_jet2 << std::endl;
    std::cout << "events where jet1=jet2!=0: " << conflict << std::endl;
    std::cout << "events in total: " << totalevents << std::endl;


	//	std::cout<<"input "<<input<<" "<<output<<std::endl;
	std::cout<<"initial number of entries "<<nentries<<std::endl;
	std::cout<<"initial number weighted entries "<<total_events<<std::endl;

	//	std::cout<<"XS "<<CrossSec<<std::endl;

	std::cout<<input<<"\t "<<output<<"\t "<<c5<<"\t "<<CrossSec<<"\t "<<all<<std::endl;


	CutFlow_weighted->SetBinContent(1,total_events*all);
	CutFlow_weighted->SetBinContent(2,c1w*all);
	CutFlow_weighted->SetBinContent(3,c2w*all);
	CutFlow_weighted->SetBinContent(4,c3w*all);
	CutFlow_weighted->SetBinContent(5,c4w*all);
	CutFlow_weighted->SetBinContent(6,c5w*all);
	CutFlow_weighted->SetBinContent(7,c6w*all);

	CutFlow_unweighted->SetBinContent(1,total_events_noweight);
	CutFlow_unweighted->SetBinContent(2,c1);
	CutFlow_unweighted->SetBinContent(3,c2);
	CutFlow_unweighted->SetBinContent(4,c3);
	CutFlow_unweighted->SetBinContent(5,c4);
	CutFlow_unweighted->SetBinContent(6,c5);
	CutFlow_unweighted->SetBinContent(7,c6);


	CutFlow_weighted_trueTaus->SetBinContent(1,c0w_trueTau*all);
	CutFlow_weighted_trueTaus->SetBinContent(2,c1w_trueTau*all);
	CutFlow_weighted_trueTaus->SetBinContent(3,c2w_trueTau*all);
	CutFlow_weighted_trueTaus->SetBinContent(4,c3w_trueTau*all);
	CutFlow_weighted_trueTaus->SetBinContent(5,c4w_trueTau*all);
	CutFlow_weighted_trueTaus->SetBinContent(6,c5w_trueTau*all);
	CutFlow_weighted_trueTaus->SetBinContent(7,c6w_trueTau*all);

	CutFlow_weighted_fakeTaus->SetBinContent(1,c0w_fakeTau*all);
	CutFlow_weighted_fakeTaus->SetBinContent(2,c1w_fakeTau*all);
	CutFlow_weighted_fakeTaus->SetBinContent(3,c2w_fakeTau*all);
	CutFlow_weighted_fakeTaus->SetBinContent(4,c3w_fakeTau*all);
	CutFlow_weighted_fakeTaus->SetBinContent(5,c4w_fakeTau*all);
	CutFlow_weighted_fakeTaus->SetBinContent(6,c5w_fakeTau*all);
	CutFlow_weighted_fakeTaus->SetBinContent(7,c6w_fakeTau*all);
    



	TString cutName;


	TFile* outputFile = TFile::Open("ntuple/"+input+"_"+output+".root","recreate");
	acceptance->Write();
	outputFile->Close();

	TFile* a = TFile::Open("output/"+input+"_"+output+".root","recreate");

	CutFlow_weighted_trueTaus->Write();
	CutFlow_weighted_fakeTaus->Write();
	CutFlow_weighted->Write();
	CutFlow_unweighted->Write();
    
    
    //add scales with all
    
//    std::cout << "scale (all) :  " << all << std::endl;
    
    std::cout << histbjet2_pt->Integral() << std::endl;

    histW_pt->Scale(all);
    histH_pt->Scale(all);
    histtop_pt->Scale(all);
    histtau_pt->Scale(all);
    histmet_pt->Scale(all);
    histjet1_pt->Scale(all);
    histjet2_pt->Scale(all);
    histbjet1_pt->Scale(all);
    histbjet2_pt->Scale(all);
    
    std::cout << histbjet2_pt->Integral() << std::endl;
    
    histW_eta->Scale(all);
    histH_eta->Scale(all);
    histtop_eta->Scale(all);
    histtau_eta->Scale(all);
    histjet1_eta->Scale(all);
    histjet2_eta->Scale(all);
    histbjet1_eta->Scale(all);
    histbjet2_eta->Scale(all);
    
    histW_phi->Scale(all);
    histH_phi->Scale(all);
    histtop_phi->Scale(all);
    histtau_phi->Scale(all);
    histmet_phi->Scale(all);
    histjet1_phi->Scale(all);
    histjet2_phi->Scale(all);
    histbjet1_phi->Scale(all);
    histbjet2_phi->Scale(all);
    
    
    histW_m->Scale(all);
    histH_m->Scale(all);
    histtop_m->Scale(all);
    histtau_m->Scale(all);
    histjet1_m->Scale(all);
    histjet2_m->Scale(all);
    histbjet1_m->Scale(all);
    histbjet2_m->Scale(all);

    histW_mT->Scale(all);
    histH_mT->Scale(all);
    histtop_mT->Scale(all);
    histtau_mT->Scale(all);
    histjet1_mT->Scale(all);
    histjet2_mT->Scale(all);
    histbjet1_mT->Scale(all);
    histbjet2_mT->Scale(all);
    
    histMT_tau_met->Scale(all);

    histdPhi_met_H->Scale(all);
    histdPhi_met_W->Scale(all);
    histdPhi_met_top->Scale(all);
    histdPhi_met_tau->Scale(all);
    histdPhi_met_jet1->Scale(all);
    histdPhi_met_jet2->Scale(all);
    histdPhi_met_bjet1->Scale(all);
    histdPhi_met_bjet2->Scale(all);
    
    histdPt_met_H->Scale(all);
    histdPt_met_W->Scale(all);
    histdPt_met_top->Scale(all);
    histdPt_met_tau->Scale(all);
    histdPt_met_jet1->Scale(all);
    histdPt_met_jet2->Scale(all);
    histdPt_met_bjet1->Scale(all);
    histdPt_met_bjet2->Scale(all);
    
    histdPhi_W_H->Scale(all);
    histdPhi_W_top->Scale(all);
    histdPhi_W_tau->Scale(all);
    histdPhi_W_jet1->Scale(all);
    histdPhi_W_bjet1->Scale(all);
    histdPhi_W_jet2->Scale(all);
    histdPhi_W_bjet2->Scale(all);
    histdPhi_H_top->Scale(all);
    histdPhi_H_tau->Scale(all);
    histdPhi_H_jet1->Scale(all);
    histdPhi_H_bjet1->Scale(all);
    histdPhi_H_jet2->Scale(all);
    histdPhi_H_bjet2->Scale(all);
    histdPhi_top_tau->Scale(all);
    histdPhi_top_jet1->Scale(all);
    histdPhi_top_bjet1->Scale(all);
    histdPhi_top_jet2->Scale(all);
    histdPhi_top_bjet2->Scale(all);
    histdPhi_tau_jet1->Scale(all);
    histdPhi_tau_bjet1->Scale(all);
    histdPhi_tau_jet2->Scale(all);
    histdPhi_tau_bjet2->Scale(all);
    histdPhi_jet1_bjet1->Scale(all);
    histdPhi_jet1_jet2->Scale(all);
    histdPhi_jet1_bjet2->Scale(all);
    histdPhi_bjet1_jet2->Scale(all);
    histdPhi_bjet1_bjet2->Scale(all);
    histdPhi_jet2_bjet2->Scale(all);
    
    histdPt_W_H->Scale(all);
    histdPt_W_top->Scale(all);
    histdPt_W_tau->Scale(all);
    histdPt_W_jet1->Scale(all);
    histdPt_W_bjet1->Scale(all);
    histdPt_W_jet2->Scale(all);
    histdPt_W_bjet2->Scale(all);
    histdPt_H_top->Scale(all);
    histdPt_H_tau->Scale(all);
    histdPt_H_jet1->Scale(all);
    histdPt_H_bjet1->Scale(all);
    histdPt_H_jet2->Scale(all);
    histdPt_H_bjet2->Scale(all);
    histdPt_top_tau->Scale(all);
    histdPt_top_jet1->Scale(all);
    histdPt_top_bjet1->Scale(all);
    histdPt_top_jet2->Scale(all);
    histdPt_top_bjet2->Scale(all);
    histdPt_tau_jet1->Scale(all);
    histdPt_tau_bjet1->Scale(all);
    histdPt_tau_jet2->Scale(all);
    histdPt_tau_bjet2->Scale(all);
    histdPt_jet1_bjet1->Scale(all);
    histdPt_jet1_bjet1_notAbs->Scale(all);
    histdPt_jet1_jet2->Scale(all);
    histdPt_jet1_bjet2->Scale(all);
    histdPt_bjet1_jet2->Scale(all);
    histdPt_bjet1_bjet2->Scale(all);
    histdPt_jet2_bjet2->Scale(all);
    
    histdEta_W_H->Scale(all);
    histdEta_W_top->Scale(all);
    histdEta_W_tau->Scale(all);
    histdEta_W_jet1->Scale(all);
    histdEta_W_bjet1->Scale(all);
    histdEta_W_jet2->Scale(all);
    histdEta_W_bjet2->Scale(all);
    histdEta_H_top->Scale(all);
    histdEta_H_tau->Scale(all);
    histdEta_H_jet1->Scale(all);
    histdEta_H_bjet1->Scale(all);
    histdEta_H_jet2->Scale(all);
    histdEta_H_bjet2->Scale(all);
    histdEta_top_tau->Scale(all);
    histdEta_top_jet1->Scale(all);
    histdEta_top_bjet1->Scale(all);
    histdEta_top_jet2->Scale(all);
    histdEta_top_bjet2->Scale(all);
    histdEta_tau_jet1->Scale(all);
    histdEta_tau_bjet1->Scale(all);
    histdEta_tau_jet2->Scale(all);
    histdEta_tau_bjet2->Scale(all);
    histdEta_jet1_bjet1->Scale(all);
    histdEta_jet1_jet2->Scale(all);
    histdEta_jet1_bjet2->Scale(all);
    histdEta_bjet1_jet2->Scale(all);
    histdEta_bjet1_bjet2->Scale(all);
    histdEta_jet2_bjet2->Scale(all);
    
    histdR_W_H->Scale(all);
    histdR_W_top->Scale(all);
    histdR_W_tau->Scale(all);
    histdR_W_jet1->Scale(all);
    histdR_W_bjet1->Scale(all);
    histdR_W_jet2->Scale(all);
    histdR_W_bjet2->Scale(all);
    histdR_H_top->Scale(all);
    histdR_H_tau->Scale(all);
    histdR_H_jet1->Scale(all);
    histdR_H_bjet1->Scale(all);
    histdR_H_jet2->Scale(all);
    histdR_H_bjet2->Scale(all);
    histdR_top_tau->Scale(all);
    histdR_top_jet1->Scale(all);
    histdR_top_bjet1->Scale(all);
    histdR_top_jet2->Scale(all);
    histdR_top_bjet2->Scale(all);
    histdR_tau_jet1->Scale(all);
    histdR_tau_bjet1->Scale(all);
    histdR_tau_jet2->Scale(all);
    histdR_tau_bjet2->Scale(all);
    histdR_jet1_bjet1->Scale(all);
    histdR_jet1_jet2->Scale(all);
    histdR_jet1_bjet2->Scale(all);
    histdR_bjet1_jet2->Scale(all);
    histdR_bjet1_bjet2->Scale(all);
    histdR_jet2_bjet2->Scale(all);
    
    histAng_W_H->Scale(all);
    histAng_W_top->Scale(all);
    histAng_W_tau->Scale(all);
    histAng_W_jet1->Scale(all);
    histAng_W_bjet1->Scale(all);
    histAng_W_jet2->Scale(all);
    histAng_W_bjet2->Scale(all);
    histAng_H_top->Scale(all);
    histAng_H_tau->Scale(all);
    histAng_H_jet1->Scale(all);
    histAng_H_bjet1->Scale(all);
    histAng_H_jet2->Scale(all);
    histAng_H_bjet2->Scale(all);
    histAng_top_tau->Scale(all);
    histAng_top_jet1->Scale(all);
    histAng_top_bjet1->Scale(all);
    histAng_top_jet2->Scale(all);
    histAng_top_bjet2->Scale(all);
    histAng_tau_jet1->Scale(all);
    histAng_tau_bjet1->Scale(all);
    histAng_tau_jet2->Scale(all);
    histAng_tau_bjet2->Scale(all);
    histAng_jet1_bjet1->Scale(all);
    histAng_jet1_jet2->Scale(all);
    histAng_jet1_bjet2->Scale(all);
    histAng_bjet1_jet2->Scale(all);
    histAng_bjet1_bjet2->Scale(all);
    histAng_jet2_bjet2->Scale(all);
    
    histsumPt_jet1_jet2->Scale(all);
    histn_btags->Scale(all);
    
//    hmet_sig->Scale(all);
//    hmet_sumet->Scale(all);
    
    h2->Scale(all);
    h3->Scale(all);
    h4->Scale(all);
    h5->Scale(all);
    h6->Scale(all);
    h7->Scale(all);
    
    hupsilon1->Scale(all);
//    hupsilon3->Scale(all);
    
    hEtaEta_tau_jet1->Scale(all);
    hEtaEta_tau_jet2->Scale(all);
    hEtaEta_tau_bjet1->Scale(all);
    hEtaEta_jet1_jet2->Scale(all);
    hEtaEta_jet1_bjet1->Scale(all);
    hEtaEta_jet2_bjet1->Scale(all);

//    hsumPt->Scale(all);
    
    
    histW_pt->Write();
    histH_pt->Write();
    histtop_pt->Write();
    histtau_pt->Write();
    histmet_pt->Write();
    histjet1_pt->Write();
    histjet2_pt->Write();
    histbjet1_pt->Write();
    histbjet2_pt->Write();
    
    histW_eta->Write();
    histH_eta->Write();
    histtop_eta->Write();
    histtau_eta->Write();
    histjet1_eta->Write();
    histjet2_eta->Write();
    histbjet1_eta->Write();
    histbjet2_eta->Write();
    
    histW_phi->Write();
    histH_phi->Write();
    histtop_phi->Write();
    histtau_phi->Write();
    histmet_phi->Write();
    histjet1_phi->Write();
    histjet2_phi->Write();
    histbjet1_phi->Write();
    histbjet2_phi->Write();
    
    histW_m->Write();
    histH_m->Write();
    histtop_m->Write();
    histtau_m->Write();
    histjet1_m->Write();
    histjet2_m->Write();
    histbjet1_m->Write();
    histbjet2_m->Write();

    histW_mT->Write();
    histH_mT->Write();
    histtop_mT->Write();
    histtau_mT->Write();
    histjet1_mT->Write();
    histjet2_mT->Write();
    histbjet1_mT->Write();
    histbjet2_mT->Write();
    
    histMT_tau_met->Write();

    histdPhi_met_H->Write();
    histdPhi_met_W->Write();
    histdPhi_met_top->Write();
    histdPhi_met_tau->Write();
    histdPhi_met_jet1->Write();
    histdPhi_met_jet2->Write();
    histdPhi_met_bjet1->Write();
    histdPhi_met_bjet2->Write();
    
    histdPt_met_H->Write();
    histdPt_met_W->Write();
    histdPt_met_top->Write();
    histdPt_met_tau->Write();
    histdPt_met_jet1->Write();
    histdPt_met_jet2->Write();
    histdPt_met_bjet1->Write();
    histdPt_met_bjet2->Write();
    
    histdPhi_W_H->Write();
    histdPhi_W_top->Write();
    histdPhi_W_tau->Write();
    histdPhi_W_jet1->Write();
    histdPhi_W_bjet1->Write();
    histdPhi_W_jet2->Write();
    histdPhi_W_bjet2->Write();
    histdPhi_H_top->Write();
    histdPhi_H_tau->Write();
    histdPhi_H_jet1->Write();
    histdPhi_H_bjet1->Write();
    histdPhi_H_jet2->Write();
    histdPhi_H_bjet2->Write();
    histdPhi_top_tau->Write();
    histdPhi_top_jet1->Write();
    histdPhi_top_bjet1->Write();
    histdPhi_top_jet2->Write();
    histdPhi_top_bjet2->Write();
    histdPhi_tau_jet1->Write();
    histdPhi_tau_bjet1->Write();
    histdPhi_tau_jet2->Write();
    histdPhi_tau_bjet2->Write();
    histdPhi_jet1_bjet1->Write();
    histdPhi_jet1_jet2->Write();
    histdPhi_jet1_bjet2->Write();
    histdPhi_bjet1_jet2->Write();
    histdPhi_bjet1_bjet2->Write();
    histdPhi_jet2_bjet2->Write();
    
    histdPt_W_H->Write();
    histdPt_W_top->Write();
    histdPt_W_tau->Write();
    histdPt_W_jet1->Write();
    histdPt_W_bjet1->Write();
    histdPt_W_jet2->Write();
    histdPt_W_bjet2->Write();
    histdPt_H_top->Write();
    histdPt_H_tau->Write();
    histdPt_H_jet1->Write();
    histdPt_H_bjet1->Write();
    histdPt_H_jet2->Write();
    histdPt_H_bjet2->Write();
    histdPt_top_tau->Write();
    histdPt_top_jet1->Write();
    histdPt_top_bjet1->Write();
    histdPt_top_jet2->Write();
    histdPt_top_bjet2->Write();
    histdPt_tau_jet1->Write();
    histdPt_tau_bjet1->Write();
    histdPt_tau_jet2->Write();
    histdPt_tau_bjet2->Write();
    histdPt_jet1_bjet1->Write();
    histdPt_jet1_bjet1_notAbs->Write();
    histdPt_jet1_jet2->Write();
    histdPt_jet1_bjet2->Write();
    histdPt_bjet1_jet2->Write();
    histdPt_bjet1_bjet2->Write();
    histdPt_jet2_bjet2->Write();
    
    histdEta_W_H->Write();
    histdEta_W_top->Write();
    histdEta_W_tau->Write();
    histdEta_W_jet1->Write();
    histdEta_W_bjet1->Write();
    histdEta_W_jet2->Write();
    histdEta_W_bjet2->Write();
    histdEta_H_top->Write();
    histdEta_H_tau->Write();
    histdEta_H_jet1->Write();
    histdEta_H_bjet1->Write();
    histdEta_H_jet2->Write();
    histdEta_H_bjet2->Write();
    histdEta_top_tau->Write();
    histdEta_top_jet1->Write();
    histdEta_top_bjet1->Write();
    histdEta_top_jet2->Write();
    histdEta_top_bjet2->Write();
    histdEta_tau_jet1->Write();
    histdEta_tau_bjet1->Write();
    histdEta_tau_jet2->Write();
    histdEta_tau_bjet2->Write();
    histdEta_jet1_bjet1->Write();
    histdEta_jet1_jet2->Write();
    histdEta_jet1_bjet2->Write();
    histdEta_bjet1_jet2->Write();
    histdEta_bjet1_bjet2->Write();
    histdEta_jet2_bjet2->Write();
    
    histdR_W_H->Write();
    histdR_W_top->Write();
    histdR_W_tau->Write();
    histdR_W_jet1->Write();
    histdR_W_bjet1->Write();
    histdR_W_jet2->Write();
    histdR_W_bjet2->Write();
    histdR_H_top->Write();
    histdR_H_tau->Write();
    histdR_H_jet1->Write();
    histdR_H_bjet1->Write();
    histdR_H_jet2->Write();
    histdR_H_bjet2->Write();
    histdR_top_tau->Write();
    histdR_top_jet1->Write();
    histdR_top_bjet1->Write();
    histdR_top_jet2->Write();
    histdR_top_bjet2->Write();
    histdR_tau_jet1->Write();
    histdR_tau_bjet1->Write();
    histdR_tau_jet2->Write();
    histdR_tau_bjet2->Write();
    histdR_jet1_bjet1->Write();
    histdR_jet1_jet2->Write();
    histdR_jet1_bjet2->Write();
    histdR_bjet1_jet2->Write();
    histdR_bjet1_bjet2->Write();
    histdR_jet2_bjet2->Write();

    histAng_W_H->Write();
    histAng_W_top->Write();
    histAng_W_tau->Write();
    histAng_W_jet1->Write();
    histAng_W_bjet1->Write();
    histAng_W_jet2->Write();
    histAng_W_bjet2->Write();
    histAng_H_top->Write();
    histAng_H_tau->Write();
    histAng_H_jet1->Write();
    histAng_H_bjet1->Write();
    histAng_H_jet2->Write();
    histAng_H_bjet2->Write();
    histAng_top_tau->Write();
    histAng_top_jet1->Write();
    histAng_top_bjet1->Write();
    histAng_top_jet2->Write();
    histAng_top_bjet2->Write();
    histAng_tau_jet1->Write();
    histAng_tau_bjet1->Write();
    histAng_tau_jet2->Write();
    histAng_tau_bjet2->Write();
    histAng_jet1_bjet1->Write();
    histAng_jet1_jet2->Write();
    histAng_jet1_bjet2->Write();
    histAng_bjet1_jet2->Write();
    histAng_bjet1_bjet2->Write();
    histAng_jet2_bjet2->Write();
    
    histsumPt_jet1_jet2->Write();
    histn_btags->Write();
    
    h2->Write();
    h3->Write();
    h4->Write();
    h5->Write();
    h6->Write();
    h7->Write();
    
//    hmet_sig->Write();
//    hmet_sumet->Write();
    
    hupsilon1->Write();
//    hupsilon3->Write();
    
    hEtaEta_tau_jet1->Write();
    hEtaEta_tau_jet2->Write();
    hEtaEta_tau_bjet1->Write();
    hEtaEta_jet1_jet2->Write();
    hEtaEta_jet1_bjet1->Write();
    hEtaEta_jet2_bjet1->Write();
    
//    hsumPt->Write();

    
	a->Close();

	std::cout<<"Not normalised:  "<<std::endl;
	std::cout<<" "<<"\t"<<"Raw total:"<<"\t"<<"W. total:"<<"\t"<<"fakes:"<<"\t"<<"true:"<<"\t"<< std::endl;

	std::cout<<"c0: Total"<<"\t"<<c0<<"\t"<<c0w<<"\t"<<c0w_fakeTau<<"\t"<<c0w_trueTau<< std::endl;

	std::cout<<"c1: Clean "<<"\t"<<c1<<"\t"<<c1w<<"\t"<<c1w_fakeTau<<"\t"<<c1w_trueTau<< std::endl;
	std::cout<<"c2: Njets>=3"<<"\t"<<c2<<"\t"<<c2w<<"\t"<<c2w_fakeTau<<"\t"<<c2w_trueTau<< std::endl;
	std::cout<<"c3: HTL_xe70"<<"\t"<<c3<<"\t"<<c3w<<"\t"<<c3w_fakeTau<<"\t"<<c3w_trueTau<< std::endl;
	std::cout<<"c4: Medium Tau"<<"\t"<<c4<<"\t"<<c4w<<"\t"<<c4w_fakeTau<<"\t"<<c4w_trueTau<< std::endl;
	std::cout<<"c5: pT>40 GeV"<<"\t"<<c5<<"\t"<<c5w<<"\t"<<c5w_fakeTau<<"\t"<<c5w_trueTau<< std::endl;
	std::cout<<"c6: lep veto"<<"\t"<<c6<<"\t"<<c6w<<"\t"<<c6w_fakeTau<<"\t"<<c6w_trueTau<< std::endl;
	std::cout<<"c7: al 1 bjet"<<"\t"<<c7<<"\t"<<c7w<<"\t"<<c7w_fakeTau<<"\t"<<c7w_trueTau<< std::endl;
	std::cout<<"c8: MET>=150"<<"\t"<<c8<<"\t"<<c8w<<"\t"<<c8w_fakeTau<<"\t"<<c8w_trueTau<< std::endl;
	std::cout<<"c9: MT>100"<<"\t"<<c9<<"\t"<<c9w<<"\t"<<c9w_fakeTau<<"\t"<<c9w_trueTau<< std::endl;
	std::cout<<"c10: isMatched"<<"\t"<<c10<<"\t"<<c10w<<"\t"<<c10w_fakeTau<<"\t"<<c10w_trueTau<< std::endl;

	std::cout<<"Normalised:  "<<std::endl;
	std::cout<<"c0: Total"<<"\t"<<c0*all_noweight<<"\t"<<c0w*all<<"\t"<<c0w_fakeTau*all<<"\t"<<c0w_trueTau*all<< std::endl;
	std::cout<<"c1: Clean"<<"\t"<<c1*all_noweight<<"\t"<<c1w*all<<"\t"<<c1w_fakeTau*all<<"\t"<<c1w_trueTau*all<< std::endl;
	std::cout<<"c2: Njets>=3"<<"\t"<<c2*all_noweight<<"\t"<<c2w*all<<"\t"<<c2w_fakeTau*all<<"\t"<<c2w_trueTau*all<< std::endl;
	std::cout<<"c3: HTL_xe70"<<"\t"<<c3*all_noweight<<"\t"<<c3w*all<<"\t"<<c3w_fakeTau*all<<"\t"<<c3w_trueTau*all<< std::endl;
	std::cout<<"c4: Medium Tau"<<"\t"<<c4*all_noweight<<"\t"<<c4w*all<<"\t"<<c4w_fakeTau*all<<"\t"<<c4w_trueTau*all<< std::endl;
	std::cout<<"c5: pT>40 GeV"<<"\t"<<c5*all_noweight<<"\t"<<c5w*all<<"\t"<<c5w_fakeTau*all<<"\t"<<c5w_trueTau*all<< std::endl;
	std::cout<<"c6: lep veto"<<"\t"<<c6*all_noweight<<"\t"<<c6w*all<<"\t"<<c6w_fakeTau*all<<"\t"<<c6w_trueTau*all<< std::endl;
	std::cout<<"c7: al 1 bjet"<<"\t"<<c7*all_noweight<<"\t"<<c7w*all<<"\t"<<c7w_fakeTau*all<<"\t"<<c7w_trueTau*all<< std::endl;
	std::cout<<"c8: MET >=150"<<"\t"<<c8*all_noweight<<"\t"<<c8w*all<<"\t"<<c8w_fakeTau*all<<"\t"<<c8w_trueTau*all<< std::endl;
	std::cout<<"c9: MT>100"<<"\t"<<c9*all_noweight<<"\t"<<c9w*all<<"\t"<<c9w_fakeTau*all<<"\t"<<c9w_trueTau*all<< std::endl;
	std::cout<<"c10: isMatched"<<"\t"<<c10*all_noweight<<"\t"<<c10w*all<<"\t"<<c10w_fakeTau*all<<"\t"<<c10w_trueTau*all<< std::endl;



}
int main(int argc, char **argv)
{

	gROOT->ProcessLine("#include <vector>");


	std::string input_string = string(argv[1]);


	TApplication App(argv[0],&argc,argv);

	std::cout<<"Opening: "<<input_string<<std::endl;

	TauJetsSelection a(input_string);

	a.Loop(input_string);

}



