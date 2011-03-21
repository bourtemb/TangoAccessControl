/*----- PROTECTED REGION ID(AccessControlClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        AccessControlClass.h
//
// description : Include for the AccessControlClass root class.
//               This class is the singleton class for.
//               the AccessControl device class..
//               It contains all properties and methods which the .
//               AccessControl requires only once e.g. the commands.
//
// project :     cess Control abstract class.
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
//
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
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef ACCESSCONTROLCLASS_H
#define ACCESSCONTROLCLASS_H

#include <tango.h>
#include <AccessControl.h>

/*----- PROTECTED REGION END -----*/

namespace AccessControl_ns
{
	/*----- PROTECTED REGION ID(AccessControl::classes for dynamic creation) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::classes for dynamic creation



//=========================================
//	Define classes for attributes
//=========================================




//=========================================
//	Define classes for commands
//=========================================




/**
 *	The TemplateDevServClass singleton definition
 */

class
#ifdef _TG_WINDOWS_
	__declspec(dllexport)
#endif
	AccessControlClass : public Tango::DeviceClass
{
	/*----- PROTECTED REGION ID(AccessControl::Additionnal DServer data members) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	AccessControl::Additionnal DServer data members



public:
//	write class properties data members
	Tango::DbData	cl_prop;
	Tango::DbData	cl_def_prop;
	Tango::DbData	dev_def_prop;

//	Method prototypes
	static AccessControlClass *init(const char *);
	static AccessControlClass *instance();
	~AccessControlClass();
	Tango::DbDatum	get_class_property(string &);
	Tango::DbDatum	get_default_device_property(string &);
	Tango::DbDatum	get_default_class_property(string &);
	
protected:
	AccessControlClass(string &);
	static AccessControlClass *_instance;
	void command_factory();
	void attribute_factory(vector<Tango::Attr *> &);
	void write_class_property();
	void set_default_property();
	void get_class_property();
	string get_cvstag();
	string get_cvsroot();

private:
	void device_factory(const Tango::DevVarStringArray *);


};

}	//	namespace

#endif	//	ACCESSCONTROLCLASS_H

