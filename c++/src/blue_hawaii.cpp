//
//  blue_hawaii.hpp
//  BlueHawaii
//
//  Created by Jason L Perry on 06/20/2013.
//  Copyright (c) 2013 Jason L Perry. All rights reserved.
//

#include "blue_hawaii.hpp"

BlueHawaii::BlueHawaii ()
{
  JsonBox::Object o;
  o["myName"] = JsonBox::Value(123);
  JsonBox::Value v(o);
  v.writeToStream(std::cout, true, true);
}


