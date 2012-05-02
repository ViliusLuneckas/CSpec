CSpec
=====

funny RSpec clone in C!!!


## Example

Testing example:
```c
  it("should create new empty array"){
    Array * subject = Array_new();
    should("beEqual", subject->length, 0);
  }

  it("should push one element to array"){
    Array * subject = Array_new();
    long a = 14;
    Array_push(subject, a);
    should("beEqual", subject->length, 1);
  }
  
  it("should retrieve element"){
    Array * subject = Array_new();
    long a = 14;
    Array_push(subject, a);
    should("beEqual", Array_at(subject, 0), 14);
  }
```
To test, type:

    $ make

  
    $ ./cspec_test_suit
