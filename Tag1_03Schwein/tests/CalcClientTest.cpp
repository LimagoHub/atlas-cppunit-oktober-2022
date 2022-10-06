#include "CalcClientTest.h"
using namespace testing;
TEST_F(CalcClientTest,xxx)
{


	// ON_CALL(calculatorMock, add(_, _)).WillByDefault(Return(42));
	// ON_CALL(calculatorMock, add(5.0, _)).WillByDefault(Return(60));
	// Record mode
	EXPECT_CALL(calculatorMock, add(3.0, 4.0)).WillRepeatedly(Return(47.11));

	// Replay-Mode
	object_under_test.go();
}