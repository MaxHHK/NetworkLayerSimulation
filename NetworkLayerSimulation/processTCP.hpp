//
//  processTCP.hpp
//  NetworkLayerSimulation
//
//  Created by Max on 2018/12/5.
//  Copyright © 2018 Max. All rights reserved.
//

#ifndef processTCP_hpp
#define processTCP_hpp

#include <stdio.h>

#include "cnformat.h"

class ProcessTCP {
    // Data
public:
    // function
    Data encapsulate(string fromUpLayer);
    Data disassemble(string currentLayerData);
    vector <DataFormat> interpret(Data);
};

#endif /* processTCP_hpp */
