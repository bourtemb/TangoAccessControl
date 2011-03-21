/*----- PROTECTED REGION ID(AccessControl.cpp) ENABLED START -----*/
static const char *RcsId = "$Id$";
//=============================================================================
//
// file :        AccessControl.cpp
//
// description : C++ source for the AccessControl and its commands.
//               The class is derived from Device. It represents the
//               CORBA servant object which will be accessed from the
//               network. All commands which can be executed on the
//               AccessControl are implemented in this file.
//
// project :     Access Control abstract class.
//
//
// Copyright (C) :      2004,2005,2006,2007,2008,2009,2010,2011
//						European Synchrotron Radiation Facility
//                      BP 220, Grenoble 38043
//                      FRANCE
//
// This file is part of Tango.
//
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
//
// $Author$
//
// $Revision$
// $Date$
//
// SVN only:
// $HeadURL:  $
//
// CVS only:
// $Source$
// $Log$
// Revision 1.2  2011/02/11 14:20:27  pascal_verdier
// GetAccessForMutiIP  command added.
//
// Revision 1.1  2011/02/11 13:43:12  pascal_verdier
// Pogo-7 compatibility.
//
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#include <AccessControl.h>
#include <AccessControlClass.h>

/*----- PROTECTED REGION END -----*/


/**
 *	AccessControl class description:
 *	This class defines how to manage the TANGO access control.
 *	It interfaces commands for tool to defines access for users, devices and IP addresses.
 *	It interfaces also commands used by client API to check access for specified user, device and address.
 *	And it insterfaces to register and unregister it as TANGO service.
 */

//================================================================
//
//  The following table gives the correspondence
//  between command and method names.
//
//  Command name          |  Method name
//----------------------------------------------------------------
//  State                 |  dev_state
//  Status                |  dev_status
//  AddAddressForUser     |  Inherited (no method)
//  AddDeviceForUser      |  Inherited (no method)
//  CloneUser             |  Inherited (no method)
//  GetAccess             |  Inherited (no method)
//  GetAccessForMultiIP   |  Inherited (no method)
//  GetAddressByUser      |  Inherited (no method)
//  GetAllowedCommands    |  Inherited (no method)
//  GetDeviceByUser       |  Inherited (no method)
//  GetDeviceClass        |  Inherited (no method)
//  GetUsers              |  Inherited (no method)
//  RegisterService       |  Inherited (no method)
//  RemoveAddressForUser  |  Inherited (no method)
//  RemoveDeviceForUser   |  Inherited (no method)
//  RemoveUser            |  Inherited (no method)
//  UnregisterService     |  Inherited (no method)
//================================================================

namespace AccessControl_ns
{
	/*----- PROTECTED REGION ID(AccessControl::namespace_starting) ENABLED START -----*/

	//	static initializations

	/*----- PROTECTED REGION END -----*/	//	AccessControl::namespace_starting



//--------------------------------------------------------
/**
 *	Method      : AccessControl::AccessControl()
 *	Description : Constructors for a Tango device
 *	              implementing the classAccessControl
 */
//--------------------------------------------------------
AccessControl::AccessControl(Tango::DeviceClass *cl, string &s)
 	: Tango::Device_4Impl(cl, s.c_str())
{
	/*----- PROTECTED REGION ID(AccessControl::constructor_1) ENABLED START -----*/

	init_device();

	/*----- PROTECTED REGION END -----*/	//	AccessControl::constructor_1
}
//--------------------------------------------------------
AccessControl::AccessControl(Tango::DeviceClass *cl, const char *s)
 	: Tango::Device_4Impl(cl, s)
{
	/*----- PROTECTED REGION ID(AccessControl::constructor_2) ENABLED START -----*/

	init_device();

	/*----- PROTECTED REGION END -----*/	//	AccessControl::constructor_2
}
//--------------------------------------------------------
AccessControl::AccessControl(Tango::DeviceClass *cl, const char *s, const char *d)
 	: Tango::Device_4Impl(cl, s, d)
{
	/*----- PROTECTED REGION ID(AccessControl::constructor_3) ENABLED START -----*/

	init_device();

	/*----- PROTECTED REGION END -----*/	//	AccessControl::constructor_3
}


//--------------------------------------------------------
/**
 *	Method      : AccessControl::delete_device()()
 *	Description : will be called at device destruction or at init command
 */
//--------------------------------------------------------
void AccessControl::delete_device()
{
	/*----- PROTECTED REGION ID(AccessControl::delete_device) ENABLED START -----*/

	//	Delete device allocated objects

	/*----- PROTECTED REGION END -----*/	//	AccessControl::delete_device
	
}


//--------------------------------------------------------
/**
 *	Method      : AccessControl::init_device()
 *	Description : //	will be called at device initialization.
 */
//--------------------------------------------------------
void AccessControl::init_device()
{
	DEBUG_STREAM << "AccessControl::init_device() create device " << device_name << endl;

	
	
	/*----- PROTECTED REGION ID(AccessControl::init_device) ENABLED START -----*/

	//	Initialize device

	/*----- PROTECTED REGION END -----*/	//	AccessControl::init_device
}



//--------------------------------------------------------
/**
 *	Method      : AccessControl::always_executed_hook()
 *	Description : method always executed before any command is executed
 */
//--------------------------------------------------------
void AccessControl::always_executed_hook()
{
	INFO_STREAM << "AccessControl::always_executed_hook()  " << device_name << endl;
	/*----- PROTECTED REGION ID(AccessControl::always_executed_hook) ENABLED START -----*/

	//	code always executed before all requests

	/*----- PROTECTED REGION END -----*/	//	AccessControl::always_executed_hook
}








//========================================================
//	Command execution methods
//========================================================


	/*----- PROTECTED REGION ID(AccessControl::namespace_ending) ENABLED START -----*/

	//	Additional Methods

	/*----- PROTECTED REGION END -----*/	//	AccessControl::namespace_ending
} //	namespace
