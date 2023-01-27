//Իրականացնել ծրագիր, որը գեներացնում է տասը հազար հատ պատահական թիվ և պահպանում այդ թվերը տեքստային ֆայլում։
//  main.cpp
//  random.cpp
//  Created by Artur Arakelyan on 26.01.23.
//

#include <iostream>
#include <cstdlib>
#include <fstream>
int main(){
    std::ofstream outdata;
    outdata.open("output.txt");
    for(int i = 0; i < 10001; i++)
    {
        std::cout << rand() << " \n";
        outdata << rand() << std::endl;
        
    }
    outdata.close();
    return 0;
}
