//
//  main.cpp
//  BlueHawaii
//
//  Created by Jason L Perry on 06/11/13.
//  Copyright (c) 2013 Jason L Perry. All rights reserved.
//

#include <iostream>

#include "JsonBox.h"

int main(int argc, const char * argv[])
{
  JsonBox::Object o;
  o["myName"] = JsonBox::Value(123);
  JsonBox::Value v(o);
  v.writeToStream(std::cout, true, true);
  return 0;
}
