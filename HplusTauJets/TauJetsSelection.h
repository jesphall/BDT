//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Mar 23 12:58:15 2015 by ROOT version 5.34/14
// from TTree NOMINAL/NOMINAL
// found on file: ../user.griffith.5145004._000066.hist-output.root
//////////////////////////////////////////////////////////

#ifndef TauJetsSelection_h
#define TauJetsSelection_h
#include "TFileCollection.h"
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>

#include <vector>
#include <vector>
#include <vector>


#include <TLorentzVector.h>

using std::vector;

// Header file for the classes stored in the TChain if any.

// Fixed size dimensions of array or collections stored in the TChain if any.

class TauJetsSelection {
public :
	TTree          *fChain;   //!pointer to the analyzed TTree or TTree
	Int_t           fCurrent; //!current Tree number in a TTree

	TTree* acceptance;
    
    Double_t GeV = 1000.0;

	Double_t XS_Lumi_Weight;
	Int_t Bkg_Type;
    

	Double_t bjet_pt1;
	Double_t bjet_pt2;

	Double_t bjet_eta1;
	Double_t bjet_eta2;

	Double_t bjet_phi1;
	Double_t bjet_phi2;

	Double_t bjet_m1;
	Double_t bjet_m2;

	Double_t jet_bveto_pt1;
	Double_t jet_bveto_pt2;

	Double_t jet_bveto_eta1;
	Double_t jet_bveto_eta2;

	Double_t jet_bveto_phi1;
	Double_t jet_bveto_phi2;

	Double_t jet_bveto_m1;
	Double_t jet_bveto_m2;

	Double_t finalweight;

    Double_t upsilon1;
    Double_t upsilon3;

	Double_t W_pt;
	Double_t H_pt;
	Double_t top_pt;
    Double_t tau_pt;
    Double_t met_pt;
    Double_t jet1_pt;
    Double_t jet2_pt;
    Double_t bjet1_pt;
    Double_t bjet2_pt;

	Double_t W_eta;
	Double_t H_eta;
	Double_t top_eta;
    Double_t tau_eta;
    Double_t jet1_eta;
    Double_t jet2_eta;
    Double_t bjet1_eta;
    Double_t bjet2_eta;


	Double_t W_phi;
	Double_t H_phi;
	Double_t top_phi;
    Double_t tau_phi;
    Double_t jet1_phi;
    Double_t jet2_phi;
    Double_t bjet1_phi;
    Double_t bjet2_phi;
    
    Double_t W_m;
    Double_t H_m;
    Double_t top_m;
    Double_t tau_m;
    Double_t jet1_m;
    Double_t jet2_m;
    Double_t bjet1_m;
    Double_t bjet2_m;
    
    Double_t W_mT;
    Double_t H_mT;
    Double_t top_mT;
    Double_t tau_mT;
    Double_t jet1_mT;
    Double_t jet2_mT;
    Double_t bjet1_mT;
    Double_t bjet2_mT;
    
    Double_t MT_tau_met;
    
    Double_t dPhi_met_W;
    Double_t dPhi_met_H;
    Double_t dPhi_met_top;
    Double_t dPhi_met_tau;
    Double_t dPhi_met_jet1;
    Double_t dPhi_met_jet2;
    Double_t dPhi_met_bjet1;
    Double_t dPhi_met_bjet2;
    
    Double_t dPt_met_W;
    Double_t dPt_met_H;
    Double_t dPt_met_top;
    Double_t dPt_met_tau;
    Double_t dPt_met_jet1;
    Double_t dPt_met_jet2;
    Double_t dPt_met_bjet1;
    Double_t dPt_met_bjet2;
    
    Double_t dPhi_W_H;
    Double_t dPhi_W_top;
    Double_t dPhi_W_tau;
    Double_t dPhi_W_jet1;
    Double_t dPhi_W_bjet1;
    Double_t dPhi_W_jet2;
    Double_t dPhi_W_bjet2;
    Double_t dPhi_H_top;
    Double_t dPhi_H_tau;
    Double_t dPhi_H_jet1;
    Double_t dPhi_H_bjet1;
    Double_t dPhi_H_jet2;
    Double_t dPhi_H_bjet2;
    Double_t dPhi_top_tau;
    Double_t dPhi_top_jet1;
    Double_t dPhi_top_bjet1;
    Double_t dPhi_top_jet2;
    Double_t dPhi_top_bjet2;
    Double_t dPhi_tau_jet1;
    Double_t dPhi_tau_bjet1;
    Double_t dPhi_tau_jet2;
    Double_t dPhi_tau_bjet2;
    Double_t dPhi_jet1_bjet1;
    Double_t dPhi_jet1_jet2;
    Double_t dPhi_jet1_bjet2;
    Double_t dPhi_bjet1_jet2;
    Double_t dPhi_bjet1_bjet2;
    Double_t dPhi_jet2_bjet2;
    
    Double_t dPt_W_H;
    Double_t dPt_W_top;
    Double_t dPt_W_tau;
    Double_t dPt_W_jet1;
    Double_t dPt_W_bjet1;
    Double_t dPt_W_jet2;
    Double_t dPt_W_bjet2;
    Double_t dPt_H_top;
    Double_t dPt_H_tau;
    Double_t dPt_H_jet1;
    Double_t dPt_H_bjet1;
    Double_t dPt_H_jet2;
    Double_t dPt_H_bjet2;
    Double_t dPt_top_tau;
    Double_t dPt_top_jet1;
    Double_t dPt_top_bjet1;
    Double_t dPt_top_jet2;
    Double_t dPt_top_bjet2;
    Double_t dPt_tau_jet1;
    Double_t dPt_tau_bjet1;
    Double_t dPt_tau_jet2;
    Double_t dPt_tau_bjet2;
    Double_t dPt_jet1_bjet1;
    Double_t dPt_jet1_bjet1_notAbs;
    Double_t dPt_jet1_jet2;
    Double_t dPt_jet1_bjet2;
    Double_t dPt_bjet1_jet2;
    Double_t dPt_bjet1_bjet2;
    Double_t dPt_jet2_bjet2;
    
    Double_t dEta_W_H;
    Double_t dEta_W_top;
    Double_t dEta_W_tau;
    Double_t dEta_W_jet1;
    Double_t dEta_W_bjet1;
    Double_t dEta_W_jet2;
    Double_t dEta_W_bjet2;
    Double_t dEta_H_top;
    Double_t dEta_H_tau;
    Double_t dEta_H_jet1;
    Double_t dEta_H_bjet1;
    Double_t dEta_H_jet2;
    Double_t dEta_H_bjet2;
    Double_t dEta_top_tau;
    Double_t dEta_top_jet1;
    Double_t dEta_top_bjet1;
    Double_t dEta_top_jet2;
    Double_t dEta_top_bjet2;
    Double_t dEta_tau_jet1;
    Double_t dEta_tau_bjet1;
    Double_t dEta_tau_jet2;
    Double_t dEta_tau_bjet2;
    Double_t dEta_jet1_bjet1;
    Double_t dEta_jet1_jet2;
    Double_t dEta_jet1_bjet2;
    Double_t dEta_bjet1_jet2;
    Double_t dEta_bjet1_bjet2;
    Double_t dEta_jet2_bjet2;

    Double_t dR_W_H;
    Double_t dR_W_top;
    Double_t dR_W_tau;
    Double_t dR_W_jet1;
    Double_t dR_W_bjet1;
    Double_t dR_W_jet2;
    Double_t dR_W_bjet2;
    Double_t dR_H_top;
    Double_t dR_H_tau;
    Double_t dR_H_jet1;
    Double_t dR_H_bjet1;
    Double_t dR_H_jet2;
    Double_t dR_H_bjet2;
    Double_t dR_top_tau;
    Double_t dR_top_jet1;
    Double_t dR_top_bjet1;
    Double_t dR_top_jet2;
    Double_t dR_top_bjet2;
    Double_t dR_tau_jet1;
    Double_t dR_tau_bjet1;
    Double_t dR_tau_jet2;
    Double_t dR_tau_bjet2;
    Double_t dR_jet1_bjet1;
    Double_t dR_jet1_jet2;
    Double_t dR_jet1_bjet2;
    Double_t dR_bjet1_jet2;
    Double_t dR_bjet1_bjet2;
    Double_t dR_jet2_bjet2;
    
    Double_t Ang_W_H;
    Double_t Ang_W_top;
    Double_t Ang_W_tau;
    Double_t Ang_W_jet1;
    Double_t Ang_W_bjet1;
    Double_t Ang_W_jet2;
    Double_t Ang_W_bjet2;
    Double_t Ang_H_top;
    Double_t Ang_H_tau;
    Double_t Ang_H_jet1;
    Double_t Ang_H_bjet1;
    Double_t Ang_H_jet2;
    Double_t Ang_H_bjet2;
    Double_t Ang_top_tau;
    Double_t Ang_top_jet1;
    Double_t Ang_top_bjet1;
    Double_t Ang_top_jet2;
    Double_t Ang_top_bjet2;
    Double_t Ang_tau_jet1;
    Double_t Ang_tau_bjet1;
    Double_t Ang_tau_jet2;
    Double_t Ang_tau_bjet2;
    Double_t Ang_jet1_bjet1;
    Double_t Ang_jet1_jet2;
    Double_t Ang_jet1_bjet2;
    Double_t Ang_bjet1_jet2;
    Double_t Ang_bjet1_bjet2;
    Double_t Ang_jet2_bjet2;
    
    Double_t sumPt_jet1_jet2;
    Int_t n_btags;
    
    Double_t EtaEta_tau_jet1;
    Double_t EtaEta_tau_jet2;
    Double_t EtaEta_tau_bjet1;
    Double_t EtaEta_jet1_jet2;
    Double_t EtaEta_jet1_bjet1;
    Double_t EtaEta_jet2_bjet1;
    
    Double_t sumPt;
    
    

