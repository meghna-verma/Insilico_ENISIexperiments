#ifndef ENISI_EpithelialCellGroup
#define ENISI_EpithelialCellGroup

#include "agent/AgentStates.h"
#include "repast_hpc/Point.h"
#include "agent/GroupInterface.h"

namespace ENISI
{

class EpithelialCellGroup: public GroupInterface
{
public:
  EpithelialCellGroup(Compartment * pCompartment, const double & concentrations);
  virtual std::string classname() const {return "EpithelialCellGroup";}

protected:
  virtual void act(const repast::Point<int> &);
  virtual void intervene(const repast::Point<int> & pt);
  virtual void move();
  virtual void write(const repast::Point<int> & pt);

private:
  double p_EpiCellDeath;//Rule 11
  double p_EpiProliferation;//Rule 8
  double p_epith1damage;
  double p_epith17damage;
  double p_epiIL10h;//Rule 12
  double p_epiinfbactdamage;
  double p_epicyto;
  double p_EpiCap; 
};

} // namespace ENISI

#endif // ENISI_EpithelialCellGroup
