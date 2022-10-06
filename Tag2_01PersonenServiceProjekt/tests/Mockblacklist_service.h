#pragma once

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../source/service/blacklist_service.h"
#include "../source/persistence/person.h"

class Mockblacklist_service : public blacklist_service {
 public:
  MOCK_METHOD(bool, is_blacklist_member, (const person& person), (override));
 
};
