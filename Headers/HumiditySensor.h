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

HumiditySensor.h
*/

class HumiditySensor
{

	protected:
	    double humidity;

	public:
	    HumiditySensor(double humid) : humidity(humid)
	    {
	    }
	    //constructor
	    virtual void calculateHumidity() = 0;
	    virtual double getHumidity() = 0;
	    virtual void setHumidity() = 0;
	
};