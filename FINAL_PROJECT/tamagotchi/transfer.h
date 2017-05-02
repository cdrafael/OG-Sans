#include "egg.h"
#include "baby.h"
#include "kid.h"
#include "teen.h"
#include "adult.h"
#include "parent.h"

Baby hatch_egg(Egg e);
Kid baby_to_kid(Baby b);
Teen kid_to_teen(Kid k);
Adult teen_to_adult(Teen t);
Parent adult_to_parent(Adult a);
void final_days(Parent p);

