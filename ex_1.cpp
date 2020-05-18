#include <iostream>
#include <chrono>
using namespace std;

int find_sum_3a_5b_below_1000_attempt_0()
{
    int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        if ( i % 3 == 0 || i % 5 == 0 )
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
	clock_t time_req;
    int outcome;
    auto start = std::chrono::high_resolution_clock::now(); 
    outcome = find_sum_3a_5b_below_1000_attempt_0();
    auto stop = std::chrono::high_resolution_clock::now(); 
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start); 
    std::cout << "The outcome is " << outcome << "!\n";
    time_req = clock() - time_req;
    cout << "It took " << duration.count() << " microseconds" << endl;

}

