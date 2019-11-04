#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <Input.h>
#include <PlayerFSM.h>
#include <Debug.h>

class State
{
public:
	virtual void handleInput() {}

	virtual void update() {}

	virtual void idle(PlayerFSM* a)
	{
		DEBUG_MSG("State::Idling");
	}
	virtual void walkRight(PlayerFSM* a)
	{
		DEBUG_MSG("State::Walking right");
	}
	virtual void walkLeft(PlayerFSM* a)
	{
		DEBUG_MSG("State::Walking left");
	}
	virtual void crouching(PlayerFSM* a)
	{
		DEBUG_MSG("State::Crouching");
	}
	virtual void jumping(PlayerFSM* a)
	{
		DEBUG_MSG("State::Jumping");
	}
	virtual void falling(PlayerFSM* a)
	{
		DEBUG_MSG("State::Falling");
	}
	virtual void landing(PlayerFSM* a)
	{
		DEBUG_MSG("State::Landing");
	}
};

#endif // ! ANIMATION_H

