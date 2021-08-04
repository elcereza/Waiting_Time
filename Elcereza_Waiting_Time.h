/*------------------------------------------------------------------------------
  This code uses the 'millis()' function as a basis to wait the desired 
  time to perform a task.
  Version: 1.0.0.0

  WebSite: https://elcereza.com/waiting_time
  Copyright © 2021 Elcereza
 
  This program is free software: you can redistribute it and / or modify it
  under the terms of the GNU General Public License as published by
  the Free Software Foundation version 3 of the License.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. see the
  GNU General Public License for more details.

  You must have received a copy of the GNU General Public License
  along with this program. Otherwise, see https://www.gnu.org/licenses/ 
 ----------------------------------------------------------------------------*/

#ifndef Elcereza_Waiting_Time.h
#define Elcereza_Waiting_Time.h

#include "Arduino.h"

class Waiting_Time
{
  public:
    Waiting_Time(int _m);
    bool wait(double t, int i);
    
  private:
    int a = 0;
    int*  p = new int[a];
    bool* c = new bool[a];
};

#endif