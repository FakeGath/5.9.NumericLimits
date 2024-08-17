#include <iostream>
#include <limits>

int main(){

std::cout<<"The range for Short is from " <<std::numeric_limits<short>::min()<< " to " <<std::numeric_limits<short>::max()<<std::endl;

std::cout<<"The range for unsigned short is from "<<std::numeric_limits<unsigned short>::min()<< " to " << std::numeric_limits<unsigned short>::max()<<std::endl;

std::cout<<"The range for int is from " <<std::numeric_limits<int>::min()<< " to " <<std::numeric_limits<int>::max()<<std::endl;

std::cout<<"The range for unsigned int is from "<<std::numeric_limits<unsigned int>::min()<< " to " << std::numeric_limits<unsigned int>::max()<<std::endl;

std::cout<<"The range for long is from " <<std::numeric_limits<long>::min()<< " to " <<std::numeric_limits<long>::max()<<std::endl;

std::cout<<"The range for unsigned long is from "<<std::numeric_limits<unsigned long>::min()<< " to " << std::numeric_limits<unsigned long>::max()<<std::endl;

std::cout<<"The range for float is from " <<std::numeric_limits<float>::min()<< " to " <<std::numeric_limits<float>::max()<<std::endl;

std::cout<<"The range (lowest)for float is from "<<std::numeric_limits<float>::lowest()<< " to " << std::numeric_limits<float>::max()<<std::endl;

std::cout<<"The range for Double is from " <<std::numeric_limits<double>::min()<< " to " <<std::numeric_limits<double>::max()<<std::endl;

std::cout<<"The range (lowest)for Double is from "<<std::numeric_limits<double>::lowest()<< " to " << std::numeric_limits<double>::max()<<std::endl;

std::cout<<"The range for char is from " <<std::numeric_limits<char>::min()<< " to " <<std::numeric_limits<char>::max()<<std::endl;

std::cout<<"The range for unsigned char is from "<<std::numeric_limits<unsigned char>::min()<< " to " << std::numeric_limits<unsigned char>::max()<<std::endl;


}       