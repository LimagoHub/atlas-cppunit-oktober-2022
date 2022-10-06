class MockCalculator : public Calculator {
 public:
  MOCK_METHOD(double, add, (double a, double b), (override));
};
