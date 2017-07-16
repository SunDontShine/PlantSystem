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

Sensor.h
Abstract class to be implemented by all sensor devices
*/

#include <string>

class Sensor
{

	protected:
	    int deviceID;
	    //identifies this device

	    std::string model;
	    //the model of this device

	    int category[];
	    //category signifies readings covered by this sensor
	    //revert to readme.txt for values representing cata categories

	public:
	    Sensor(int id, std::string sensorModel);
	    //constructor

	    virtual std::string toJSONString() = 0;
	    //translates on members to JSON format

	    virtual void sendData() = 0;
	    //sends data to server;

};
