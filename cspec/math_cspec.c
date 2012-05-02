#include "cspec_helper.h"
#include <math.h>

void math_test_suit(){
  it("should be equal to 9"){
    should("beEqualD", pow(3, 2), 9.0);
  }

  it("should fail with bad matcher"){
    should("beEqual", pow(2, 2), 4);
  }
}
