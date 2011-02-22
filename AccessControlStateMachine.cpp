/*----- PROTECTED REGION ID(AccessControlStateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id$";
//=============================================================================
//
// file :        AccessControlStateMachine.cpp
//
// description : C++ source for the �name� and its alowed
//               methods for commands and attributes
//
// project :     cess Control abstract class.
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
// Revision 1.3  2011/02/11 13:43:12  pascal_verdier
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


/*
 * AccessControl states description:
 *
 * ON :	The MySql database handle is OK. 
 * FAULT :	The MySql database handle is not OK. 
 */

namespace AccessControl_ns
{

//=================================================
//		Attributes Allowed Methods
//=================================================


	/*----- PROTECTED REGION ID(AccessControl::are_dynamic_attributes_allowed) ENABLED START -----*/

	//	Add your code to check if dynamic attributes are alowed

	/*----- PROTECTED REGION END -----*/	//	AccessControl::are_dynamic_attributes_allowed


//=================================================
//		Commands Allowed Methods
//=================================================


//--------------------------------------------------------
/**
 *	Method      : AccessControl::is_AddAddressForUserState_allowed()
 *	Description : Execution allowed for AddAddressForUser command.
 */
//--------------------------------------------------------

bool AccessControl::is_AddAddressForUser_allowed(const CORBA::Any &any)
{
	if (	//	Compare device state with not allowed states for command 
		get_state() == Tango::FAULT)
	{

	/*----- PROTECTED REGION ID(AccessControl::AddAddressForUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::AddAddressForUserStateAllowed

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AccessControl::is_AddDeviceForUserState_allowed()
 *	Description : Execution allowed for AddDeviceForUser command.
 */
//--------------------------------------------------------

bool AccessControl::is_AddDeviceForUser_allowed(const CORBA::Any &any)
{
	if (	//	Compare device state with not allowed states for command 
		get_state() == Tango::FAULT)
	{

	/*----- PROTECTED REGION ID(AccessControl::AddDeviceForUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::AddDeviceForUserStateAllowed

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AccessControl::is_CloneUserState_allowed()
 *	Description : Execution allowed for CloneUser command.
 */
//--------------------------------------------------------

bool AccessControl::is_CloneUser_allowed(const CORBA::Any &any)
{
	if (	//	Compare device state with not allowed states for command 
		get_state() == Tango::FAULT)
	{

	/*----- PROTECTED REGION ID(AccessControl::CloneUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::CloneUserStateAllowed

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AccessControl::is_GetAccessState_allowed()
 *	Description : Execution allowed for GetAccess command.
 */
//--------------------------------------------------------

bool AccessControl::is_GetAccess_allowed(const CORBA::Any &any)
{
	//	Not any excluded states for GetAccess command.

	/*----- PROTECTED REGION ID(AccessControl::GetAccessStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::GetAccessStateAllowed

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AccessControl::is_GetAccessForMutiIPState_allowed()
 *	Description : Execution allowed for GetAccessForMutiIP command.
 */
//--------------------------------------------------------

bool AccessControl::is_GetAccessForMutiIP_allowed(const CORBA::Any &any)
{
	//	Not any excluded states for GetAccessForMutiIP command.

	/*----- PROTECTED REGION ID(AccessControl::GetAccessForMutiIPStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::GetAccessForMutiIPStateAllowed

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AccessControl::is_GetAddressByUserState_allowed()
 *	Description : Execution allowed for GetAddressByUser command.
 */
//--------------------------------------------------------

bool AccessControl::is_GetAddressByUser_allowed(const CORBA::Any &any)
{
	if (	//	Compare device state with not allowed states for command 
		get_state() == Tango::FAULT)
	{

	/*----- PROTECTED REGION ID(AccessControl::GetAddressByUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::GetAddressByUserStateAllowed

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AccessControl::is_GetAllowedCommandsState_allowed()
 *	Description : Execution allowed for GetAllowedCommands command.
 */
//--------------------------------------------------------

bool AccessControl::is_GetAllowedCommands_allowed(const CORBA::Any &any)
{
	if (	//	Compare device state with not allowed states for command 
		get_state() == Tango::FAULT)
	{

	/*----- PROTECTED REGION ID(AccessControl::GetAllowedCommandsStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::GetAllowedCommandsStateAllowed

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AccessControl::is_GetDeviceByUserState_allowed()
 *	Description : Execution allowed for GetDeviceByUser command.
 */
//--------------------------------------------------------

bool AccessControl::is_GetDeviceByUser_allowed(const CORBA::Any &any)
{
	if (	//	Compare device state with not allowed states for command 
		get_state() == Tango::FAULT)
	{

	/*----- PROTECTED REGION ID(AccessControl::GetDeviceByUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::GetDeviceByUserStateAllowed

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AccessControl::is_GetDeviceClassState_allowed()
 *	Description : Execution allowed for GetDeviceClass command.
 */
//--------------------------------------------------------

bool AccessControl::is_GetDeviceClass_allowed(const CORBA::Any &any)
{
	if (	//	Compare device state with not allowed states for command 
		get_state() == Tango::FAULT)
	{

	/*----- PROTECTED REGION ID(AccessControl::GetDeviceClassStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::GetDeviceClassStateAllowed

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AccessControl::is_GetUsersState_allowed()
 *	Description : Execution allowed for GetUsers command.
 */
//--------------------------------------------------------

bool AccessControl::is_GetUsers_allowed(const CORBA::Any &any)
{
	if (	//	Compare device state with not allowed states for command 
		get_state() == Tango::FAULT)
	{

	/*----- PROTECTED REGION ID(AccessControl::GetUsersStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::GetUsersStateAllowed

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AccessControl::is_RegisterServiceState_allowed()
 *	Description : Execution allowed for RegisterService command.
 */
//--------------------------------------------------------

bool AccessControl::is_RegisterService_allowed(const CORBA::Any &any)
{
	//	Not any excluded states for RegisterService command.

	/*----- PROTECTED REGION ID(AccessControl::RegisterServiceStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::RegisterServiceStateAllowed

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AccessControl::is_RemoveAddressForUserState_allowed()
 *	Description : Execution allowed for RemoveAddressForUser command.
 */
//--------------------------------------------------------

bool AccessControl::is_RemoveAddressForUser_allowed(const CORBA::Any &any)
{
	if (	//	Compare device state with not allowed states for command 
		get_state() == Tango::FAULT)
	{

	/*----- PROTECTED REGION ID(AccessControl::RemoveAddressForUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::RemoveAddressForUserStateAllowed

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AccessControl::is_RemoveDeviceForUserState_allowed()
 *	Description : Execution allowed for RemoveDeviceForUser command.
 */
//--------------------------------------------------------

bool AccessControl::is_RemoveDeviceForUser_allowed(const CORBA::Any &any)
{
	if (	//	Compare device state with not allowed states for command 
		get_state() == Tango::FAULT)
	{

	/*----- PROTECTED REGION ID(AccessControl::RemoveDeviceForUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::RemoveDeviceForUserStateAllowed

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AccessControl::is_RemoveUserState_allowed()
 *	Description : Execution allowed for RemoveUser command.
 */
//--------------------------------------------------------

bool AccessControl::is_RemoveUser_allowed(const CORBA::Any &any)
{
	if (	//	Compare device state with not allowed states for command 
		get_state() == Tango::FAULT)
	{

	/*----- PROTECTED REGION ID(AccessControl::RemoveUserStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::RemoveUserStateAllowed

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AccessControl::is_UnregisterServiceState_allowed()
 *	Description : Execution allowed for UnregisterService command.
 */
//--------------------------------------------------------

bool AccessControl::is_UnregisterService_allowed(const CORBA::Any &any)
{
	//	Not any excluded states for UnregisterService command.

	/*----- PROTECTED REGION ID(AccessControl::UnregisterServiceStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::UnregisterServiceStateAllowed

	return true;
}


	/*----- PROTECTED REGION ID(AccessControl::are_dynamic_commands_allowed) ENABLED START -----*/

	//	Add your code to check if dynamic commands are alowed

	/*----- PROTECTED REGION END -----*/	//	AccessControl::are_dynamic_commands_allowed

}	// namespace AccessControl_ns
