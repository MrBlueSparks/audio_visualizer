#include <iostream>
#include <cmath>
#include <cstdlib>
#include <random>
using namespace std;


#define M_PI 3.14159265358979323846
//example output {"sensor_id": 1, "temp": 45.2, "rpm": 1200, "timestamp": 1714077000}
const int base_temp = 15;

int simulated_temp(){
   int degrees = 90;
   double x = degrees * (M_PI / 180.0);
   std::random_device dev;
   std::mt19937 rng(dev());
   std::uniform_real_distribution<double> distrib(-0.5, 0.5);
   double random_noise = std::trunc(distrib(rng) * 10)/10;
   double amplitude = 1.0;
   return base_temp + sin(x) * amplitude + random_noise;

 
}

int main(){
  for (int i = 0; i < 10; ++i){
    std::cout << simulated_temp() << endl;
  }
  
  return 0;
}


