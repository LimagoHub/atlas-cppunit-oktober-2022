#pragma once
#pragma once
#include "../persistence/person.h"
class blacklist_service
{
public:
	virtual bool is_blacklist_member(const person &possible_antipath) = 0 ;
};
