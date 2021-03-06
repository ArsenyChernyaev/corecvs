/**
 * \file draw3dViMouseParameters.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include <vector>
#include <stddef.h>
#include "draw3dViMouseParameters.h"

/**
 *  Looks extremely unsafe because it depends on the order of static initialization.
 *  Should check standard if this is ok
 *
 *  Also it's not clear why removing "= Reflection()" breaks the code;
 **/

namespace corecvs {
template<>
Reflection BaseReflection<Draw3dViMouseParameters>::reflection = Reflection();
template<>
int BaseReflection<Draw3dViMouseParameters>::dummy = Draw3dViMouseParameters::staticInit();
} // namespace corecvs 

SUPPRESS_OFFSET_WARNING_BEGIN

int Draw3dViMouseParameters::staticInit()
{

    ReflectionNaming &nameing = naming();
    nameing = ReflectionNaming(
        "draw 3d ViMouse Parameters",
        "draw 3d ViMouse Parameters",
        ""
    );
     

    fields().push_back(
        new DoubleField
        (
          Draw3dViMouseParameters::REDDIST_ID,
          offsetof(Draw3dViMouseParameters, mRedDist),
          0,
          "redDist",
          "redDist",
          "redDist"
        )
    );
    fields().push_back(
        new DoubleField
        (
          Draw3dViMouseParameters::BLUEDIST_ID,
          offsetof(Draw3dViMouseParameters, mBlueDist),
          1000,
          "blueDist",
          "blueDist",
          "blueDist"
        )
    );
    fields().push_back(
        new DoubleField
        (
          Draw3dViMouseParameters::FLOWZOOM_ID,
          offsetof(Draw3dViMouseParameters, mFlowZoom),
          1,
          "flowZoom",
          "flowZoom",
          "flowZoom"
        )
    );
    fields().push_back(
        new EnumField
        (
          Draw3dViMouseParameters::POINT_COLOR_TYPE_ID,
          offsetof(Draw3dViMouseParameters, mPointColorType),
          0,
          "Point Color Type",
          "Point Color Type",
          "Point Color Type",
           NULL
        )
    );
    fields().push_back(
        new EnumField
        (
          Draw3dViMouseParameters::FLOW_COLOR_TYPE_ID,
          offsetof(Draw3dViMouseParameters, mFlowColorType),
          0,
          "Flow Color Type",
          "Flow Color Type",
          "Flow Color Type",
           NULL
        )
    );
   return 0;
}

SUPPRESS_OFFSET_WARNING_END


