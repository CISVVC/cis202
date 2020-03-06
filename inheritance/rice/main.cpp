#include<vector>
#include "snap.h"
#include "crackle.h"
#include "pop.h"


int main()
{
   std::vector<Rice*> bowl;

   bowl.push_back(new Snap);
   bowl.push_back(new Crackle);
   bowl.push_back(new Pop);

   for(Rice* r : bowl)
      r->talk();


   return 0;
}
