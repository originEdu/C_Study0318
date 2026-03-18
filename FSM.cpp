#include "FSM.h"
#include "State.h"
#include "Transition.h"
#include<vector>
#include<string>



UFSM::UFSM()
{
	States = new UState[4];
	Transitions = new UTransition[5];
	std::vector<std::string> StateNames = { "배회", "추격", "공격", "죽음" };
	for (int i = 0; i < 4; i++)
	{
		States[i].ID = i + 1;
		States[i].StateName = StateNames[i];
	}
	//Transitions[0] = UTransition(1,"적발견",2);
	/*{2,"적놓침",1},{2,"사정거리접근",3},{3,"사정거리이탈",2},{3,"HP없음",4}*/
}

UFSM::~UFSM()
{
	delete[] States;
	States = nullptr;
	delete[] Transitions;
	Transitions = nullptr;
}

void UFSM::Process(int CurrentState, std::string Condition)
{
}
