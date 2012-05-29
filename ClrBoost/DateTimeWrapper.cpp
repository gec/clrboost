// This is the main DLL file.

#include "stdafx.h"

#include "DateTimeWrapper.h"

#include <boost/date_time/posix_time/posix_time.hpp>

using namespace boost::posix_time;

namespace ClrBoost {

System::Int64 DateTimeWrapper::GetMillisSinceEpoch()
{
	ptime epoch = ptime(boost::gregorian::date(1970, 1, 1));
	ptime now(microsec_clock::universal_time());
	return (now - epoch).total_milliseconds();
}

}
