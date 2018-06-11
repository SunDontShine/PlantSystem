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
//                 Class      : DHT22.h
//                 Description: Temperature and humidity sensor
//-----------------------------------------------------------------------------
*/


//#include "HumiditySensor.h"
#include "TemperatureSensor.h"

//MACROS
#include <string>


class DHT22 : public TemperatureSensor//, public HumiditySensor
{
	public:
	    DHT22(int nId, std::string sModel);
		DHT22();

        bool Init();
	    std::string sToJSONString();
	    bool SendData(std::string *sResults);		
		bool ReadData(std::string *sResults);
	    
		//TemperatureSensor functions
	    double ReadTemperature();
	    double Fahrenheit(); //inline
		double Celsius();//inline


		
		//HumiditySensor
	    //double CalculateHumidity();
	    //double ReadHumidity();
		
    private:
	    double CalculateTemp();
		int m_nDeviceId;
	    //identifies this device
	    std::string sModel;
};