	Int_t           event_number;
	Int_t           run_number;
	Int_t           lb_number;
	Int_t           random_run_number;
	Int_t           random_lb_number;
	Double_t        weight_mc;
	Double_t        weight_pileup;
	Double_t        weight_total;
	Int_t           n_muons;
	Int_t           n_electrons;
	Int_t           n_photons;
	Int_t           n_taus;
	Int_t           n_taus_loose;
	Int_t           n_taus_medium;
	Int_t           n_taus_tight;
	Int_t           n_jets;
	Int_t           n_bjets;
	Int_t           n_vx;
	Int_t           n_pvx;
	Double_t        n_actual_int;
	Double_t        n_avg_int;
	Double_t        bjets_sf;
	Double_t        bjets_ineff_sf;
	Double_t        n_avg_int_cor;
	Int_t           HLT_e26_lhtight_iloose;
	Int_t           HLT_e60_lhmedium;
	Int_t           HLT_e24_lhmedium_iloose_L1EM18VH;
	Int_t           HLT_e24_lhmedium_iloose_L1EM20VH;
	Int_t           HLT_e24_lhtight_iloose;
	Int_t           HLT_e26_lhtig;
	Int_t           HLT_tau35_medium1_tracktwo;
	Int_t           HLT_tau35_medium1_tracktwo_xe70_L1XE45;
	Int_t           HLT_tau35_medium1_tracktwo_L1TAU20_xe70_L1XE45;
	Int_t           HLT_tau25_medium1_tracktwo;
	Int_t           HLT_tau80_medium1_tracktwo;
	Int_t           HLT_tau125_medium1_tracktwo;
	Int_t           HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo;
	Int_t           HLT_e17_lhmedium_tau25_medium1_tracktwo;
	Int_t           HLT_mu14_tau25_medium1_tracktwo;
	Int_t           L1_TAU12IM;
	Int_t           L1_TAU20IM;
	Int_t           L1_TAU40;
	Int_t           L1_TAU60;
	Int_t           L1_TAU20IM_2J20_XE45;
	Int_t           L1_TAU20_2J20_XE45;
	Int_t           HLT_j55;
	Int_t           HLT_j30_xe10_razor170;
	Int_t           HLT_mu26_imedium;
	Int_t           HLT_mu50;
	Int_t           HLT_mu20_iloose_L1MU15;
	Int_t           HLT_mu24_iloose_L1MU15;
	Int_t           HLT_mu24_imedium;
	Int_t           HLT_xe100;
	Int_t           HLT_xe80;
	Int_t           HLT_xe70;
	Int_t           L1_XE70;
	Int_t           L1_XE60;
	Int_t           L1_XE50;
	Int_t           jet_0;
	Double_t        jet_0_eta;
	Double_t        jet_0_phi;
	Double_t        jet_0_pt;
	Double_t        jet_0_et;
	Double_t        jet_0_m;
	Double_t        jet_0_q;
	Double_t        jet_0_jvf;
	Double_t        jet_0_jvfloose;
	Double_t        jet_0_jvt;
	Double_t        jet_0_mvx;
	Int_t           jet_0_mvx_tagged;
	Double_t        jet_0_mvx_sf;
	Double_t        jet_0_mvx_ineff_sf;
	Int_t           jet_0_flavorlabel;
	Double_t        jet_0_mv2c00;
	Double_t        jet_0_mv2c100;
	Double_t        jet_0_mv2c10;
	Double_t        jet_0_mv2c20;
	Int_t           jet_1;
	Double_t        jet_1_eta;
	Double_t        jet_1_phi;
	Double_t        jet_1_pt;
	Double_t        jet_1_et;
	Double_t        jet_1_m;
	Double_t        jet_1_q;
	Double_t        jet_1_jvf;
	Double_t        jet_1_jvfloose;
	Double_t        jet_1_jvt;
	Double_t        jet_1_mvx;
	Int_t           jet_1_mvx_tagged;
	Double_t        jet_1_mvx_sf;
	Double_t        jet_1_mvx_ineff_sf;
	Int_t           jet_1_flavorlabel;
	Double_t        jet_1_mv2c00;
	Double_t        jet_1_mv2c100;
	Double_t        jet_1_mv2c10;
	Double_t        jet_1_mv2c20;
	Int_t           jet_2;
	Double_t        jet_2_eta;
	Double_t        jet_2_phi;
	Double_t        jet_2_pt;
	Double_t        jet_2_et;
	Double_t        jet_2_m;
	Double_t        jet_2_q;
	Double_t        jet_2_jvf;
	Double_t        jet_2_jvfloose;
	Double_t        jet_2_jvt;
	Double_t        jet_2_mvx;
	Int_t           jet_2_mvx_tagged;
	Double_t        jet_2_mvx_sf;
	Double_t        jet_2_mvx_ineff_sf;
	Int_t           jet_2_flavorlabel;
	Double_t        jet_2_mv2c00;
	Double_t        jet_2_mv2c100;
	Double_t        jet_2_mv2c10;
	Double_t        jet_2_mv2c20;
	Int_t           jet_3;
	Double_t        jet_3_eta;
	Double_t        jet_3_phi;
	Double_t        jet_3_pt;
	Double_t        jet_3_et;
	Double_t        jet_3_m;
	Double_t        jet_3_q;
	Double_t        jet_3_jvf;
	Double_t        jet_3_jvfloose;
	Double_t        jet_3_jvt;
	Double_t        jet_3_mvx;
	Int_t           jet_3_mvx_tagged;
	Double_t        jet_3_mvx_sf;
	Double_t        jet_3_mvx_ineff_sf;
	Int_t           jet_3_flavorlabel;
	Double_t        jet_3_mv2c00;
	Double_t        jet_3_mv2c100;
	Double_t        jet_3_mv2c10;
	Double_t        jet_3_mv2c20;
	Int_t           tau_0;
	Double_t        tau_0_eta;
	Double_t        tau_0_phi;
	Double_t        tau_0_pt;
	Double_t        tau_0_et;
	Double_t        tau_0_m;
	Double_t        tau_0_q;
	UInt_t          tau_0_n_tracks;
	UInt_t          tau_0_n_wide_tracks;
	UInt_t          tau_0_jet_bdt_loose;
	UInt_t          tau_0_jet_bdt_medium;
	UInt_t          tau_0_jet_bdt_tight;
	Double_t        tau_0_jet_bdt_score;
	Double_t        tau_0_jet_id_loose_sf;
	Double_t        tau_0_jet_id_medium_sf;
	Double_t        tau_0_jet_id_tight_sf;
	Double_t        tau_0_jet_bdt_eff_sf=1;
	Double_t        tau_0_reco_sf;
	Double_t        tau_0_eleolr_loose_sf;
	Double_t        tau_0_jet_id_selection_sf;
	UInt_t          tau_0_ele_bdt_loose;
	UInt_t          tau_0_ele_bdt_medium;
	UInt_t          tau_0_ele_bdt_tight;
	Double_t        tau_0_ele_bdt_score;
	Double_t        tau_0_ele_bdt_eff_sf;
	Double_t        tau_0_ele_match_lhscore;
	UInt_t          tau_0_decay_mode;
	Double_t        tau_0_leadTrk_pt;
	Double_t        tau_0_bjet_weight;
	Double_t        tau_0_jet_truth_label;
	Int_t           tau_0_match_pdgId;
	Int_t           tau_0_match_isHad;
	Int_t           tau_1;
	Double_t        tau_1_eta;
	Double_t        tau_1_phi;
	Double_t        tau_1_pt;
	Double_t        tau_1_et;
	Double_t        tau_1_m;
	Double_t        tau_1_q;
	UInt_t          tau_1_n_tracks;
	UInt_t          tau_1_n_wide_tracks;
	UInt_t          tau_1_jet_bdt_loose;
	UInt_t          tau_1_jet_bdt_medium;
	UInt_t          tau_1_jet_bdt_tight;
	Double_t        tau_1_jet_bdt_score;
	Double_t        tau_1_jet_id_loose_sf;
	Double_t        tau_1_jet_id_medium_sf;
	Double_t        tau_1_jet_id_tight_sf;
	Double_t        tau_1_reco_sf;
	Double_t        tau_1_eleolr_loose_sf;
	Double_t        tau_1_jet_id_selection_sf;
	UInt_t          tau_1_ele_bdt_loose;
	UInt_t          tau_1_ele_bdt_medium;
	UInt_t          tau_1_ele_bdt_tight;
	Double_t        tau_1_ele_bdt_score;
	Double_t        tau_1_ele_bdt_eff_sf;
	Double_t        tau_1_ele_match_lhscore;
	UInt_t          tau_1_decay_mode;
	Double_t        tau_1_leadTrk_pt;
	Int_t           el_0;
	Double_t        el_0_eta;
	Double_t        el_0_phi;
	Double_t        el_0_pt;
	Double_t        el_0_et;
	Double_t        el_0_m;
	Double_t        el_0_q;
	Double_t        el_0_trk_d0;
	Double_t        el_0_trk_d0_sig;
	Double_t        el_0_trk_z0;
	Double_t        el_0_trk_z0_sintheta;
	Double_t        el_0_trk_z0_sig;
	Double_t        el_0_trk_pvx_z0;
	Double_t        el_0_trk_pvx_z0_sintheta;
	Double_t        el_0_trk_pvx_z0_sig;
	Double_t        el_0_trk_pt_error;
	Int_t           el_0_iso_wp;
	Double_t        el_0_iso_etcone20;
	Double_t        el_0_iso_etcone30;
	Double_t        el_0_iso_etcone40;
	Double_t        el_0_iso_topoetcone20;
	Double_t        el_0_iso_topoetcone30;
	Double_t        el_0_iso_topoetcone40;
	Double_t        el_0_iso_ptcone20;
	Double_t        el_0_iso_ptcone30;
	Double_t        el_0_iso_ptcone40;
	Int_t           el_0_id_veryloose;
	Int_t           el_0_id_loose;
	Int_t           el_0_id_medium;
	Int_t           el_0_id_tight;
	Int_t           el_0_id_bad;
	Double_t        el_0_id_eff_sf_loose;
	Double_t        el_0_id_eff_sf_medium;
	Double_t        el_0_id_eff_sf_tight;
	Double_t        el_0_iso_eff_sf_tight;
	Double_t        el_0_reco_eff_sf;
	Double_t        el_0_trig_eff_sf_loose;
	Double_t        el_0_trig_eff_sf_medium;
	Double_t        el_0_trig_eff_sf_tight;
	Double_t        el_0_reco_eff_sf_loose;
	Double_t        el_0_reco_eff_sf_medium;
	Double_t        el_0_reco_eff_sf_tight;
	Int_t           el_0_muonType;
	Int_t           mu_0;
	Double_t        mu_0_eta;
	Double_t        mu_0_phi;
	Double_t        mu_0_pt;
	Double_t        mu_0_et;
	Double_t        mu_0_m;
	Double_t        mu_0_q;
	Double_t        mu_0_trk_d0;
	Double_t        mu_0_trk_d0_sig;
	Double_t        mu_0_trk_z0;
	Double_t        mu_0_trk_z0_sintheta;
	Double_t        mu_0_trk_z0_sig;
	Double_t        mu_0_trk_pvx_z0;
	Double_t        mu_0_trk_pvx_z0_sintheta;
	Double_t        mu_0_trk_pvx_z0_sig;
	Double_t        mu_0_trk_pt_error;
	Int_t           mu_0_iso_wp;
	Double_t        mu_0_iso_etcone20;
	Double_t        mu_0_iso_etcone30;
	Double_t        mu_0_iso_etcone40;
	Double_t        mu_0_iso_topoetcone20;
	Double_t        mu_0_iso_topoetcone30;
	Double_t        mu_0_iso_topoetcone40;
	Double_t        mu_0_iso_ptcone20;
	Double_t        mu_0_iso_ptcone30;
	Double_t        mu_0_iso_ptcone40;
	Int_t           mu_0_id_veryloose;
	Int_t           mu_0_id_loose;
	Int_t           mu_0_id_medium;
	Int_t           mu_0_id_tight;
	Int_t           mu_0_id_bad;
	Double_t        mu_0_id_eff_sf_loose;
	Double_t        mu_0_id_eff_sf_medium;
	Double_t        mu_0_id_eff_sf_tight;
	Double_t        mu_0_iso_eff_sf_tight;
	Double_t        mu_0_reco_eff_sf;
	Double_t        mu_0_trig_eff_sf_loose;
	Double_t        mu_0_trig_eff_sf_medium;
	Double_t        mu_0_trig_eff_sf_tight;
	Double_t        mu_0_reco_eff_sf_loose;
	Double_t        mu_0_reco_eff_sf_medium;
	Double_t        mu_0_reco_eff_sf_tight;
	Int_t           mu_0_muonType;
	Double_t        met_et;
	Double_t        met_etx;
	Double_t        met_ety;
	Double_t        met_phi;
	Double_t        met_sumet;
	Double_t        met_sig;
	Double_t        met_sig_tracks;
	UInt_t          mu_0_trig_HLT_mu26_imedium;
	UInt_t          mu_0_trig_HLT_mu50;
	UInt_t          mu_0_trig_HLT_mu20_iloose_L1MU15;
	UInt_t          mu_0_trig_HLT_mu24_iloose_L1MU15;
	UInt_t          mu_0_trig_HLT_mu24_imedium;
	UInt_t          tau_0_trig_HLT_tau35_medium1_tracktwo;
	UInt_t          tau_0_trig_HLT_tau35_medium1_tracktwo_xe70_L1XE45;
	UInt_t          tau_0_trig_HLT_tau35_medium1_tracktwo_L1TAU20_xe70_L1XE45;
	UInt_t          tau_0_trig_HLT_tau25_medium1_tracktwo;
	UInt_t          tau_0_trig_HLT_tau80_medium1_tracktwo;
	UInt_t          tau_0_trig_HLT_tau125_medium1_tracktwo;
	UInt_t          tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo;
	UInt_t          tau_0_trig_HLT_e17_lhmedium_tau25_medium1_tracktwo;
	UInt_t          tau_0_trig_HLT_mu14_tau25_medium1_tracktwo;
	UInt_t          tau_0_trig_L1_TAU12IM;
	UInt_t          tau_0_trig_L1_TAU20IM;
	UInt_t          tau_0_trig_L1_TAU40;
	UInt_t          tau_0_trig_L1_TAU60;
	UInt_t          tau_0_trig_L1_TAU20IM_2J20_XE45;
	UInt_t          tau_0_trig_L1_TAU20_2J20_XE45;
	Double_t        tau_0_met_mt;
	Double_t        tau_0_met_mt2;
	Double_t        tau_0_met_dphi;
	Double_t        true_parent_pt;
	Double_t        true_parent_eta;
	Double_t        true_parent_phi;
	Double_t        true_parent_m;
	Double_t        tau_0_HLT_pt;
	Double_t        tau_0_HLT_eta;
	Double_t        tau_0_HLT_phi;
	Double_t        tau_0_HLT_m;
	Double_t        tau_0_L1_pt;
	Double_t        tau_0_L1_eta;
	Double_t        tau_0_L1_phi;
	Double_t        tau_0_L1_jet_pt;
	Double_t        tau_0_L1_jet_eta;
	Double_t        tau_0_L1_jet_phi;
	Double_t        jet_0_L1_pt;
	Double_t        jet_0_L1_eta;
	Double_t        jet_0_L1_phi;
	Double_t        jet_1_L1_pt;
	Double_t        jet_1_L1_eta;
	Double_t        jet_1_L1_phi;
	Double_t        met_HLT_et;
	Double_t        met_L1_et;
	Int_t           L1_2J20;
	Int_t           bsm_tj_dirty_jet;
	Double_t        bsm_tj_mjjb;
	Int_t           bsm_tj_n_bjets;
	Int_t           truth_leptonic_top0;
	Int_t           truth_leptonic_top1;
	Int_t           truth_leptonic_top0_had_tau;
	Int_t           truth_leptonic_top1_had_tau;
	Int_t           truth_hadronic_top0;
	Int_t           truth_hadronic_top1;
	Int_t           truth_charged_higgs;
	Int_t           truth_charged_higgs_tau;
	Int_t           truth_charged_higgs_tau_had;
	Int_t           tau_0_is_had_tau_home;
	Int_t           tau_0_is_had_tau_home_pdgId;
	Int_t           tau_0_is_had_tau_home_mother_pdgId;
	Int_t           tau_0_is_had_tau_home_nPi;
	Int_t           tau_0_is_had_tau_home_nPi0;
	Float_t         tau_0_sf_NOMINAL_TAU_EFF_SELECTION;
	Float_t         tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TAU_EFF_SELECTION;
	Float_t         tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TAU_EFF_SELECTION;
	Float_t         tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TAU_EFF_SELECTION;
	Float_t         tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TAU_EFF_SELECTION;
	Float_t         tau_0_sf_NOMINAL_TAU_EFF_RECO=1;
	Float_t         tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TAU_EFF_RECO;
	Float_t         tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TAU_EFF_RECO;
	Float_t         tau_0_sf_NOMINAL_TAU_EFF_ELEOLR=1;
	Float_t         tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TAU_EFF_ELEOLR;
	Float_t         tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TAU_EFF_ELEOLR;
	Float_t         tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTLOOSE;
	Float_t         tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTMEDIUM=1;
	Float_t         tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTTIGHT;
	Float_t         tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTLOOSE;
	Float_t         tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTMEDIUM;
	Float_t         tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTTIGHT;
	Float_t         tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTLOOSE;
	Float_t         tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTMEDIUM;
	Float_t         tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTTIGHT;
	Float_t         tau_0_ff_medium_05;
	Float_t         tau_0_ff_up;
	Float_t         tau_0_ff_down;
	Float_t         tau_0_ff_llh_v1_sf;
	Float_t         tau_0_ff_llh_v2_sf;
	Float_t         bjet_sf_MVX_NOMINAL_sf=1;
	Float_t         bjet_sf_MVX_NOMINAL_ineff_sf=1;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_0_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_0_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_0_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_0_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_1_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_1_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_1_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_1_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_2_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_2_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_2_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_2_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_3_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_3_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_3_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_3_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_4_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_4_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_4_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_4_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_5_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_5_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_5_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_B_5_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_0_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_0_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_0_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_0_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_1_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_1_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_1_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_1_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_2_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_2_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_2_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_2_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_3_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_3_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_3_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_C_3_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_0_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_0_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_0_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_0_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_1_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_1_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_1_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_1_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_10_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_10_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_10_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_10_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_11_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_11_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_11_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_11_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_2_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_2_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_2_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_2_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_3_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_3_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_3_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_3_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_4_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_4_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_4_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_4_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_5_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_5_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_5_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_5_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_6_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_6_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_6_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_6_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_7_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_7_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_7_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_7_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_8_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_8_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_8_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_8_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_9_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_9_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_9_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_Eigen_Light_9_1up_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_extrapolation_1down_sf;
	Float_t         bjet_sf_MVX_FT_EFF_extrapolation_1down_ineff_sf;
	Float_t         bjet_sf_MVX_FT_EFF_extrapolation_1up_sf;
	Float_t         bjet_sf_MVX_FT_EFF_extrapolation_1up_ineff_sf;
	// List of branches
	TBranch        *b_event_number;   //!
	TBranch        *b_run_number;   //!
	TBranch        *b_lb_number;   //!
	TBranch        *b_random_run_number;   //!
	TBranch        *b_random_lb_number;   //!
	TBranch        *b_weight_mc;   //!
	TBranch        *b_weight_pileup;   //!
	TBranch        *b_weight_total;   //!
	TBranch        *b_n_muons;   //!
	TBranch        *b_n_electrons;   //!
	TBranch        *b_n_photons;   //!
	TBranch        *b_n_taus;   //!
	TBranch        *b_n_taus_loose;   //!
	TBranch        *b_n_taus_medium;   //!
	TBranch        *b_n_taus_tight;   //!
	TBranch        *b_n_jets;   //!
	TBranch        *b_n_bjets;   //!
	TBranch        *b_n_vx;   //!
	TBranch        *b_n_pvx;   //!
	TBranch        *b_n_actual_int;   //!
	TBranch        *b_n_avg_int;   //!
	TBranch        *b_bjets_sf;   //!
	TBranch        *b_bjets_ineff_sf;   //!
	TBranch        *b_n_avg_int_cor;   //!
	TBranch        *b_HLT_e26_lhtight_iloose;   //!
	TBranch        *b_HLT_e60_lhmedium;   //!
	TBranch        *b_HLT_e24_lhmedium_iloose_L1EM18VH;   //!
	TBranch        *b_HLT_e24_lhmedium_iloose_L1EM20VH;   //!
	TBranch        *b_HLT_e24_lhtight_iloose;   //!
	TBranch        *b_HLT_e26_lhtig;   //!
	TBranch        *b_HLT_tau35_medium1_tracktwo;   //!
	TBranch        *b_HLT_tau35_medium1_tracktwo_xe70_L1XE45;   //!
	TBranch        *b_HLT_tau35_medium1_tracktwo_L1TAU20_xe70_L1XE45;   //!
	TBranch        *b_HLT_tau25_medium1_tracktwo;   //!
	TBranch        *b_HLT_tau80_medium1_tracktwo;   //!
	TBranch        *b_HLT_tau125_medium1_tracktwo;   //!
	TBranch        *b_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo;   //!
	TBranch        *b_HLT_e17_lhmedium_tau25_medium1_tracktwo;   //!
	TBranch        *b_HLT_mu14_tau25_medium1_tracktwo;   //!
	TBranch        *b_L1_TAU12IM;   //!
	TBranch        *b_L1_TAU20IM;   //!
	TBranch        *b_L1_TAU40;   //!
	TBranch        *b_L1_TAU60;   //!
	TBranch        *b_L1_TAU20IM_2J20_XE45;   //!
	TBranch        *b_L1_TAU20_2J20_XE45;   //!
	TBranch        *b_HLT_j55;   //!
	TBranch        *b_HLT_j30_xe10_razor170;   //!
	TBranch        *b_HLT_mu26_imedium;   //!
	TBranch        *b_HLT_mu50;   //!
	TBranch        *b_HLT_mu20_iloose_L1MU15;   //!
	TBranch        *b_HLT_mu24_iloose_L1MU15;   //!
	TBranch        *b_HLT_mu24_imedium;   //!
	TBranch        *b_HLT_xe100;   //!
	TBranch        *b_HLT_xe80;   //!
	TBranch        *b_HLT_xe70;   //!
	TBranch        *b_L1_XE70;   //!
	TBranch        *b_L1_XE60;   //!
	TBranch        *b_L1_XE50;   //!
	TBranch        *b_jet_0;   //!
	TBranch        *b_jet_0_eta;   //!
	TBranch        *b_jet_0_phi;   //!
	TBranch        *b_jet_0_pt;   //!
	TBranch        *b_jet_0_et;   //!
	TBranch        *b_jet_0_m;   //!
	TBranch        *b_jet_0_q;   //!
	TBranch        *b_jet_0_jvf;   //!
	TBranch        *b_jet_0_jvfloose;   //!
	TBranch        *b_jet_0_jvt;   //!
	TBranch        *b_jet_0_mvx;   //!
	TBranch        *b_jet_0_mvx_tagged;   //!
	TBranch        *b_jet_0_mvx_sf;   //!
	TBranch        *b_jet_0_mvx_ineff_sf;   //!
	TBranch        *b_jet_0_flavorlabel;   //!
	TBranch        *b_jet_0_mv2c00;   //!
	TBranch        *b_jet_0_mv2c100;   //!
	TBranch        *b_jet_0_mv2c10;   //!
	TBranch        *b_jet_0_mv2c20;   //!
	TBranch        *b_jet_1;   //!
	TBranch        *b_jet_1_eta;   //!
	TBranch        *b_jet_1_phi;   //!
	TBranch        *b_jet_1_pt;   //!
	TBranch        *b_jet_1_et;   //!
	TBranch        *b_jet_1_m;   //!
	TBranch        *b_jet_1_q;   //!
	TBranch        *b_jet_1_jvf;   //!
	TBranch        *b_jet_1_jvfloose;   //!
	TBranch        *b_jet_1_jvt;   //!
	TBranch        *b_jet_1_mvx;   //!
	TBranch        *b_jet_1_mvx_tagged;   //!
	TBranch        *b_jet_1_mvx_sf;   //!
	TBranch        *b_jet_1_mvx_ineff_sf;   //!
	TBranch        *b_jet_1_flavorlabel;   //!
	TBranch        *b_jet_1_mv2c00;   //!
	TBranch        *b_jet_1_mv2c100;   //!
	TBranch        *b_jet_1_mv2c10;   //!
	TBranch        *b_jet_1_mv2c20;   //!
	TBranch        *b_jet_2;   //!
	TBranch        *b_jet_2_eta;   //!
	TBranch        *b_jet_2_phi;   //!
	TBranch        *b_jet_2_pt;   //!
	TBranch        *b_jet_2_et;   //!
	TBranch        *b_jet_2_m;   //!
	TBranch        *b_jet_2_q;   //!
	TBranch        *b_jet_2_jvf;   //!
	TBranch        *b_jet_2_jvfloose;   //!
	TBranch        *b_jet_2_jvt;   //!
	TBranch        *b_jet_2_mvx;   //!
	TBranch        *b_jet_2_mvx_tagged;   //!
	TBranch        *b_jet_2_mvx_sf;   //!
	TBranch        *b_jet_2_mvx_ineff_sf;   //!
	TBranch        *b_jet_2_flavorlabel;   //!
	TBranch        *b_jet_2_mv2c00;   //!
	TBranch        *b_jet_2_mv2c100;   //!
	TBranch        *b_jet_2_mv2c10;   //!
	TBranch        *b_jet_2_mv2c20;   //!
	TBranch        *b_jet_3;   //!
	TBranch        *b_jet_3_eta;   //!
	TBranch        *b_jet_3_phi;   //!
	TBranch        *b_jet_3_pt;   //!
	TBranch        *b_jet_3_et;   //!
	TBranch        *b_jet_3_m;   //!
	TBranch        *b_jet_3_q;   //!
	TBranch        *b_jet_3_jvf;   //!
	TBranch        *b_jet_3_jvfloose;   //!
	TBranch        *b_jet_3_jvt;   //!
	TBranch        *b_jet_3_mvx;   //!
	TBranch        *b_jet_3_mvx_tagged;   //!
	TBranch        *b_jet_3_mvx_sf;   //!
	TBranch        *b_jet_3_mvx_ineff_sf;   //!
	TBranch        *b_jet_3_flavorlabel;   //!
	TBranch        *b_jet_3_mv2c00;   //!
	TBranch        *b_jet_3_mv2c100;   //!
	TBranch        *b_jet_3_mv2c10;   //!
	TBranch        *b_jet_3_mv2c20;   //!
	TBranch        *b_tau_0;   //!
	TBranch        *b_tau_0_eta;   //!
	TBranch        *b_tau_0_phi;   //!
	TBranch        *b_tau_0_pt;   //!
	TBranch        *b_tau_0_et;   //!
	TBranch        *b_tau_0_m;   //!
	TBranch        *b_tau_0_q;   //!
	TBranch        *b_tau_0_n_tracks;   //!
	TBranch        *b_tau_0_n_wide_tracks;   //!
	TBranch        *b_tau_0_jet_bdt_loose;   //!
	TBranch        *b_tau_0_jet_bdt_medium;   //!
	TBranch        *b_tau_0_jet_bdt_tight;   //!
	TBranch        *b_tau_0_jet_bdt_score;   //!
	TBranch        *b_tau_0_jet_id_loose_sf;   //!
	TBranch        *b_tau_0_jet_id_medium_sf;   //!
	TBranch        *b_tau_0_jet_id_tight_sf;   //!
	TBranch        *b_tau_0_jet_bdt_eff_sf;   //!

