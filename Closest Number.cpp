#include <iostream>
#include <cmath>

int main() {

    std::cout.precision( 10 );

    int T;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        double a, b, x;
        std::cin >> a >> b >> x;

        std::cout << round(exp(b * log(a) - log(x)))*x << std::endl;
    }
    return 0;
}
