//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#ifndef __SATNET_DVB_RCS_THRUPUTMETEROFFSET_H_
#define __SATNET_DVB_RCS_THRUPUTMETEROFFSET_H_

#include <omnetpp.h>

#include "inet/common/misc/ThruputMeter.h"

using namespace omnetpp;

class ThruputMeterOffset : public inet::ThruputMeter
{
  protected:
    virtual void handleMessage(cMessage *msg);
};

#endif
