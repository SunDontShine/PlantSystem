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

DHT22.h
*/

#include "Sensor.h"
#include "HumiditySensor.h"
#include "TemperatureSensor.h"

//MACROS



class DHT22 : public Sensor, public TemperatureSensor, public HumiditySensor
{

	public:
	    DHT22();
	    //constructor
	    std::string toJSONString();
	    void sendData(); 
	    //Sensor functions
	    void calculateTemp();
	    double getTemp();
	    void setTemp();
	    double toFahrenheit();	
	    //TemperatureSensor functions
	    void calculateHumidity();
	    double getHumidity();
	    void setHumidity();	
	    //HumiditySensor

};
