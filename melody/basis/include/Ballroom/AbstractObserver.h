/*
 *  ./melodycloud/melody/Basis/include/Ballroom/AbstractObserver.h
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
 *	Module:  NotificationCenter
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
// Definition of the AbstractObserver class.
//

#ifndef Basis_AbstractObserver_INCLUDED
#define Basis_AbstractObserver_INCLUDED


#include "Ballroom/Basis.h"
#include "Ballroom/Notification.h"


namespace Melody
{


class Basis_API AbstractObserver
	/// The base class for all instantiations of
	/// the Observer and NObserver template classes.
{
public:
	AbstractObserver();
	AbstractObserver(const AbstractObserver& observer);
	virtual ~AbstractObserver();

	AbstractObserver& operator = (const AbstractObserver& observer);

	virtual void notify(Notification* pNf) const = 0;
	virtual bool equals(const AbstractObserver& observer) const = 0;
	virtual bool accepts(Notification* pNf) const = 0;
	virtual AbstractObserver* clone() const = 0;
};


} // namespace Melody


#endif // Basis_AbstractObserver_INCLUDED
