#include "personen_service_impl_test.h"
#include "stdexcept"
person valid_person{ "Jane","Doe" };

TEST_F(personen_service_impl_test, speichern__vorname_zu_kurz__throws_personen_service_exception)
{
	try {
		person not_valid_person{ "J", "Doe" };
		object_under_test.speichern(not_valid_person);
		FAIL() << "unerwartet keine Exception";
	} catch (personen_service_exception& ex)
	{
		EXPECT_STREQ("Vorname zu kurz", ex.what());
	}
}

TEST_F(personen_service_impl_test, speichern__nachname_zu_kurz__throws_personen_service_exception)
{
	try {
		person not_valid_person{ "John", "D" };
		object_under_test.speichern(not_valid_person);
		FAIL() << "unerwartet keine Exception";
	}
	catch (personen_service_exception& ex)
	{
		EXPECT_STREQ("Nachname zu kurz", ex.what());
	}
}

TEST_F(personen_service_impl_test, speichern__Unerwuenschte_Person__throws_personen_service_exception)
{
	try {
		person not_valid_person{ "Attila", "Doe" };
		object_under_test.speichern(not_valid_person);
		FAIL() << "unerwartet keine Exception";
	}
	catch (personen_service_exception& ex)
	{
		EXPECT_STREQ("Antipath", ex.what());
	}
}


TEST_F(personen_service_impl_test, speichern__unexpected_exception_in_underlying_service__throws_personen_service_exception)
{
	try {
		EXPECT_CALL(repoMock, save_or_update(_)).WillOnce(Throw(std::out_of_range{ "Dummy"}));
		object_under_test.speichern(valid_person);
		FAIL() << "unerwartet keine Exception";
	}
	catch (personen_service_exception& ex)
	{
		EXPECT_STREQ("Fehler beim Speichern", ex.what());
	}
}

TEST_F(personen_service_impl_test, speichern__happy_day__person_passed_to_repository)
{
	
		// Arrange
		EXPECT_CALL(repoMock, save_or_update(valid_person));
		object_under_test.speichern(valid_person);
		
	
}