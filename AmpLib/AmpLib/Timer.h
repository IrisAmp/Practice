#ifndef __TIMER_H_DEFINED__
#define __TIMER_H_DEFINED__

#include <cstdint>

namespace AmpLib
{
	/**
	 * Simple timer class. The underlying implementaion uses a std::chrono::steady_clock, and is
	 * suitable for use in measuring durations.
	 */
	class Timer
	{
	public:
		Timer();
		~Timer();

		/**
		 * Start the clock (set initial time t0).
		 */
		void start();
		/**
		 * Report nanoseconds since t0.
		 */
		uint64_t ns();
		/**
		 * Report milliseconds since t0. 
		 */
		uint64_t ms();
		/**
		 * Report seconds since t0.
		 */
		uint64_t s();

	private:
		// pimpl pattern to hide std::chrono
		class TIMER_IMPL* impl;
	};
}

#endif//__TIMER_H_DEFINED__
