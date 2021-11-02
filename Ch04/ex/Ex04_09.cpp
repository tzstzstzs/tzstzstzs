#include "std_lib_facilities.h"

int main(){

    int square = 1, square_thousand = 64, square_million = 64, square_billion = 64;
    int current_grain = 1;
    int total_grain_int = 1;
    double total_grain_double = 1;

    for(square = 2; square <= 64; ++square){
        
        current_grain *= 2;
        total_grain_int += current_grain;
        total_grain_double += current_grain;

        cout << "Square: " << square << "\n";
        cout << "Current grain: " << current_grain << "\n";
        cout << "Total grain_int: " << total_grain_int << "\n";
        cout << "Total total_grain_double: " << total_grain_double << "\n\n";

        if (total_grain_double > 1000 && square < square_thousand)
            square_thousand = square;

        else if (total_grain_double > 1000000 && square < square_million)
            square_million = square;
        

        else if (total_grain_double > 1000000000 && square < square_billion)
            square_billion = square;
    
    }

    cout << square_thousand << " squares are required to have one thousand grains of rice.\n\n";

    cout << square_million << " squares are required to have one million grains of rice.\n\n";

    cout << square_billion << " squares are required to have one billion grains of rice.\n\n";

    return 0;
}
