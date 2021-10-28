// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;
struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

void eachrowFiller(string country, string city, long population, double cost){
    std::cout<<std::setfill(' ')<<std::setw(20)<<std::left<<country
    <<std::setw(20)<<std::left<<city
    <<std::setw(20)<<std::left<<population
    <<std::setw(20)<<std::left<<cost<< std::endl;
}

int main()
{
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };

    // Unformatted display so you can see how to access the vector elements
//    std::cout << tours.title << std::endl;
//    for(auto country : tours.countries) {   // loop through the countries
//        std::cout << country.name << std::endl;
//        for(auto city : country.cities) {       // loop through the cities for each country
//            std::cout << "\t" << city.name
//                          << "\t" << city.population
//                          << "\t" << city.cost
//                          << std::endl;
//        }
//    }

    std::cout <<std::setfill('-')<<std::setw(81)<<'\n'<<std::endl;
//    std::cout <<std::resetiosflags(std::setfill)<<std::endl;
    
    std::cout<<std::setfill(' ')<<std::setw(20)<<std::left<<"Country"
    <<std::setw(20)<<std::left<<"Cities"
    <<std::setw(20)<<std::left<<"Population"
    <<std::setw(20)<<std::left<<"Price \n"<< std::endl;
    
//    
//    eachrowFiller(tours.countries[0].name, tours.countries[0].cities[0].name,tours.countries[0].cities[0].population,tours.countries[0].cities[0].cost);
//    
    
    for(auto country :tours.countries){
        string country_name{country.name};
        
        for(auto city : country.cities){
            eachrowFiller(country_name, city.name, city.population, city.cost);
            country_name = "            ";
        }
    }
    return 0;
}
