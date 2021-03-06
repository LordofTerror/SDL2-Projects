#pragma once
#include <cstdint>
class Component
{
public:
	//Constructor
	//Lower the update order, the earlier the component updates)
	Component(class Actor* owner, int updateOrder=100);


	//Destructor
	virtual ~Component();
	
	//Update this component by deltaTime);
	virtual void Update(float deltaTime);

	virtual void ProcessInput(const uint8_t* keyState) {}

	int GetUpdateOrder() const
	{
		return mUpdateOrder;
	}

	
protected:
	//Owning actor

	class Actor* mOwner;

	//Update order of component

	int mUpdateOrder;

};
