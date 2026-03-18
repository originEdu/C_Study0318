#pragma once
//#include "State.h"
//#include "Transition.h"

//위쪽에 인클루드안하고 아래처럼 선언함
//어딘가에 있을거야
//위쪽 인클루드는 cpp에서 인클루드한다
class UState;
class UTransition;

class UFSM
{
public:
	UFSM();
	~UFSM();

	//포인터로 찍는 이유는 동적으로 받기위해
	UState* States;
	UTransition* Transitions;
	
	void Process(int CurrentState, std::string Condition);
};

