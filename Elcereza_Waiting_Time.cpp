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

#include "Arduino.h"
#include "Elcereza_Waiting_Time.h"

Waiting_Time::Waiting_Time(int _m)
{
  a = _m;
  for(int i = 0; i < _m; ++i)
    c[i] = false;
}

bool Waiting_Time::wait(double t, int i){
  int m = millis();  
  if(((m - p[i]) > t && (m - p[i]) < (t * 1.01)) || !c[i])
  {
    p[i] = millis();
    if(!c[i])
    {
      c[i] = true;
      return false;
    }
    else
      return true;
  }
  else if((m - p[i]) > (t * 1.01))
  {
    p[i] = millis();
    return false;
  }
  else
    return false;
}


