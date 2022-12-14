#ifndef AUTO_V_H
#define AUTO_V_H

#include <iostream>
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>
#include <string>
class auto_v {
    private:
    protected:
    public:
        int numPassengers;
        double safetyScore;
        double avgAge;
        std::string name;
        auto_v();
        auto_v(int, double);
        void setPassengers(int n);
        void setName(std::string s);
        void setScore(double s);
        void setAge(double a);
        int getPassengers();
        double getScore();
        std::string getName();
        double getAge();
        void printInfo();
        Json::Value dump2JSON();
        void JSON2Object(Json::Value); 
        

};
#endif