/*
 *  ./melodycloud/melody/Basis/include/Ballroom/Notification.h
 *
 *   GPL LICENSE
 */

/*
 * Function:
 *
 *
 *
 * Description:
 *	Library: Basis
 *	Package: Notifications
 *	Module:  Notification
 *
 * Version:
 *	1.0.0
 *
 * Revision History:
 *
 *	2011-10-01	Josee
 *	Initial creation
 *
 */
// Definition of the Notification class.
//
//
//
//
//


#ifndef Basis_Notification_INCLUDED
#define Basis_Notification_INCLUDED


#include "Ballroom/Basis.h"
#include "Ballroom/Mutex.h"
#include "Ballroom/RefCountedObject.h"
#include "Ballroom/AutoPtr.h"


namespace Melody
{


class Basis_API Notification: public RefCountedObject
	/// The base class for all notification classes used
	/// with the NotificationCenter and the NotificationQueue
	/// classes.
	/// The Notification class can be used with the AutoPtr
	/// template class.
{
public:
	typedef AutoPtr<Notification> Ptr;

	Notification();
	/// Creates the notification.

	virtual std::string name() const;
	/// Returns the name of the notification.
	/// The default implementation returns the class name.

protected:
	virtual ~Notification();
};


} // namespace Melody


#endif // Basis_Notification_INCLUDED
