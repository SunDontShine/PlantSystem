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
//                 Class      : TemperatureSensor.h
//                 Description: An abstract temperature sensor class to be
//                              implemented by all temperature sensors
//-----------------------------------------------------------------------------

*/
#include "Sensor.h"

class TemperatureSensor : public Sensor
{
	public:
        //constructor
	    TemperatureSensor(int nId, std::string sModel);
        virtual bool Init() = 0;
	    virtual std::string sToJSONString() = 0;
	    virtual bool SendData(std::string *sResults) = 0;		
		virtual bool ReadData(std::string *sResults) = 0;
		
	    virtual double ReadTemperature() = 0;
	    virtual double Fahrenheit() = 0;
		virtual double Celsius() = 0;
		
	protected:
	    //int nDeviceID;
	    //std::string sModel;
	    double m_fMaxRangeValue;
	    double m_fMinRangeValue;
	
};
