/*----- PROTECTED REGION ID(TangoAccessControlStateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id$";
//=============================================================================
//
// file :        TangoAccessControlStateMachine.cpp
//
// description : C++ source for the �name� and its alowed
//               methods for commands and attributes
//
// project :     Tango Access Control Management.
//
//
// Copyright (C) :      2004,2005,2006,2007,2008,2009,2010,2011,2012
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
// Revision 1.5  2011/02/11 14:21:42  pascal_verdier
// GetAccessForMutiIP  command added.
//
// Revision 1.4  2011/02/11 13:28:43  pascal_verdier
// Pogo-7 compatibility.
//
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================



#include <TangoAccessControl.h>
#include <TangoAccessControlClass.h>

/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::TangoAccessControlStateMachine.cpp

//================================================================
//  States  |  Description
//================================================================
//  ON      |  The MySql database handle is OK.
//  FAULT   |  The MySql database handle is not OK.


namespace TangoAccessControl_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_AddAddressForUser_allowed()
 *	Description : Execution allowed for AddAddressForUser attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_AddAddressForUser_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::FAULT)
	{
	/*----- PROTECTED REGION ID(TangoAccessControl::AddAddressForUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::AddAddressForUserStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_AddDeviceForUser_allowed()
 *	Description : Execution allowed for AddDeviceForUser attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_AddDeviceForUser_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::FAULT)
	{
	/*----- PROTECTED REGION ID(TangoAccessControl::AddDeviceForUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::AddDeviceForUserStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_CloneUser_allowed()
 *	Description : Execution allowed for CloneUser attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_CloneUser_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::FAULT)
	{
	/*----- PROTECTED REGION ID(TangoAccessControl::CloneUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::CloneUserStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_GetAccess_allowed()
 *	Description : Execution allowed for GetAccess attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_GetAccess_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for GetAccess command.
	/*----- PROTECTED REGION ID(TangoAccessControl::GetAccessStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::GetAccessStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_GetAccessForMultiIP_allowed()
 *	Description : Execution allowed for GetAccessForMultiIP attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_GetAccessForMultiIP_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for GetAccessForMultiIP command.
	/*----- PROTECTED REGION ID(TangoAccessControl::GetAccessForMultiIPStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::GetAccessForMultiIPStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_GetAddressByUser_allowed()
 *	Description : Execution allowed for GetAddressByUser attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_GetAddressByUser_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::FAULT)
	{
	/*----- PROTECTED REGION ID(TangoAccessControl::GetAddressByUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::GetAddressByUserStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_GetAllowedCommandClassList_allowed()
 *	Description : Execution allowed for GetAllowedCommandClassList attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_GetAllowedCommandClassList_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for GetAllowedCommandClassList command.
	/*----- PROTECTED REGION ID(TangoAccessControl::GetAllowedCommandClassListStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::GetAllowedCommandClassListStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_GetAllowedCommands_allowed()
 *	Description : Execution allowed for GetAllowedCommands attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_GetAllowedCommands_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::FAULT)
	{
	/*----- PROTECTED REGION ID(TangoAccessControl::GetAllowedCommandsStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::GetAllowedCommandsStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_GetDeviceByUser_allowed()
 *	Description : Execution allowed for GetDeviceByUser attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_GetDeviceByUser_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::FAULT)
	{
	/*----- PROTECTED REGION ID(TangoAccessControl::GetDeviceByUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::GetDeviceByUserStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_GetDeviceClass_allowed()
 *	Description : Execution allowed for GetDeviceClass attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_GetDeviceClass_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::FAULT)
	{
	/*----- PROTECTED REGION ID(TangoAccessControl::GetDeviceClassStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::GetDeviceClassStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_GetUsers_allowed()
 *	Description : Execution allowed for GetUsers attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_GetUsers_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::FAULT)
	{
	/*----- PROTECTED REGION ID(TangoAccessControl::GetUsersStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::GetUsersStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_RegisterService_allowed()
 *	Description : Execution allowed for RegisterService attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_RegisterService_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for RegisterService command.
	/*----- PROTECTED REGION ID(TangoAccessControl::RegisterServiceStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::RegisterServiceStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_RemoveAddressForUser_allowed()
 *	Description : Execution allowed for RemoveAddressForUser attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_RemoveAddressForUser_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::FAULT)
	{
	/*----- PROTECTED REGION ID(TangoAccessControl::RemoveAddressForUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::RemoveAddressForUserStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_RemoveDeviceForUser_allowed()
 *	Description : Execution allowed for RemoveDeviceForUser attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_RemoveDeviceForUser_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::FAULT)
	{
	/*----- PROTECTED REGION ID(TangoAccessControl::RemoveDeviceForUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::RemoveDeviceForUserStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_RemoveUser_allowed()
 *	Description : Execution allowed for RemoveUser attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_RemoveUser_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::FAULT)
	{
	/*----- PROTECTED REGION ID(TangoAccessControl::RemoveUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::RemoveUserStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoAccessControl::is_UnregisterService_allowed()
 *	Description : Execution allowed for UnregisterService attribute
 */
//--------------------------------------------------------
bool TangoAccessControl::is_UnregisterService_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for UnregisterService command.
	/*----- PROTECTED REGION ID(TangoAccessControl::UnregisterServiceStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	TangoAccessControl::UnregisterServiceStateAllowed
	return true;
}

}	//	End of namespace