	TBranch        *b_tau_0_reco_sf;   //!
	TBranch        *b_tau_0_eleolr_loose_sf;   //!
	TBranch        *b_tau_0_jet_id_selection_sf;   //!
	TBranch        *b_tau_0_ele_bdt_loose;   //!
	TBranch        *b_tau_0_ele_bdt_medium;   //!
	TBranch        *b_tau_0_ele_bdt_tight;   //!
	TBranch        *b_tau_0_ele_bdt_score;   //!
	TBranch        *b_tau_0_ele_bdt_eff_sf;   //!
	TBranch        *b_tau_0_ele_match_lhscore;   //!
	TBranch        *b_tau_0_decay_mode;   //!
	TBranch        *b_tau_0_leadTrk_pt;   //!
	TBranch        *b_tau_0_bjet_weight;   //!
	TBranch        *b_tau_0_jet_truth_label;   //!
	TBranch        *b_tau_0_match_pdgId;   //!
	TBranch        *b_tau_0_match_isHad;   //!
	TBranch        *b_tau_1;   //!
	TBranch        *b_tau_1_eta;   //!
	TBranch        *b_tau_1_phi;   //!
	TBranch        *b_tau_1_pt;   //!
	TBranch        *b_tau_1_et;   //!
	TBranch        *b_tau_1_m;   //!
	TBranch        *b_tau_1_q;   //!
	TBranch        *b_tau_1_n_tracks;   //!
	TBranch        *b_tau_1_n_wide_tracks;   //!
	TBranch        *b_tau_1_jet_bdt_loose;   //!
	TBranch        *b_tau_1_jet_bdt_medium;   //!
	TBranch        *b_tau_1_jet_bdt_tight;   //!
	TBranch        *b_tau_1_jet_bdt_score;   //!
	TBranch        *b_tau_1_jet_id_loose_sf;   //!
	TBranch        *b_tau_1_jet_id_medium_sf;   //!
	TBranch        *b_tau_1_jet_id_tight_sf;   //!
	TBranch        *b_tau_1_reco_sf;   //!
	TBranch        *b_tau_1_eleolr_loose_sf;   //!
	TBranch        *b_tau_1_jet_id_selection_sf;   //!
	TBranch        *b_tau_1_ele_bdt_loose;   //!
	TBranch        *b_tau_1_ele_bdt_medium;   //!
	TBranch        *b_tau_1_ele_bdt_tight;   //!
	TBranch        *b_tau_1_ele_bdt_score;   //!
	TBranch        *b_tau_1_ele_bdt_eff_sf;   //!
	TBranch        *b_tau_1_ele_match_lhscore;   //!
	TBranch        *b_tau_1_decay_mode;   //!
	TBranch        *b_tau_1_leadTrk_pt;   //!
	TBranch        *b_el_0;   //!
	TBranch        *b_el_0_eta;   //!
	TBranch        *b_el_0_phi;   //!
	TBranch        *b_el_0_pt;   //!
	TBranch        *b_el_0_et;   //!
	TBranch        *b_el_0_m;   //!
	TBranch        *b_el_0_q;   //!
	TBranch        *b_el_0_trk_d0;   //!
	TBranch        *b_el_0_trk_d0_sig;   //!
	TBranch        *b_el_0_trk_z0;   //!
	TBranch        *b_el_0_trk_z0_sintheta;   //!
	TBranch        *b_el_0_trk_z0_sig;   //!
	TBranch        *b_el_0_trk_pvx_z0;   //!
	TBranch        *b_el_0_trk_pvx_z0_sintheta;   //!
	TBranch        *b_el_0_trk_pvx_z0_sig;   //!
	TBranch        *b_el_0_trk_pt_error;   //!
	TBranch        *b_el_0_iso_wp;   //!
	TBranch        *b_el_0_iso_etcone20;   //!
	TBranch        *b_el_0_iso_etcone30;   //!
	TBranch        *b_el_0_iso_etcone40;   //!
	TBranch        *b_el_0_iso_topoetcone20;   //!
	TBranch        *b_el_0_iso_topoetcone30;   //!
	TBranch        *b_el_0_iso_topoetcone40;   //!
	TBranch        *b_el_0_iso_ptcone20;   //!
	TBranch        *b_el_0_iso_ptcone30;   //!
	TBranch        *b_el_0_iso_ptcone40;   //!
	TBranch        *b_el_0_id_veryloose;   //!
	TBranch        *b_el_0_id_loose;   //!
	TBranch        *b_el_0_id_medium;   //!
	TBranch        *b_el_0_id_tight;   //!
	TBranch        *b_el_0_id_bad;   //!
	TBranch        *b_el_0_id_eff_sf_loose;   //!
	TBranch        *b_el_0_id_eff_sf_medium;   //!
	TBranch        *b_el_0_id_eff_sf_tight;   //!
	TBranch        *b_el_0_iso_eff_sf_tight;   //!
	TBranch        *b_el_0_reco_eff_sf;   //!
	TBranch        *b_el_0_trig_eff_sf_loose;   //!
	TBranch        *b_el_0_trig_eff_sf_medium;   //!
	TBranch        *b_el_0_trig_eff_sf_tight;   //!
	TBranch        *b_el_0_reco_eff_sf_loose;   //!
	TBranch        *b_el_0_reco_eff_sf_medium;   //!
	TBranch        *b_el_0_reco_eff_sf_tight;   //!
	TBranch        *b_el_0_muonType;   //!
	TBranch        *b_mu_0;   //!
	TBranch        *b_mu_0_eta;   //!
	TBranch        *b_mu_0_phi;   //!
	TBranch        *b_mu_0_pt;   //!
	TBranch        *b_mu_0_et;   //!
	TBranch        *b_mu_0_m;   //!
	TBranch        *b_mu_0_q;   //!
	TBranch        *b_mu_0_trk_d0;   //!
	TBranch        *b_mu_0_trk_d0_sig;   //!
	TBranch        *b_mu_0_trk_z0;   //!
	TBranch        *b_mu_0_trk_z0_sintheta;   //!
	TBranch        *b_mu_0_trk_z0_sig;   //!
	TBranch        *b_mu_0_trk_pvx_z0;   //!
	TBranch        *b_mu_0_trk_pvx_z0_sintheta;   //!
	TBranch        *b_mu_0_trk_pvx_z0_sig;   //!
	TBranch        *b_mu_0_trk_pt_error;   //!
	TBranch        *b_mu_0_iso_wp;   //!
	TBranch        *b_mu_0_iso_etcone20;   //!
	TBranch        *b_mu_0_iso_etcone30;   //!
	TBranch        *b_mu_0_iso_etcone40;   //!
	TBranch        *b_mu_0_iso_topoetcone20;   //!
	TBranch        *b_mu_0_iso_topoetcone30;   //!
	TBranch        *b_mu_0_iso_topoetcone40;   //!
	TBranch        *b_mu_0_iso_ptcone20;   //!
	TBranch        *b_mu_0_iso_ptcone30;   //!
	TBranch        *b_mu_0_iso_ptcone40;   //!
	TBranch        *b_mu_0_id_veryloose;   //!
	TBranch        *b_mu_0_id_loose;   //!
	TBranch        *b_mu_0_id_medium;   //!
	TBranch        *b_mu_0_id_tight;   //!
	TBranch        *b_mu_0_id_bad;   //!
	TBranch        *b_mu_0_id_eff_sf_loose;   //!
	TBranch        *b_mu_0_id_eff_sf_medium;   //!
	TBranch        *b_mu_0_id_eff_sf_tight;   //!
	TBranch        *b_mu_0_iso_eff_sf_tight;   //!
	TBranch        *b_mu_0_reco_eff_sf;   //!
	TBranch        *b_mu_0_trig_eff_sf_loose;   //!
	TBranch        *b_mu_0_trig_eff_sf_medium;   //!
	TBranch        *b_mu_0_trig_eff_sf_tight;   //!
	TBranch        *b_mu_0_reco_eff_sf_loose;   //!
	TBranch        *b_mu_0_reco_eff_sf_medium;   //!
	TBranch        *b_mu_0_reco_eff_sf_tight;   //!
	TBranch        *b_mu_0_muonType;   //!
	TBranch        *b_met_et;   //!
	TBranch        *b_met_etx;   //!
	TBranch        *b_met_ety;   //!
	TBranch        *b_met_phi;   //!
	TBranch        *b_met_sumet;   //!
	TBranch        *b_met_sig;   //!
	TBranch        *b_met_sig_tracks;   //!
	TBranch        *b_mu_0_trig_HLT_mu26_imedium;   //!
	TBranch        *b_mu_0_trig_HLT_mu50;   //!
	TBranch        *b_mu_0_trig_HLT_mu20_iloose_L1MU15;   //!
	TBranch        *b_mu_0_trig_HLT_mu24_iloose_L1MU15;   //!
	TBranch        *b_mu_0_trig_HLT_mu24_imedium;   //!
	TBranch        *b_tau_0_trig_HLT_tau35_medium1_tracktwo;   //!
	TBranch        *b_tau_0_trig_HLT_tau35_medium1_tracktwo_xe70_L1XE45;   //!
	TBranch        *b_tau_0_trig_HLT_tau35_medium1_tracktwo_L1TAU20_xe70_L1XE45;   //!
	TBranch        *b_tau_0_trig_HLT_tau25_medium1_tracktwo;   //!
	TBranch        *b_tau_0_trig_HLT_tau80_medium1_tracktwo;   //!
	TBranch        *b_tau_0_trig_HLT_tau125_medium1_tracktwo;   //!
	TBranch        *b_tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo;   //!
	TBranch        *b_tau_0_trig_HLT_e17_lhmedium_tau25_medium1_tracktwo;   //!
	TBranch        *b_tau_0_trig_HLT_mu14_tau25_medium1_tracktwo;   //!
	TBranch        *b_tau_0_trig_L1_TAU12IM;   //!
	TBranch        *b_tau_0_trig_L1_TAU20IM;   //!
	TBranch        *b_tau_0_trig_L1_TAU40;   //!
	TBranch        *b_tau_0_trig_L1_TAU60;   //!
	TBranch        *b_tau_0_trig_L1_TAU20IM_2J20_XE45;   //!
	TBranch        *b_tau_0_trig_L1_TAU20_2J20_XE45;   //!
	TBranch        *b_tau_0_met_mt;   //!
	TBranch        *b_tau_0_met_mt2;   //!
	TBranch        *b_tau_0_met_dphi;   //!
	TBranch        *b_true_parent_pt;   //!
	TBranch        *b_true_parent_eta;   //!
	TBranch        *b_true_parent_phi;   //!
	TBranch        *b_true_parent_m;   //!
	TBranch        *b_tau_0_HLT_pt;   //!
	TBranch        *b_tau_0_HLT_eta;   //!
	TBranch        *b_tau_0_HLT_phi;   //!
	TBranch        *b_tau_0_HLT_m;   //!
	TBranch        *b_tau_0_L1_pt;   //!
	TBranch        *b_tau_0_L1_eta;   //!
	TBranch        *b_tau_0_L1_phi;   //!
	TBranch        *b_tau_0_L1_jet_pt;   //!
	TBranch        *b_tau_0_L1_jet_eta;   //!
	TBranch        *b_tau_0_L1_jet_phi;   //!
	TBranch        *b_jet_0_L1_pt;   //!
	TBranch        *b_jet_0_L1_eta;   //!
	TBranch        *b_jet_0_L1_phi;   //!
	TBranch        *b_jet_1_L1_pt;   //!
	TBranch        *b_jet_1_L1_eta;   //!
	TBranch        *b_jet_1_L1_phi;   //!
	TBranch        *b_met_HLT_et;   //!
	TBranch        *b_met_L1_et;   //!
	TBranch        *b_L1_2J20;   //!
	TBranch        *b_bsm_tj_dirty_jet;   //!
	TBranch        *b_bsm_tj_mjjb;   //!
	TBranch        *b_bsm_tj_n_bjets;   //!
	TBranch        *b_truth_leptonic_top0;   //!
	TBranch        *b_truth_leptonic_top1;   //!
	TBranch        *b_truth_leptonic_top0_had_tau;   //!
	TBranch        *b_truth_leptonic_top1_had_tau;   //!
	TBranch        *b_truth_hadronic_top0;   //!
	TBranch        *b_truth_hadronic_top1;   //!
	TBranch        *b_truth_charged_higgs;   //!
	TBranch        *b_truth_charged_higgs_tau;   //!
	TBranch        *b_truth_charged_higgs_tau_had;   //!
	TBranch        *b_tau_0_is_had_tau_home;   //!
	TBranch        *b_tau_0_is_had_tau_home_pdgId;   //!
	TBranch        *b_tau_0_is_had_tau_home_mother_pdgId;   //!
	TBranch        *b_tau_0_is_had_tau_home_nPi;   //!
	TBranch        *b_tau_0_is_had_tau_home_nPi0;   //!

