//
//  processIP.hpp
//  NetworkLayerSimulation
//
//  Created by Max on 2018/12/5.
//  Copyright © 2018 Max. All rights reserved.
//

#ifndef processIP_hpp
#define processIP_hpp

#include <stdio.h>

#include "cnformat.h"

class ProcessIP {
    // Data
public:
    // function
    Data encapsulate(string fromUpLayer);
    Data disassemble(string currentLayerData);
    vector <DataFormat> interpret(Data);
};

#endif /* processIP_hpp */
