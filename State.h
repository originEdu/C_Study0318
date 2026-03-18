#pragma once
#include<string>
class UState
{
public:
	UState();
	~UState();
	
	//C++에서는 멤버 변수
	//다른 곳에서는 프로퍼티 라고 부른다
	int ID;
	std::string StateName;
};

