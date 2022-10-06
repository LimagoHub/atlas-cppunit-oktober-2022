#pragma once
#include "../persistence/person.h"
#include "../persistence/personen_repository.h"

class personen_service_impl {

	personen_repository& repo;


public:
	personen_service_impl(personen_repository& repo)
		: repo(repo)
	{
	}


	/*
	 *	Vorname < 2 -> PSE
	 *	Nachname < 2 -> PSE
	 *
	 *	Attila -> PSE
	 *
	 *	Alle Technische Exceptions -> PSE
	 *
	 *	Happy Day -> person an Save Methode übergeben
	 * 
	 */
	void speichern(person &person_) const
	{
		
	}
}
