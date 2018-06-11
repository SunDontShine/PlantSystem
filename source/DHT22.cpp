/*    
    Copyright (C) 2017	GitHub Account Name : SunDontShine

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

//-----------------------------------------------------------------------------
//                 Class      : DHT22.cpp
//                 Description: Temperature and humidity sensor implementation
//-----------------------------------------------------------------------------
*/

#include "../headers/DHT22.h"

DHT22::DHT22(int nId, std::string sModel) : TemperatureSensor(nId, sModel)
{
};



bool DHT22::Init()
{
 return true;
} 

 std::string DHT22::sToJSONString()
 {
   return std::string();
 }
 
 bool DHT22::SendData(std::string *sResults)
 {
   return true;
 }
 
bool DHT22::ReadData(std::string *sResults)
{
  return true;
}

double DHT22::ReadTemperature()
{
  return 123.3;
}

//TemperatureSensor functions
double DHT22::Fahrenheit()
{
  return 12.3;
}

double DHT22::Celsius()
{
  return 12.3;
}
		
		// //HumiditySensor
// double DHT22::CalculateHumidity()
// {
  // return 12.3;
// }
// double DHT22::ReadHumidity()
// {
  // return 12.3;
// }
		

// double DHT22::CalculateTemp()
// {
  // return 12.3;
// }
