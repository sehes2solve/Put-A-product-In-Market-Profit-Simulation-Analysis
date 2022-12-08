#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <cstdlib>


using namespace std;

int main()
{
    int c1;
    double c2, x, profit;
    default_random_engine cost;
    uniform_real_distribution<double> distribution(80,100); ///uniform generation for c2
    random_device rd;
    mt19937 gen(rd());
    normal_distribution<double> demand(15000,4500); ///normal distribution for x
    srand(time(0));
    for (int i=0; i<1000; i++)
    {
        double random = (double)rand() / (double)RAND_MAX;
        ///hena feeh l if conditions b2a
        if (random <0.1)
        {
            c1 = 43;
        }
        else if(random < 0.3)
        {
            c1 = 44;
        }
        else if(random < 0.7)
        {
            c1=45;
        }
        else if(random < 0.9)
        {
            c1=46;
        }
        else
        {
            c1 = 47;
        }

        c2 = distribution(cost);
        x = demand(gen);
        profit = ((249- c1 - c2)*x)-1000000; ///the equation
        cout << profit <<endl;

    }
    return 0;
}
