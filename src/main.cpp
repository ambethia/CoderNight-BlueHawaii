//
//  main.cpp
//  BlueHawaii
//
//  Created by Jason L Perry on 06/11/13.
//  Copyright (c) 2013 Jason L Perry. All rights reserved.
//

#include <iostream>

#include "jsonxx.h"

int main(int argc, const char * argv[])
{
  jsonxx::Object o;
  o.parse("{ \"foo\": 1 };");
  std::cout << o.json() << std::endl;
  return 0;
}
