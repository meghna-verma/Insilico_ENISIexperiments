#ifndef ENISI_MSM_AGENT_TCELLGROUP_H
#define ENISI_MSM_AGENT_TCELLGROUP_H


#include "agent/AgentStates.h"
#include "repast_hpc/Point.h"
#include "agent/GroupInterface.h"

namespace ENISI
{

class TcellGroup: public GroupInterface
{
public:
 // TcellGroup(Compartment * pCompartment, const double & concentrations);
  TcellGroup(Compartment * pCompartment, const double & NaiveTConcentrations);
		                         
  
  
  virtual std::string classname() const {return "TcellGroup";}

protected:
  virtual void act(const repast::Point<int> &);
  virtual void intervene(const repast::Point<int> &);
  virtual void move();
  virtual void write(const repast::Point<int> & pt);

private:
  double  p_Th17death;
  double  p_naiveTcelldeath;
  double  p_iTregdeath;
  double  p_Th1death;
  double  p_Trdeath;
  double  p_nTtoTr;
  double  p_nTtoiTreg;
  double  p_nTtoTh17;
  double  p_nTtoTh1;
  double  p_rule31a; 
  double  p_Th17toiTreg;
  double  p_iTregtoTh17;
  double  p_tcellmove;
  double  p_allTrep;
  double  p_TotalTcap;
  double  p_nTrep;
  double  p_Th1cyto;	
  double  p_Th17cyto;
  double  p_TroriTregcyto;	 
  double  p_IL17;
  double  p_IFNg;
  double  p_IL10;
  double  p_IL21;
  double  p_IL6;
  double  p_TGFb;
  double  p_IL12;
};

} // namespace ENISI

#endif