	TBranch        *b_tau_0_sf_NOMINAL_TAU_EFF_SELECTION;   //!
	TBranch        *b_tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TAU_EFF_SELECTION;   //!
	TBranch        *b_tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TAU_EFF_SELECTION;   //!
	TBranch        *b_tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TAU_EFF_SELECTION;   //!
	TBranch        *b_tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TAU_EFF_SELECTION;   //!
	TBranch        *b_tau_0_sf_NOMINAL_TAU_EFF_RECO;   //!
	TBranch        *b_tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TAU_EFF_RECO;   //!
	TBranch        *b_tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TAU_EFF_RECO;   //!
	TBranch        *b_tau_0_sf_NOMINAL_TAU_EFF_ELEOLR;   //!
	TBranch        *b_tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TAU_EFF_ELEOLR;   //!
	TBranch        *b_tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TAU_EFF_ELEOLR;   //!
	TBranch        *b_tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTLOOSE;   //!
	TBranch        *b_tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTMEDIUM;   //!
	TBranch        *b_tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTTIGHT;   //!
	TBranch        *b_tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTLOOSE;   //!
	TBranch        *b_tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTMEDIUM;   //!
	TBranch        *b_tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTTIGHT;   //!
	TBranch        *b_tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTLOOSE;   //!
	TBranch        *b_tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTMEDIUM;   //!
	TBranch        *b_tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTTIGHT;   //!
	TBranch        *b_tau_0_ff_medium_05;   //!
	TBranch        *b_tau_0_ff_up;   //!
	TBranch        *b_tau_0_ff_down;   //!
	TBranch        *b_tau_0_ff_llh_v1_sf;   //!
	TBranch        *b_tau_0_ff_llh_v2_sf;   //!
	TBranch        *b_bjet_sf_MVX_NOMINAL_sf;   //!
	TBranch        *b_bjet_sf_MVX_NOMINAL_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_0_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_0_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_0_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_0_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_1_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_1_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_1_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_1_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_2_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_2_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_2_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_2_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_3_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_3_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_3_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_3_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_4_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_4_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_4_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_4_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_5_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_5_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_5_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_B_5_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_0_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_0_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_0_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_0_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_1_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_1_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_1_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_1_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_2_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_2_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_2_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_2_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_3_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_3_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_3_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_C_3_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_0_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_0_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_0_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_0_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_1_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_1_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_1_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_1_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_10_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_10_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_10_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_10_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_11_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_11_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_11_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_11_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_2_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_2_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_2_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_2_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_3_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_3_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_3_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_3_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_4_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_4_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_4_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_4_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_5_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_5_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_5_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_5_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_6_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_6_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_6_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_6_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_7_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_7_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_7_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_7_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_8_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_8_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_8_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_8_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_9_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_9_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_9_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_Eigen_Light_9_1up_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_extrapolation_1down_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_extrapolation_1down_ineff_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_extrapolation_1up_sf;   //!
	TBranch        *b_bjet_sf_MVX_FT_EFF_extrapolation_1up_ineff_sf;   //!

	TTree* chain;
	TauJetsSelection(TString filename);
	virtual ~TauJetsSelection();
	virtual Int_t    Cut(Long64_t entry);
	virtual Int_t    GetEntry(Long64_t entry);
	virtual Long64_t LoadTree(Long64_t entry);
	virtual void     Init(TTree *tree);
	virtual void     Loop(TString input);
	virtual Bool_t   Notify();
	virtual void     Show(Long64_t entry = -1);
	double XS(TString input);
	double totalEvents(TString input);
	TString Name(TString input);
	Int_t Type(TString input);
	double GetWeight(TString input);
	void histos();



};

#endif

#ifdef TauJetsSelection_cxx
TauJetsSelection::TauJetsSelection(TString  filename)
{

	if (filename=="fakes") filename = "full_data";

	TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("input/"+filename+"/"+filename+".root");


	if (!f || !f->IsOpen()) {
		f = new TFile("input/"+filename+"/"+filename+".root");

	}

	TTree *tree;

	f->GetObject("NOMINAL",tree);
	Init(tree);

}

TauJetsSelection::~TauJetsSelection()
{
	if (!fChain) return;
	delete fChain->GetCurrentFile();
}

Int_t TauJetsSelection::GetEntry(Long64_t entry)
{
	// Read contents of entry.
	if (!fChain) return 0;
	return fChain->GetEntry(entry);
}
Long64_t TauJetsSelection::LoadTree(Long64_t entry)
{
	// Set the environment to read one entry
	if (!fChain) return -5;
	Long64_t centry = fChain->LoadTree(entry);
	if (centry < 0) return centry;
	if (fChain->GetTreeNumber() != fCurrent) {
		fCurrent = fChain->GetTreeNumber();
		Notify();
	}
	return centry;
}

