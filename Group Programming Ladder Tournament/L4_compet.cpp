#include <iostream>
using
int main()
{
    int math,phys,chem,math_and_phys,phys_and_chem,math_and_chem,,all_three,all_person;
    cin>>all_person>>math>>phys>>chem>>math_and_phys>>math_and_chem>>phys_and_chem>>all_three;
    int only_math = math - math_and_phys - math_and_chem + all_three;
    int only_phys = phys - math_and_phys - phys_and_chem + all_three;
    int only_chem = chem - math_and_chem - phys_and_chem + all_three;
    
}