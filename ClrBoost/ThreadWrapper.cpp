#include "Stdafx.h"
#include "ThreadWrapper.h"

#include <boost\thread\thread.hpp>

namespace ClrBoost {
	
	void ThreadWrapper::SleepForASec()
	{
		boost::this_thread::sleep(boost::posix_time::seconds(1)); 
	}

}