void TauJetsSelection::Init(TTree *tree)
{
	// The Init() function is called when the selector needs to initialize
	// a new tree or chain. Typically here the branch addresses and branch
	// pointers of the tree will be set.
	// It is normally not necessary to make changes to the generated
	// code, but the routine can be extended by the user if needed.
	// Init() will be called many times when running on PROOF
	// (once per file to be processed).

	// Set branch addresses and branch pointers
	if (!tree) return;
	fChain = tree;
	fCurrent = -1;
	fChain->SetMakeClass(1);

	fChain->SetBranchAddress("event_number", &event_number, &b_event_number);
	fChain->SetBranchAddress("run_number", &run_number, &b_run_number);
	fChain->SetBranchAddress("lb_number", &lb_number, &b_lb_number);
	fChain->SetBranchAddress("random_run_number", &random_run_number, &b_random_run_number);
	fChain->SetBranchAddress("random_lb_number", &random_lb_number, &b_random_lb_number);
	fChain->SetBranchAddress("weight_mc", &weight_mc, &b_weight_mc);
	fChain->SetBranchAddress("weight_pileup", &weight_pileup, &b_weight_pileup);
	fChain->SetBranchAddress("weight_total", &weight_total, &b_weight_total);
	fChain->SetBranchAddress("n_muons", &n_muons, &b_n_muons);
	fChain->SetBranchAddress("n_electrons", &n_electrons, &b_n_electrons);
	fChain->SetBranchAddress("n_photons", &n_photons, &b_n_photons);
	fChain->SetBranchAddress("n_taus", &n_taus, &b_n_taus);
	fChain->SetBranchAddress("n_taus_loose", &n_taus_loose, &b_n_taus_loose);
	fChain->SetBranchAddress("n_taus_medium", &n_taus_medium, &b_n_taus_medium);
	fChain->SetBranchAddress("n_taus_tight", &n_taus_tight, &b_n_taus_tight);
	fChain->SetBranchAddress("n_jets", &n_jets, &b_n_jets);
	fChain->SetBranchAddress("n_bjets", &n_bjets, &b_n_bjets);
	fChain->SetBranchAddress("n_vx", &n_vx, &b_n_vx);
	fChain->SetBranchAddress("n_pvx", &n_pvx, &b_n_pvx);
	fChain->SetBranchAddress("n_actual_int", &n_actual_int, &b_n_actual_int);
	fChain->SetBranchAddress("n_avg_int", &n_avg_int, &b_n_avg_int);
	fChain->SetBranchAddress("bjets_sf", &bjets_sf, &b_bjets_sf);
	fChain->SetBranchAddress("bjets_ineff_sf", &bjets_ineff_sf, &b_bjets_ineff_sf);
	fChain->SetBranchAddress("n_avg_int_cor", &n_avg_int_cor, &b_n_avg_int_cor);
	fChain->SetBranchAddress("HLT_e26_lhtight_iloose", &HLT_e26_lhtight_iloose, &b_HLT_e26_lhtight_iloose);
	fChain->SetBranchAddress("HLT_e60_lhmedium", &HLT_e60_lhmedium, &b_HLT_e60_lhmedium);
	fChain->SetBranchAddress("HLT_e24_lhmedium_iloose_L1EM18VH", &HLT_e24_lhmedium_iloose_L1EM18VH, &b_HLT_e24_lhmedium_iloose_L1EM18VH);
	fChain->SetBranchAddress("HLT_e24_lhmedium_iloose_L1EM20VH", &HLT_e24_lhmedium_iloose_L1EM20VH, &b_HLT_e24_lhmedium_iloose_L1EM20VH);
	fChain->SetBranchAddress("HLT_e24_lhtight_iloose", &HLT_e24_lhtight_iloose, &b_HLT_e24_lhtight_iloose);
	fChain->SetBranchAddress("HLT_e26_lhtig", &HLT_e26_lhtig, &b_HLT_e26_lhtig);
	fChain->SetBranchAddress("HLT_tau35_medium1_tracktwo", &HLT_tau35_medium1_tracktwo, &b_HLT_tau35_medium1_tracktwo);
	fChain->SetBranchAddress("HLT_tau35_medium1_tracktwo_xe70_L1XE45", &HLT_tau35_medium1_tracktwo_xe70_L1XE45, &b_HLT_tau35_medium1_tracktwo_xe70_L1XE45);
	fChain->SetBranchAddress("HLT_tau35_medium1_tracktwo_L1TAU20_xe70_L1XE45", &HLT_tau35_medium1_tracktwo_L1TAU20_xe70_L1XE45, &b_HLT_tau35_medium1_tracktwo_L1TAU20_xe70_L1XE45);
	fChain->SetBranchAddress("HLT_tau25_medium1_tracktwo", &HLT_tau25_medium1_tracktwo, &b_HLT_tau25_medium1_tracktwo);
	fChain->SetBranchAddress("HLT_tau80_medium1_tracktwo", &HLT_tau80_medium1_tracktwo, &b_HLT_tau80_medium1_tracktwo);
	fChain->SetBranchAddress("HLT_tau125_medium1_tracktwo", &HLT_tau125_medium1_tracktwo, &b_HLT_tau125_medium1_tracktwo);
	fChain->SetBranchAddress("HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo", &HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo, &b_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo);
	fChain->SetBranchAddress("HLT_e17_lhmedium_tau25_medium1_tracktwo", &HLT_e17_lhmedium_tau25_medium1_tracktwo, &b_HLT_e17_lhmedium_tau25_medium1_tracktwo);
	fChain->SetBranchAddress("HLT_mu14_tau25_medium1_tracktwo", &HLT_mu14_tau25_medium1_tracktwo, &b_HLT_mu14_tau25_medium1_tracktwo);
	fChain->SetBranchAddress("L1_TAU12IM", &L1_TAU12IM, &b_L1_TAU12IM);
	fChain->SetBranchAddress("L1_TAU20IM", &L1_TAU20IM, &b_L1_TAU20IM);
	fChain->SetBranchAddress("L1_TAU40", &L1_TAU40, &b_L1_TAU40);
	fChain->SetBranchAddress("L1_TAU60", &L1_TAU60, &b_L1_TAU60);
	fChain->SetBranchAddress("L1_TAU20IM_2J20_XE45", &L1_TAU20IM_2J20_XE45, &b_L1_TAU20IM_2J20_XE45);
	fChain->SetBranchAddress("L1_TAU20_2J20_XE45", &L1_TAU20_2J20_XE45, &b_L1_TAU20_2J20_XE45);
	fChain->SetBranchAddress("HLT_j55", &HLT_j55, &b_HLT_j55);
	fChain->SetBranchAddress("HLT_j30_xe10_razor170", &HLT_j30_xe10_razor170, &b_HLT_j30_xe10_razor170);
	fChain->SetBranchAddress("HLT_mu26_imedium", &HLT_mu26_imedium, &b_HLT_mu26_imedium);
	fChain->SetBranchAddress("HLT_mu50", &HLT_mu50, &b_HLT_mu50);
	fChain->SetBranchAddress("HLT_mu20_iloose_L1MU15", &HLT_mu20_iloose_L1MU15, &b_HLT_mu20_iloose_L1MU15);
	fChain->SetBranchAddress("HLT_mu24_iloose_L1MU15", &HLT_mu24_iloose_L1MU15, &b_HLT_mu24_iloose_L1MU15);
	fChain->SetBranchAddress("HLT_mu24_imedium", &HLT_mu24_imedium, &b_HLT_mu24_imedium);
	fChain->SetBranchAddress("HLT_xe100", &HLT_xe100, &b_HLT_xe100);
	fChain->SetBranchAddress("HLT_xe80", &HLT_xe80, &b_HLT_xe80);
	fChain->SetBranchAddress("HLT_xe70", &HLT_xe70, &b_HLT_xe70);
	fChain->SetBranchAddress("L1_XE70", &L1_XE70, &b_L1_XE70);
	fChain->SetBranchAddress("L1_XE60", &L1_XE60, &b_L1_XE60);
	fChain->SetBranchAddress("L1_XE50", &L1_XE50, &b_L1_XE50);
	fChain->SetBranchAddress("jet_0", &jet_0, &b_jet_0);
	fChain->SetBranchAddress("jet_0_eta", &jet_0_eta, &b_jet_0_eta);
	fChain->SetBranchAddress("jet_0_phi", &jet_0_phi, &b_jet_0_phi);
	fChain->SetBranchAddress("jet_0_pt", &jet_0_pt, &b_jet_0_pt);
	fChain->SetBranchAddress("jet_0_et", &jet_0_et, &b_jet_0_et);
	fChain->SetBranchAddress("jet_0_m", &jet_0_m, &b_jet_0_m);
	fChain->SetBranchAddress("jet_0_q", &jet_0_q, &b_jet_0_q);
	fChain->SetBranchAddress("jet_0_jvf", &jet_0_jvf, &b_jet_0_jvf);
	fChain->SetBranchAddress("jet_0_jvfloose", &jet_0_jvfloose, &b_jet_0_jvfloose);
	fChain->SetBranchAddress("jet_0_jvt", &jet_0_jvt, &b_jet_0_jvt);
	fChain->SetBranchAddress("jet_0_mvx", &jet_0_mvx, &b_jet_0_mvx);
	fChain->SetBranchAddress("jet_0_mvx_tagged", &jet_0_mvx_tagged, &b_jet_0_mvx_tagged);
	fChain->SetBranchAddress("jet_0_mvx_sf", &jet_0_mvx_sf, &b_jet_0_mvx_sf);
	fChain->SetBranchAddress("jet_0_mvx_ineff_sf", &jet_0_mvx_ineff_sf, &b_jet_0_mvx_ineff_sf);
	fChain->SetBranchAddress("jet_0_flavorlabel", &jet_0_flavorlabel, &b_jet_0_flavorlabel);
	fChain->SetBranchAddress("jet_0_mv2c00", &jet_0_mv2c00, &b_jet_0_mv2c00);
	fChain->SetBranchAddress("jet_0_mv2c100", &jet_0_mv2c100, &b_jet_0_mv2c100);
	fChain->SetBranchAddress("jet_0_mv2c10", &jet_0_mv2c10, &b_jet_0_mv2c10);
	fChain->SetBranchAddress("jet_0_mv2c20", &jet_0_mv2c20, &b_jet_0_mv2c20);
	fChain->SetBranchAddress("jet_1", &jet_1, &b_jet_1);
	fChain->SetBranchAddress("jet_1_eta", &jet_1_eta, &b_jet_1_eta);
	fChain->SetBranchAddress("jet_1_phi", &jet_1_phi, &b_jet_1_phi);
	fChain->SetBranchAddress("jet_1_pt", &jet_1_pt, &b_jet_1_pt);
	fChain->SetBranchAddress("jet_1_et", &jet_1_et, &b_jet_1_et);
	fChain->SetBranchAddress("jet_1_m", &jet_1_m, &b_jet_1_m);
	fChain->SetBranchAddress("jet_1_q", &jet_1_q, &b_jet_1_q);
	fChain->SetBranchAddress("jet_1_jvf", &jet_1_jvf, &b_jet_1_jvf);
	fChain->SetBranchAddress("jet_1_jvfloose", &jet_1_jvfloose, &b_jet_1_jvfloose);
	fChain->SetBranchAddress("jet_1_jvt", &jet_1_jvt, &b_jet_1_jvt);
	fChain->SetBranchAddress("jet_1_mvx", &jet_1_mvx, &b_jet_1_mvx);
	fChain->SetBranchAddress("jet_1_mvx_tagged", &jet_1_mvx_tagged, &b_jet_1_mvx_tagged);
	fChain->SetBranchAddress("jet_1_mvx_sf", &jet_1_mvx_sf, &b_jet_1_mvx_sf);
	fChain->SetBranchAddress("jet_1_mvx_ineff_sf", &jet_1_mvx_ineff_sf, &b_jet_1_mvx_ineff_sf);
	fChain->SetBranchAddress("jet_1_flavorlabel", &jet_1_flavorlabel, &b_jet_1_flavorlabel);
	fChain->SetBranchAddress("jet_1_mv2c00", &jet_1_mv2c00, &b_jet_1_mv2c00);
	fChain->SetBranchAddress("jet_1_mv2c100", &jet_1_mv2c100, &b_jet_1_mv2c100);
	fChain->SetBranchAddress("jet_1_mv2c10", &jet_1_mv2c10, &b_jet_1_mv2c10);
	fChain->SetBranchAddress("jet_1_mv2c20", &jet_1_mv2c20, &b_jet_1_mv2c20);
	fChain->SetBranchAddress("jet_2", &jet_2, &b_jet_2);
	fChain->SetBranchAddress("jet_2_eta", &jet_2_eta, &b_jet_2_eta);
	fChain->SetBranchAddress("jet_2_phi", &jet_2_phi, &b_jet_2_phi);
	fChain->SetBranchAddress("jet_2_pt", &jet_2_pt, &b_jet_2_pt);
	fChain->SetBranchAddress("jet_2_et", &jet_2_et, &b_jet_2_et);
	fChain->SetBranchAddress("jet_2_m", &jet_2_m, &b_jet_2_m);
	fChain->SetBranchAddress("jet_2_q", &jet_2_q, &b_jet_2_q);
	fChain->SetBranchAddress("jet_2_jvf", &jet_2_jvf, &b_jet_2_jvf);
	fChain->SetBranchAddress("jet_2_jvfloose", &jet_2_jvfloose, &b_jet_2_jvfloose);
	fChain->SetBranchAddress("jet_2_jvt", &jet_2_jvt, &b_jet_2_jvt);
	fChain->SetBranchAddress("jet_2_mvx", &jet_2_mvx, &b_jet_2_mvx);
	fChain->SetBranchAddress("jet_2_mvx_tagged", &jet_2_mvx_tagged, &b_jet_2_mvx_tagged);
	fChain->SetBranchAddress("jet_2_mvx_sf", &jet_2_mvx_sf, &b_jet_2_mvx_sf);
	fChain->SetBranchAddress("jet_2_mvx_ineff_sf", &jet_2_mvx_ineff_sf, &b_jet_2_mvx_ineff_sf);
	fChain->SetBranchAddress("jet_2_flavorlabel", &jet_2_flavorlabel, &b_jet_2_flavorlabel);
	fChain->SetBranchAddress("jet_2_mv2c00", &jet_2_mv2c00, &b_jet_2_mv2c00);
	fChain->SetBranchAddress("jet_2_mv2c100", &jet_2_mv2c100, &b_jet_2_mv2c100);
	fChain->SetBranchAddress("jet_2_mv2c10", &jet_2_mv2c10, &b_jet_2_mv2c10);
	fChain->SetBranchAddress("jet_2_mv2c20", &jet_2_mv2c20, &b_jet_2_mv2c20);
	fChain->SetBranchAddress("jet_3", &jet_3, &b_jet_3);
	fChain->SetBranchAddress("jet_3_eta", &jet_3_eta, &b_jet_3_eta);
	fChain->SetBranchAddress("jet_3_phi", &jet_3_phi, &b_jet_3_phi);
	fChain->SetBranchAddress("jet_3_pt", &jet_3_pt, &b_jet_3_pt);
	fChain->SetBranchAddress("jet_3_et", &jet_3_et, &b_jet_3_et);
	fChain->SetBranchAddress("jet_3_m", &jet_3_m, &b_jet_3_m);
	fChain->SetBranchAddress("jet_3_q", &jet_3_q, &b_jet_3_q);
	fChain->SetBranchAddress("jet_3_jvf", &jet_3_jvf, &b_jet_3_jvf);
	fChain->SetBranchAddress("jet_3_jvfloose", &jet_3_jvfloose, &b_jet_3_jvfloose);
	fChain->SetBranchAddress("jet_3_jvt", &jet_3_jvt, &b_jet_3_jvt);
	fChain->SetBranchAddress("jet_3_mvx", &jet_3_mvx, &b_jet_3_mvx);
	fChain->SetBranchAddress("jet_3_mvx_tagged", &jet_3_mvx_tagged, &b_jet_3_mvx_tagged);
	fChain->SetBranchAddress("jet_3_mvx_sf", &jet_3_mvx_sf, &b_jet_3_mvx_sf);
	fChain->SetBranchAddress("jet_3_mvx_ineff_sf", &jet_3_mvx_ineff_sf, &b_jet_3_mvx_ineff_sf);
	fChain->SetBranchAddress("jet_3_flavorlabel", &jet_3_flavorlabel, &b_jet_3_flavorlabel);
	fChain->SetBranchAddress("jet_3_mv2c00", &jet_3_mv2c00, &b_jet_3_mv2c00);
	fChain->SetBranchAddress("jet_3_mv2c100", &jet_3_mv2c100, &b_jet_3_mv2c100);
	fChain->SetBranchAddress("jet_3_mv2c10", &jet_3_mv2c10, &b_jet_3_mv2c10);
	fChain->SetBranchAddress("jet_3_mv2c20", &jet_3_mv2c20, &b_jet_3_mv2c20);
	fChain->SetBranchAddress("tau_0", &tau_0, &b_tau_0);
	fChain->SetBranchAddress("tau_0_eta", &tau_0_eta, &b_tau_0_eta);
	fChain->SetBranchAddress("tau_0_phi", &tau_0_phi, &b_tau_0_phi);
	fChain->SetBranchAddress("tau_0_pt", &tau_0_pt, &b_tau_0_pt);
	fChain->SetBranchAddress("tau_0_et", &tau_0_et, &b_tau_0_et);
	fChain->SetBranchAddress("tau_0_m", &tau_0_m, &b_tau_0_m);
	fChain->SetBranchAddress("tau_0_q", &tau_0_q, &b_tau_0_q);
	fChain->SetBranchAddress("tau_0_n_tracks", &tau_0_n_tracks, &b_tau_0_n_tracks);
	fChain->SetBranchAddress("tau_0_n_wide_tracks", &tau_0_n_wide_tracks, &b_tau_0_n_wide_tracks);
	fChain->SetBranchAddress("tau_0_jet_bdt_loose", &tau_0_jet_bdt_loose, &b_tau_0_jet_bdt_loose);
	fChain->SetBranchAddress("tau_0_jet_bdt_medium", &tau_0_jet_bdt_medium, &b_tau_0_jet_bdt_medium);
	fChain->SetBranchAddress("tau_0_jet_bdt_tight", &tau_0_jet_bdt_tight, &b_tau_0_jet_bdt_tight);
	fChain->SetBranchAddress("tau_0_jet_bdt_score", &tau_0_jet_bdt_score, &b_tau_0_jet_bdt_score);
	fChain->SetBranchAddress("tau_0_jet_id_loose_sf", &tau_0_jet_id_loose_sf, &b_tau_0_jet_id_loose_sf);
	fChain->SetBranchAddress("tau_0_jet_id_medium_sf", &tau_0_jet_id_medium_sf, &b_tau_0_jet_id_medium_sf);
	fChain->SetBranchAddress("tau_0_jet_id_tight_sf", &tau_0_jet_id_tight_sf, &b_tau_0_jet_id_tight_sf);
	fChain->SetBranchAddress("tau_0_jet_bdt_eff_sf", &tau_0_jet_bdt_eff_sf, &b_tau_0_jet_bdt_eff_sf);

	fChain->SetBranchAddress("tau_0_reco_sf", &tau_0_reco_sf, &b_tau_0_reco_sf);
	fChain->SetBranchAddress("tau_0_eleolr_loose_sf", &tau_0_eleolr_loose_sf, &b_tau_0_eleolr_loose_sf);
	fChain->SetBranchAddress("tau_0_jet_id_selection_sf", &tau_0_jet_id_selection_sf, &b_tau_0_jet_id_selection_sf);
	fChain->SetBranchAddress("tau_0_ele_bdt_loose", &tau_0_ele_bdt_loose, &b_tau_0_ele_bdt_loose);
	fChain->SetBranchAddress("tau_0_ele_bdt_medium", &tau_0_ele_bdt_medium, &b_tau_0_ele_bdt_medium);
	fChain->SetBranchAddress("tau_0_ele_bdt_tight", &tau_0_ele_bdt_tight, &b_tau_0_ele_bdt_tight);
	fChain->SetBranchAddress("tau_0_ele_bdt_score", &tau_0_ele_bdt_score, &b_tau_0_ele_bdt_score);
	fChain->SetBranchAddress("tau_0_ele_bdt_eff_sf", &tau_0_ele_bdt_eff_sf, &b_tau_0_ele_bdt_eff_sf);
	fChain->SetBranchAddress("tau_0_ele_match_lhscore", &tau_0_ele_match_lhscore, &b_tau_0_ele_match_lhscore);
	fChain->SetBranchAddress("tau_0_decay_mode", &tau_0_decay_mode, &b_tau_0_decay_mode);
	fChain->SetBranchAddress("tau_0_leadTrk_pt", &tau_0_leadTrk_pt, &b_tau_0_leadTrk_pt);
	fChain->SetBranchAddress("tau_0_bjet_weight", &tau_0_bjet_weight, &b_tau_0_bjet_weight);
	fChain->SetBranchAddress("tau_0_jet_truth_label", &tau_0_jet_truth_label, &b_tau_0_jet_truth_label);
	fChain->SetBranchAddress("tau_0_match_pdgId", &tau_0_match_pdgId, &b_tau_0_match_pdgId);
	fChain->SetBranchAddress("tau_0_match_isHad", &tau_0_match_isHad, &b_tau_0_match_isHad);
	fChain->SetBranchAddress("tau_1", &tau_1, &b_tau_1);
	fChain->SetBranchAddress("tau_1_eta", &tau_1_eta, &b_tau_1_eta);
	fChain->SetBranchAddress("tau_1_phi", &tau_1_phi, &b_tau_1_phi);
	fChain->SetBranchAddress("tau_1_pt", &tau_1_pt, &b_tau_1_pt);
	fChain->SetBranchAddress("tau_1_et", &tau_1_et, &b_tau_1_et);
	fChain->SetBranchAddress("tau_1_m", &tau_1_m, &b_tau_1_m);
	fChain->SetBranchAddress("tau_1_q", &tau_1_q, &b_tau_1_q);
	fChain->SetBranchAddress("tau_1_n_tracks", &tau_1_n_tracks, &b_tau_1_n_tracks);
	fChain->SetBranchAddress("tau_1_n_wide_tracks", &tau_1_n_wide_tracks, &b_tau_1_n_wide_tracks);
	fChain->SetBranchAddress("tau_1_jet_bdt_loose", &tau_1_jet_bdt_loose, &b_tau_1_jet_bdt_loose);
	fChain->SetBranchAddress("tau_1_jet_bdt_medium", &tau_1_jet_bdt_medium, &b_tau_1_jet_bdt_medium);
	fChain->SetBranchAddress("tau_1_jet_bdt_tight", &tau_1_jet_bdt_tight, &b_tau_1_jet_bdt_tight);
	fChain->SetBranchAddress("tau_1_jet_bdt_score", &tau_1_jet_bdt_score, &b_tau_1_jet_bdt_score);
	fChain->SetBranchAddress("tau_1_jet_id_loose_sf", &tau_1_jet_id_loose_sf, &b_tau_1_jet_id_loose_sf);
	fChain->SetBranchAddress("tau_1_jet_id_medium_sf", &tau_1_jet_id_medium_sf, &b_tau_1_jet_id_medium_sf);
	fChain->SetBranchAddress("tau_1_jet_id_tight_sf", &tau_1_jet_id_tight_sf, &b_tau_1_jet_id_tight_sf);
	fChain->SetBranchAddress("tau_1_reco_sf", &tau_1_reco_sf, &b_tau_1_reco_sf);
	fChain->SetBranchAddress("tau_1_eleolr_loose_sf", &tau_1_eleolr_loose_sf, &b_tau_1_eleolr_loose_sf);
	fChain->SetBranchAddress("tau_1_jet_id_selection_sf", &tau_1_jet_id_selection_sf, &b_tau_1_jet_id_selection_sf);
	fChain->SetBranchAddress("tau_1_ele_bdt_loose", &tau_1_ele_bdt_loose, &b_tau_1_ele_bdt_loose);
	fChain->SetBranchAddress("tau_1_ele_bdt_medium", &tau_1_ele_bdt_medium, &b_tau_1_ele_bdt_medium);
	fChain->SetBranchAddress("tau_1_ele_bdt_tight", &tau_1_ele_bdt_tight, &b_tau_1_ele_bdt_tight);
	fChain->SetBranchAddress("tau_1_ele_bdt_score", &tau_1_ele_bdt_score, &b_tau_1_ele_bdt_score);
	fChain->SetBranchAddress("tau_1_ele_bdt_eff_sf", &tau_1_ele_bdt_eff_sf, &b_tau_1_ele_bdt_eff_sf);
	fChain->SetBranchAddress("tau_1_ele_match_lhscore", &tau_1_ele_match_lhscore, &b_tau_1_ele_match_lhscore);
	fChain->SetBranchAddress("tau_1_decay_mode", &tau_1_decay_mode, &b_tau_1_decay_mode);
	fChain->SetBranchAddress("tau_1_leadTrk_pt", &tau_1_leadTrk_pt, &b_tau_1_leadTrk_pt);
	fChain->SetBranchAddress("el_0", &el_0, &b_el_0);
	fChain->SetBranchAddress("el_0_eta", &el_0_eta, &b_el_0_eta);
	fChain->SetBranchAddress("el_0_phi", &el_0_phi, &b_el_0_phi);
	fChain->SetBranchAddress("el_0_pt", &el_0_pt, &b_el_0_pt);
	fChain->SetBranchAddress("el_0_et", &el_0_et, &b_el_0_et);
	fChain->SetBranchAddress("el_0_m", &el_0_m, &b_el_0_m);
	fChain->SetBranchAddress("el_0_q", &el_0_q, &b_el_0_q);
	fChain->SetBranchAddress("el_0_trk_d0", &el_0_trk_d0, &b_el_0_trk_d0);
	fChain->SetBranchAddress("el_0_trk_d0_sig", &el_0_trk_d0_sig, &b_el_0_trk_d0_sig);
	fChain->SetBranchAddress("el_0_trk_z0", &el_0_trk_z0, &b_el_0_trk_z0);
	fChain->SetBranchAddress("el_0_trk_z0_sintheta", &el_0_trk_z0_sintheta, &b_el_0_trk_z0_sintheta);
	fChain->SetBranchAddress("el_0_trk_z0_sig", &el_0_trk_z0_sig, &b_el_0_trk_z0_sig);
	fChain->SetBranchAddress("el_0_trk_pvx_z0", &el_0_trk_pvx_z0, &b_el_0_trk_pvx_z0);
	fChain->SetBranchAddress("el_0_trk_pvx_z0_sintheta", &el_0_trk_pvx_z0_sintheta, &b_el_0_trk_pvx_z0_sintheta);
	fChain->SetBranchAddress("el_0_trk_pvx_z0_sig", &el_0_trk_pvx_z0_sig, &b_el_0_trk_pvx_z0_sig);
	fChain->SetBranchAddress("el_0_trk_pt_error", &el_0_trk_pt_error, &b_el_0_trk_pt_error);
	fChain->SetBranchAddress("el_0_iso_wp", &el_0_iso_wp, &b_el_0_iso_wp);
	fChain->SetBranchAddress("el_0_iso_etcone20", &el_0_iso_etcone20, &b_el_0_iso_etcone20);
	fChain->SetBranchAddress("el_0_iso_etcone30", &el_0_iso_etcone30, &b_el_0_iso_etcone30);
	fChain->SetBranchAddress("el_0_iso_etcone40", &el_0_iso_etcone40, &b_el_0_iso_etcone40);
	fChain->SetBranchAddress("el_0_iso_topoetcone20", &el_0_iso_topoetcone20, &b_el_0_iso_topoetcone20);
	fChain->SetBranchAddress("el_0_iso_topoetcone30", &el_0_iso_topoetcone30, &b_el_0_iso_topoetcone30);
	fChain->SetBranchAddress("el_0_iso_topoetcone40", &el_0_iso_topoetcone40, &b_el_0_iso_topoetcone40);
	fChain->SetBranchAddress("el_0_iso_ptcone20", &el_0_iso_ptcone20, &b_el_0_iso_ptcone20);
	fChain->SetBranchAddress("el_0_iso_ptcone30", &el_0_iso_ptcone30, &b_el_0_iso_ptcone30);
	fChain->SetBranchAddress("el_0_iso_ptcone40", &el_0_iso_ptcone40, &b_el_0_iso_ptcone40);
	fChain->SetBranchAddress("el_0_id_veryloose", &el_0_id_veryloose, &b_el_0_id_veryloose);
	fChain->SetBranchAddress("el_0_id_loose", &el_0_id_loose, &b_el_0_id_loose);
	fChain->SetBranchAddress("el_0_id_medium", &el_0_id_medium, &b_el_0_id_medium);
	fChain->SetBranchAddress("el_0_id_tight", &el_0_id_tight, &b_el_0_id_tight);
	fChain->SetBranchAddress("el_0_id_bad", &el_0_id_bad, &b_el_0_id_bad);
	fChain->SetBranchAddress("el_0_id_eff_sf_loose", &el_0_id_eff_sf_loose, &b_el_0_id_eff_sf_loose);
	fChain->SetBranchAddress("el_0_id_eff_sf_medium", &el_0_id_eff_sf_medium, &b_el_0_id_eff_sf_medium);
	fChain->SetBranchAddress("el_0_id_eff_sf_tight", &el_0_id_eff_sf_tight, &b_el_0_id_eff_sf_tight);
	fChain->SetBranchAddress("el_0_iso_eff_sf_tight", &el_0_iso_eff_sf_tight, &b_el_0_iso_eff_sf_tight);
	fChain->SetBranchAddress("el_0_reco_eff_sf", &el_0_reco_eff_sf, &b_el_0_reco_eff_sf);
	fChain->SetBranchAddress("el_0_trig_eff_sf_loose", &el_0_trig_eff_sf_loose, &b_el_0_trig_eff_sf_loose);
	fChain->SetBranchAddress("el_0_trig_eff_sf_medium", &el_0_trig_eff_sf_medium, &b_el_0_trig_eff_sf_medium);
	fChain->SetBranchAddress("el_0_trig_eff_sf_tight", &el_0_trig_eff_sf_tight, &b_el_0_trig_eff_sf_tight);
	fChain->SetBranchAddress("el_0_reco_eff_sf_loose", &el_0_reco_eff_sf_loose, &b_el_0_reco_eff_sf_loose);
	fChain->SetBranchAddress("el_0_reco_eff_sf_medium", &el_0_reco_eff_sf_medium, &b_el_0_reco_eff_sf_medium);
	fChain->SetBranchAddress("el_0_reco_eff_sf_tight", &el_0_reco_eff_sf_tight, &b_el_0_reco_eff_sf_tight);
	fChain->SetBranchAddress("el_0_muonType", &el_0_muonType, &b_el_0_muonType);
	fChain->SetBranchAddress("mu_0", &mu_0, &b_mu_0);
	fChain->SetBranchAddress("mu_0_eta", &mu_0_eta, &b_mu_0_eta);
	fChain->SetBranchAddress("mu_0_phi", &mu_0_phi, &b_mu_0_phi);
	fChain->SetBranchAddress("mu_0_pt", &mu_0_pt, &b_mu_0_pt);
	fChain->SetBranchAddress("mu_0_et", &mu_0_et, &b_mu_0_et);
	fChain->SetBranchAddress("mu_0_m", &mu_0_m, &b_mu_0_m);
	fChain->SetBranchAddress("mu_0_q", &mu_0_q, &b_mu_0_q);
	fChain->SetBranchAddress("mu_0_trk_d0", &mu_0_trk_d0, &b_mu_0_trk_d0);
	fChain->SetBranchAddress("mu_0_trk_d0_sig", &mu_0_trk_d0_sig, &b_mu_0_trk_d0_sig);
	fChain->SetBranchAddress("mu_0_trk_z0", &mu_0_trk_z0, &b_mu_0_trk_z0);
	fChain->SetBranchAddress("mu_0_trk_z0_sintheta", &mu_0_trk_z0_sintheta, &b_mu_0_trk_z0_sintheta);
	fChain->SetBranchAddress("mu_0_trk_z0_sig", &mu_0_trk_z0_sig, &b_mu_0_trk_z0_sig);
	fChain->SetBranchAddress("mu_0_trk_pvx_z0", &mu_0_trk_pvx_z0, &b_mu_0_trk_pvx_z0);
	fChain->SetBranchAddress("mu_0_trk_pvx_z0_sintheta", &mu_0_trk_pvx_z0_sintheta, &b_mu_0_trk_pvx_z0_sintheta);
	fChain->SetBranchAddress("mu_0_trk_pvx_z0_sig", &mu_0_trk_pvx_z0_sig, &b_mu_0_trk_pvx_z0_sig);
	fChain->SetBranchAddress("mu_0_trk_pt_error", &mu_0_trk_pt_error, &b_mu_0_trk_pt_error);
	fChain->SetBranchAddress("mu_0_iso_wp", &mu_0_iso_wp, &b_mu_0_iso_wp);
	fChain->SetBranchAddress("mu_0_iso_etcone20", &mu_0_iso_etcone20, &b_mu_0_iso_etcone20);
	fChain->SetBranchAddress("mu_0_iso_etcone30", &mu_0_iso_etcone30, &b_mu_0_iso_etcone30);
	fChain->SetBranchAddress("mu_0_iso_etcone40", &mu_0_iso_etcone40, &b_mu_0_iso_etcone40);
	fChain->SetBranchAddress("mu_0_iso_topoetcone20", &mu_0_iso_topoetcone20, &b_mu_0_iso_topoetcone20);
	fChain->SetBranchAddress("mu_0_iso_topoetcone30", &mu_0_iso_topoetcone30, &b_mu_0_iso_topoetcone30);
	fChain->SetBranchAddress("mu_0_iso_topoetcone40", &mu_0_iso_topoetcone40, &b_mu_0_iso_topoetcone40);
	fChain->SetBranchAddress("mu_0_iso_ptcone20", &mu_0_iso_ptcone20, &b_mu_0_iso_ptcone20);
	fChain->SetBranchAddress("mu_0_iso_ptcone30", &mu_0_iso_ptcone30, &b_mu_0_iso_ptcone30);
	fChain->SetBranchAddress("mu_0_iso_ptcone40", &mu_0_iso_ptcone40, &b_mu_0_iso_ptcone40);
	fChain->SetBranchAddress("mu_0_id_veryloose", &mu_0_id_veryloose, &b_mu_0_id_veryloose);
	fChain->SetBranchAddress("mu_0_id_loose", &mu_0_id_loose, &b_mu_0_id_loose);
	fChain->SetBranchAddress("mu_0_id_medium", &mu_0_id_medium, &b_mu_0_id_medium);
	fChain->SetBranchAddress("mu_0_id_tight", &mu_0_id_tight, &b_mu_0_id_tight);
	fChain->SetBranchAddress("mu_0_id_bad", &mu_0_id_bad, &b_mu_0_id_bad);
	fChain->SetBranchAddress("mu_0_id_eff_sf_loose", &mu_0_id_eff_sf_loose, &b_mu_0_id_eff_sf_loose);
	fChain->SetBranchAddress("mu_0_id_eff_sf_medium", &mu_0_id_eff_sf_medium, &b_mu_0_id_eff_sf_medium);
	fChain->SetBranchAddress("mu_0_id_eff_sf_tight", &mu_0_id_eff_sf_tight, &b_mu_0_id_eff_sf_tight);
	fChain->SetBranchAddress("mu_0_iso_eff_sf_tight", &mu_0_iso_eff_sf_tight, &b_mu_0_iso_eff_sf_tight);
	fChain->SetBranchAddress("mu_0_reco_eff_sf", &mu_0_reco_eff_sf, &b_mu_0_reco_eff_sf);
	fChain->SetBranchAddress("mu_0_trig_eff_sf_loose", &mu_0_trig_eff_sf_loose, &b_mu_0_trig_eff_sf_loose);
	fChain->SetBranchAddress("mu_0_trig_eff_sf_medium", &mu_0_trig_eff_sf_medium, &b_mu_0_trig_eff_sf_medium);
	fChain->SetBranchAddress("mu_0_trig_eff_sf_tight", &mu_0_trig_eff_sf_tight, &b_mu_0_trig_eff_sf_tight);
	fChain->SetBranchAddress("mu_0_reco_eff_sf_loose", &mu_0_reco_eff_sf_loose, &b_mu_0_reco_eff_sf_loose);
	fChain->SetBranchAddress("mu_0_reco_eff_sf_medium", &mu_0_reco_eff_sf_medium, &b_mu_0_reco_eff_sf_medium);
	fChain->SetBranchAddress("mu_0_reco_eff_sf_tight", &mu_0_reco_eff_sf_tight, &b_mu_0_reco_eff_sf_tight);
	fChain->SetBranchAddress("mu_0_muonType", &mu_0_muonType, &b_mu_0_muonType);
	fChain->SetBranchAddress("met_et", &met_et, &b_met_et);
	fChain->SetBranchAddress("met_etx", &met_etx, &b_met_etx);
	fChain->SetBranchAddress("met_ety", &met_ety, &b_met_ety);
	fChain->SetBranchAddress("met_phi", &met_phi, &b_met_phi);
	fChain->SetBranchAddress("met_sumet", &met_sumet, &b_met_sumet);
	fChain->SetBranchAddress("met_sig", &met_sig, &b_met_sig);
	fChain->SetBranchAddress("met_sig_tracks", &met_sig_tracks, &b_met_sig_tracks);
	fChain->SetBranchAddress("mu_0_trig_HLT_mu26_imedium", &mu_0_trig_HLT_mu26_imedium, &b_mu_0_trig_HLT_mu26_imedium);
	fChain->SetBranchAddress("mu_0_trig_HLT_mu50", &mu_0_trig_HLT_mu50, &b_mu_0_trig_HLT_mu50);
	fChain->SetBranchAddress("mu_0_trig_HLT_mu20_iloose_L1MU15", &mu_0_trig_HLT_mu20_iloose_L1MU15, &b_mu_0_trig_HLT_mu20_iloose_L1MU15);
	fChain->SetBranchAddress("mu_0_trig_HLT_mu24_iloose_L1MU15", &mu_0_trig_HLT_mu24_iloose_L1MU15, &b_mu_0_trig_HLT_mu24_iloose_L1MU15);
	fChain->SetBranchAddress("mu_0_trig_HLT_mu24_imedium", &mu_0_trig_HLT_mu24_imedium, &b_mu_0_trig_HLT_mu24_imedium);
	fChain->SetBranchAddress("tau_0_trig_HLT_tau35_medium1_tracktwo", &tau_0_trig_HLT_tau35_medium1_tracktwo, &b_tau_0_trig_HLT_tau35_medium1_tracktwo);
	fChain->SetBranchAddress("tau_0_trig_HLT_tau35_medium1_tracktwo_xe70_L1XE45", &tau_0_trig_HLT_tau35_medium1_tracktwo_xe70_L1XE45, &b_tau_0_trig_HLT_tau35_medium1_tracktwo_xe70_L1XE45);
	fChain->SetBranchAddress("tau_0_trig_HLT_tau35_medium1_tracktwo_L1TAU20_xe70_L1XE45", &tau_0_trig_HLT_tau35_medium1_tracktwo_L1TAU20_xe70_L1XE45, &b_tau_0_trig_HLT_tau35_medium1_tracktwo_L1TAU20_xe70_L1XE45);
	fChain->SetBranchAddress("tau_0_trig_HLT_tau25_medium1_tracktwo", &tau_0_trig_HLT_tau25_medium1_tracktwo, &b_tau_0_trig_HLT_tau25_medium1_tracktwo);
	fChain->SetBranchAddress("tau_0_trig_HLT_tau80_medium1_tracktwo", &tau_0_trig_HLT_tau80_medium1_tracktwo, &b_tau_0_trig_HLT_tau80_medium1_tracktwo);
	fChain->SetBranchAddress("tau_0_trig_HLT_tau125_medium1_tracktwo", &tau_0_trig_HLT_tau125_medium1_tracktwo, &b_tau_0_trig_HLT_tau125_medium1_tracktwo);
	fChain->SetBranchAddress("tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo", &tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo, &b_tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo);
	fChain->SetBranchAddress("tau_0_trig_HLT_e17_lhmedium_tau25_medium1_tracktwo", &tau_0_trig_HLT_e17_lhmedium_tau25_medium1_tracktwo, &b_tau_0_trig_HLT_e17_lhmedium_tau25_medium1_tracktwo);
	fChain->SetBranchAddress("tau_0_trig_HLT_mu14_tau25_medium1_tracktwo", &tau_0_trig_HLT_mu14_tau25_medium1_tracktwo, &b_tau_0_trig_HLT_mu14_tau25_medium1_tracktwo);
	fChain->SetBranchAddress("tau_0_trig_L1_TAU12IM", &tau_0_trig_L1_TAU12IM, &b_tau_0_trig_L1_TAU12IM);
	fChain->SetBranchAddress("tau_0_trig_L1_TAU20IM", &tau_0_trig_L1_TAU20IM, &b_tau_0_trig_L1_TAU20IM);
	fChain->SetBranchAddress("tau_0_trig_L1_TAU40", &tau_0_trig_L1_TAU40, &b_tau_0_trig_L1_TAU40);
	fChain->SetBranchAddress("tau_0_trig_L1_TAU60", &tau_0_trig_L1_TAU60, &b_tau_0_trig_L1_TAU60);
	fChain->SetBranchAddress("tau_0_trig_L1_TAU20IM_2J20_XE45", &tau_0_trig_L1_TAU20IM_2J20_XE45, &b_tau_0_trig_L1_TAU20IM_2J20_XE45);
	fChain->SetBranchAddress("tau_0_trig_L1_TAU20_2J20_XE45", &tau_0_trig_L1_TAU20_2J20_XE45, &b_tau_0_trig_L1_TAU20_2J20_XE45);
	fChain->SetBranchAddress("tau_0_met_mt", &tau_0_met_mt, &b_tau_0_met_mt);
	fChain->SetBranchAddress("tau_0_met_mt2", &tau_0_met_mt2, &b_tau_0_met_mt2);
	fChain->SetBranchAddress("tau_0_met_dphi", &tau_0_met_dphi, &b_tau_0_met_dphi);
	fChain->SetBranchAddress("true_parent_pt", &true_parent_pt, &b_true_parent_pt);
	fChain->SetBranchAddress("true_parent_eta", &true_parent_eta, &b_true_parent_eta);
	fChain->SetBranchAddress("true_parent_phi", &true_parent_phi, &b_true_parent_phi);
	fChain->SetBranchAddress("true_parent_m", &true_parent_m, &b_true_parent_m);
	fChain->SetBranchAddress("tau_0_HLT_pt", &tau_0_HLT_pt, &b_tau_0_HLT_pt);
	fChain->SetBranchAddress("tau_0_HLT_eta", &tau_0_HLT_eta, &b_tau_0_HLT_eta);
	fChain->SetBranchAddress("tau_0_HLT_phi", &tau_0_HLT_phi, &b_tau_0_HLT_phi);
	fChain->SetBranchAddress("tau_0_HLT_m", &tau_0_HLT_m, &b_tau_0_HLT_m);
	fChain->SetBranchAddress("tau_0_L1_pt", &tau_0_L1_pt, &b_tau_0_L1_pt);
	fChain->SetBranchAddress("tau_0_L1_eta", &tau_0_L1_eta, &b_tau_0_L1_eta);
	fChain->SetBranchAddress("tau_0_L1_phi", &tau_0_L1_phi, &b_tau_0_L1_phi);
	fChain->SetBranchAddress("tau_0_L1_jet_pt", &tau_0_L1_jet_pt, &b_tau_0_L1_jet_pt);
	fChain->SetBranchAddress("tau_0_L1_jet_eta", &tau_0_L1_jet_eta, &b_tau_0_L1_jet_eta);
	fChain->SetBranchAddress("tau_0_L1_jet_phi", &tau_0_L1_jet_phi, &b_tau_0_L1_jet_phi);
	fChain->SetBranchAddress("jet_0_L1_pt", &jet_0_L1_pt, &b_jet_0_L1_pt);
	fChain->SetBranchAddress("jet_0_L1_eta", &jet_0_L1_eta, &b_jet_0_L1_eta);
	fChain->SetBranchAddress("jet_0_L1_phi", &jet_0_L1_phi, &b_jet_0_L1_phi);
	fChain->SetBranchAddress("jet_1_L1_pt", &jet_1_L1_pt, &b_jet_1_L1_pt);
	fChain->SetBranchAddress("jet_1_L1_eta", &jet_1_L1_eta, &b_jet_1_L1_eta);
	fChain->SetBranchAddress("jet_1_L1_phi", &jet_1_L1_phi, &b_jet_1_L1_phi);
	fChain->SetBranchAddress("met_HLT_et", &met_HLT_et, &b_met_HLT_et);
	fChain->SetBranchAddress("met_L1_et", &met_L1_et, &b_met_L1_et);
	fChain->SetBranchAddress("L1_2J20", &L1_2J20, &b_L1_2J20);
	fChain->SetBranchAddress("bsm_tj_dirty_jet", &bsm_tj_dirty_jet, &b_bsm_tj_dirty_jet);
	fChain->SetBranchAddress("bsm_tj_mjjb", &bsm_tj_mjjb, &b_bsm_tj_mjjb);
	fChain->SetBranchAddress("bsm_tj_n_bjets", &bsm_tj_n_bjets, &b_bsm_tj_n_bjets);
	fChain->SetBranchAddress("truth_leptonic_top0", &truth_leptonic_top0, &b_truth_leptonic_top0);
	fChain->SetBranchAddress("truth_leptonic_top1", &truth_leptonic_top1, &b_truth_leptonic_top1);
	fChain->SetBranchAddress("truth_leptonic_top0_had_tau", &truth_leptonic_top0_had_tau, &b_truth_leptonic_top0_had_tau);
	fChain->SetBranchAddress("truth_leptonic_top1_had_tau", &truth_leptonic_top1_had_tau, &b_truth_leptonic_top1_had_tau);
	fChain->SetBranchAddress("truth_hadronic_top0", &truth_hadronic_top0, &b_truth_hadronic_top0);
	fChain->SetBranchAddress("truth_hadronic_top1", &truth_hadronic_top1, &b_truth_hadronic_top1);
	fChain->SetBranchAddress("truth_charged_higgs", &truth_charged_higgs, &b_truth_charged_higgs);
	fChain->SetBranchAddress("truth_charged_higgs_tau", &truth_charged_higgs_tau, &b_truth_charged_higgs_tau);
	fChain->SetBranchAddress("truth_charged_higgs_tau_had", &truth_charged_higgs_tau_had, &b_truth_charged_higgs_tau_had);
	fChain->SetBranchAddress("tau_0_is_had_tau_home", &tau_0_is_had_tau_home, &b_tau_0_is_had_tau_home);
	fChain->SetBranchAddress("tau_0_is_had_tau_home_pdgId", &tau_0_is_had_tau_home_pdgId, &b_tau_0_is_had_tau_home_pdgId);
	fChain->SetBranchAddress("tau_0_is_had_tau_home_mother_pdgId", &tau_0_is_had_tau_home_mother_pdgId, &b_tau_0_is_had_tau_home_mother_pdgId);
	fChain->SetBranchAddress("tau_0_is_had_tau_home_nPi", &tau_0_is_had_tau_home_nPi, &b_tau_0_is_had_tau_home_nPi);
	fChain->SetBranchAddress("tau_0_is_had_tau_home_nPi0", &tau_0_is_had_tau_home_nPi0, &b_tau_0_is_had_tau_home_nPi0);
	fChain->SetBranchAddress("tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TAU_EFF_SELECTION", &tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TAU_EFF_SELECTION, &b_tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TAU_EFF_SELECTION);
	fChain->SetBranchAddress("tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TAU_EFF_SELECTION", &tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TAU_EFF_SELECTION, &b_tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TAU_EFF_SELECTION);
	fChain->SetBranchAddress("tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TAU_EFF_SELECTION", &tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TAU_EFF_SELECTION, &b_tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TAU_EFF_SELECTION);
	fChain->SetBranchAddress("tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TAU_EFF_SELECTION", &tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TAU_EFF_SELECTION, &b_tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TAU_EFF_SELECTION);
	fChain->SetBranchAddress("tau_0_sf_NOMINAL_TAU_EFF_RECO", &tau_0_sf_NOMINAL_TAU_EFF_RECO, &b_tau_0_sf_NOMINAL_TAU_EFF_RECO);
	fChain->SetBranchAddress("tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TAU_EFF_RECO", &tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TAU_EFF_RECO, &b_tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TAU_EFF_RECO);
	fChain->SetBranchAddress("tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TAU_EFF_RECO", &tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TAU_EFF_RECO, &b_tau_0_sf_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TAU_EFF_RECO);
	fChain->SetBranchAddress("tau_0_sf_NOMINAL_TAU_EFF_ELEOLR", &tau_0_sf_NOMINAL_TAU_EFF_ELEOLR, &b_tau_0_sf_NOMINAL_TAU_EFF_ELEOLR);
	fChain->SetBranchAddress("tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TAU_EFF_ELEOLR", &tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TAU_EFF_ELEOLR, &b_tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TAU_EFF_ELEOLR);
	fChain->SetBranchAddress("tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TAU_EFF_ELEOLR", &tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TAU_EFF_ELEOLR, &b_tau_0_sf_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TAU_EFF_ELEOLR);
	fChain->SetBranchAddress("tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTLOOSE", &tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTLOOSE, &b_tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTLOOSE);
	fChain->SetBranchAddress("tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTMEDIUM", &tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTMEDIUM, &b_tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTMEDIUM);
	fChain->SetBranchAddress("tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTTIGHT", &tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTTIGHT, &b_tau_0_sf_NOMINAL_TAU_EFF_JETIDBDTTIGHT);
	fChain->SetBranchAddress("tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTLOOSE", &tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTLOOSE, &b_tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTLOOSE);
	fChain->SetBranchAddress("tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTMEDIUM", &tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTMEDIUM, &b_tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTMEDIUM);
	fChain->SetBranchAddress("tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTTIGHT", &tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTTIGHT, &b_tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTTIGHT);
	fChain->SetBranchAddress("tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTLOOSE", &tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTLOOSE, &b_tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTLOOSE);
	fChain->SetBranchAddress("tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTMEDIUM", &tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTMEDIUM, &b_tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTMEDIUM);
	fChain->SetBranchAddress("tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTTIGHT", &tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTTIGHT, &b_tau_0_sf_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTTIGHT);
	fChain->SetBranchAddress("tau_0_ff_medium_05", &tau_0_ff_medium_05, &b_tau_0_ff_medium_05);
	fChain->SetBranchAddress("tau_0_ff_up", &tau_0_ff_up, &b_tau_0_ff_up);
	fChain->SetBranchAddress("tau_0_ff_down", &tau_0_ff_down, &b_tau_0_ff_down);
	fChain->SetBranchAddress("tau_0_ff_llh_v1_sf", &tau_0_ff_llh_v1_sf, &b_tau_0_ff_llh_v1_sf);
	fChain->SetBranchAddress("tau_0_ff_llh_v2_sf", &tau_0_ff_llh_v2_sf, &b_tau_0_ff_llh_v2_sf);
	//    fChain->SetBranchAddress("tau_0_ff_llh_sf", &tau_0_ff_llh_sf, &b_tau_0_ff_llh_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_NOMINAL_sf", &bjet_sf_MVX_NOMINAL_sf, &b_bjet_sf_MVX_NOMINAL_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_NOMINAL_ineff_sf", &bjet_sf_MVX_NOMINAL_ineff_sf, &b_bjet_sf_MVX_NOMINAL_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_0_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_0_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_0_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_0_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_0_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_0_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_0_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_0_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_0_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_0_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_0_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_0_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_1_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_1_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_1_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_1_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_1_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_1_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_1_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_1_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_1_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_1_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_1_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_1_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_2_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_2_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_2_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_2_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_2_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_2_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_2_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_2_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_2_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_2_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_2_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_2_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_3_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_3_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_3_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_3_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_3_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_3_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_3_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_3_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_3_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_3_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_3_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_3_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_4_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_4_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_4_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_4_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_4_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_4_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_4_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_4_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_4_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_4_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_4_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_4_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_5_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_5_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_5_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_5_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_5_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_5_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_5_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_5_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_5_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_B_5_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_B_5_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_B_5_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_0_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_0_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_0_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_0_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_0_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_0_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_0_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_0_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_0_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_0_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_0_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_0_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_1_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_1_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_1_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_1_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_1_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_1_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_1_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_1_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_1_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_1_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_1_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_1_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_2_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_2_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_2_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_2_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_2_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_2_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_2_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_2_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_2_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_2_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_2_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_2_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_3_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_3_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_3_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_3_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_3_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_3_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_3_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_3_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_3_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_C_3_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_C_3_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_C_3_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_0_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_0_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_0_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_0_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_0_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_0_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_0_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_0_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_0_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_0_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_0_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_0_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_1_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_1_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_1_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_1_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_1_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_1_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_1_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_1_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_1_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_1_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_1_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_1_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_10_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_10_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_10_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_10_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_10_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_10_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_10_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_10_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_10_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_10_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_10_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_10_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_11_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_11_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_11_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_11_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_11_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_11_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_11_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_11_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_11_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_11_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_11_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_11_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_2_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_2_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_2_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_2_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_2_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_2_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_2_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_2_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_2_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_2_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_2_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_2_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_3_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_3_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_3_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_3_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_3_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_3_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_3_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_3_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_3_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_3_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_3_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_3_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_4_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_4_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_4_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_4_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_4_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_4_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_4_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_4_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_4_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_4_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_4_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_4_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_5_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_5_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_5_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_5_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_5_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_5_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_5_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_5_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_5_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_5_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_5_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_5_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_6_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_6_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_6_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_6_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_6_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_6_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_6_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_6_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_6_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_6_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_6_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_6_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_7_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_7_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_7_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_7_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_7_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_7_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_7_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_7_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_7_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_7_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_7_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_7_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_8_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_8_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_8_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_8_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_8_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_8_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_8_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_8_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_8_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_8_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_8_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_8_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_9_1down_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_9_1down_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_9_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_9_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_9_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_9_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_9_1up_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_9_1up_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_9_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_Eigen_Light_9_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_Eigen_Light_9_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_Eigen_Light_9_1up_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_extrapolation_1down_sf", &bjet_sf_MVX_FT_EFF_extrapolation_1down_sf, &b_bjet_sf_MVX_FT_EFF_extrapolation_1down_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_extrapolation_1down_ineff_sf", &bjet_sf_MVX_FT_EFF_extrapolation_1down_ineff_sf, &b_bjet_sf_MVX_FT_EFF_extrapolation_1down_ineff_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_extrapolation_1up_sf", &bjet_sf_MVX_FT_EFF_extrapolation_1up_sf, &b_bjet_sf_MVX_FT_EFF_extrapolation_1up_sf);
	fChain->SetBranchAddress("bjet_sf_MVX_FT_EFF_extrapolation_1up_ineff_sf", &bjet_sf_MVX_FT_EFF_extrapolation_1up_ineff_sf, &b_bjet_sf_MVX_FT_EFF_extrapolation_1up_ineff_sf);

	Notify();
}

Bool_t TauJetsSelection::Notify()
{
	// The Notify() function is called when a new file is opened. This
	// can be either for a new TTree in a TTree or when when a new TTree
	// is started when using PROOF. It is normally not necessary to make changes
	// to the generated code, but the routine can be extended by the
	// user if needed. The return value is currently not used.

	return kTRUE;
}

void TauJetsSelection::Show(Long64_t entry)
{
	// Print contents of entry.
	// If entry is not specified, print current entry
	if (!fChain) return;
	fChain->Show(entry);
}
Int_t TauJetsSelection::Cut(Long64_t entry)
{
	// This function may be called from Loop.
	// returns  1 if entry is accepted.
	// returns -1 otherwise.
	return 1;
}
#endif // #ifdef TauJetsSelection_cxx
