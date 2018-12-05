//
//  UserInterface.hpp
//  NetworkLayerSimulation
//
//  Created by Max on 2018/12/5.
//  Copyright © 2018 Max. All rights reserved.
//

#ifndef UserInterface_hpp
#define UserInterface_hpp

#include <stdio.h>

#include "cnformat.h"
#include "processTCP.hpp"
#include "processIP.hpp"
#include "processMac.hpp"

// Interface class
class Interface {
public:
    // Data:
    // Function:
    bool moveToCommand(void);
    Interface () {}
};

#endif /* UserInterface_hpp */
