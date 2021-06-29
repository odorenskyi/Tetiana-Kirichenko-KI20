#include "modules_kirichenko.h"
#include <cmath>

double s_calculation(float x, float y, float z)
{
    float S = 1.0/2.0 * pow(x,2) - sqrt(abs(pow(y + z, 2) - pow(x,5))) - log(abs(sin(z)));
        S = int(S*100 + 0.5)/100.0;
}
