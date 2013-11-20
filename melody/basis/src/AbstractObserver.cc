/*
 *  ./melodycloud/melody/Basis/src/AbstractObserver.cc
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
 *	2012-10-01	Josee
 *	Initial creation
 *
 */

#include "Ballroom/AbstractObserver.h"


namespace Melody
{


AbstractObserver::AbstractObserver()
{
}


AbstractObserver::AbstractObserver(const AbstractObserver& observer)
{
}


AbstractObserver::~AbstractObserver()
{
}


AbstractObserver& AbstractObserver::operator = (const AbstractObserver& observer)
{
	return *this;
}


} // namespace Melody
