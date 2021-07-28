#include <iostream>


const int GetInput(int *sales);
void CalcMethod1(int sales);
void CalcMethod2(int sales);
void CalcMethod3(int sales);


int main() {
    int totalSales;
    int WeeklySales = GetInput(&totalSales);
    if (WeeklySales == 0)
        return 0;
    CalcMethod1(WeeklySales);
    CalcMethod2(WeeklySales);
    CalcMethod3(WeeklySales);
}

const int GetInput(int *sales) {
    std::cout << "Enter your estimation weekly sales:\n";
    if (!(std::cin >> *sales)) {
        std::cout << "Please enter a number\n";
        return 0;
    } else {
        return *sales;
    }
}

void CalcMethod1(int sales) {
    std::cout << "$600 per week, no commission on sales\n";
}

void CalcMethod2(int sales) {
    const int hour = 40;
    // $7/hr + 10% commission on sales
    std::cout << "Total: " << (hour * 7.0) + (0.1 * sales) << '\n'; 
}

void CalcMethod3(int sales) {
    // no salary, 20% commissions and $20 for each pair of shoes sold
    std::cout << "Total: " << (0.2 * sales) + (20 * sales) << '\n';
}
