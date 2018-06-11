/*
    Copyright (C) 2017  GitHub Account Name : SunDontShine

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
//                 Class      : Sensor.h
//                 Description: Abstract sensor class  to be implemented by all
//                              sensor devices
//-----------------------------------------------------------------------------

*/

#include <string>

class Sensor
{
    public:
	    Sensor(int id, std::string sensorModel);
        virtual bool Init() = 0;
	    virtual std::string sToJSONString() = 0;
	    virtual bool SendData(std::string *sResults) = 0;		
		virtual bool ReadData(std::string *sResults) = 0;
		
		
	protected:
	    int m_nDeviceId;
	    //identifies this device
	    std::string sModel;
	    //the model of this device

	   double m_fMaxRangeValue;
	   double m_fMinRangeValue;
};
