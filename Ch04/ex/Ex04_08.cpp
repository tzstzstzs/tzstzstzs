#include "std_lib_facilities.h"

int main(){

    int square = 1, square_thousand = 64, square_million = 64, square_billion = 64;
    int current_grain = 1;
    int total_grain = 1;

    for(square = 2; square <= 64; ++square){
        
        current_grain *= 2;
        total_grain += current_grain;

        cout << "Square: " << square << "\n";
        cout << "Current grain: " << current_grain << "\n";
        cout << "Total grain: " << total_grain << "\n\n";

        if (total_grain > 1000 && square < square_thousand)
            square_thousand = square;

        else if (total_grain > 1000000 && square < square_million)
            square_million = square;
        

        else if (total_grain > 1000000000 && square < square_billion){
            square_billion = square;
            break;
        }
    }

    cout << square_thousand << " squares are required to have one thousand grains of rice.\n\n";

    cout << square_million << " squares are required to have one million grains of rice.\n\n";

    cout << square_billion << " squares are required to have one billion grains of rice.\n\n";

    return 0;
}
