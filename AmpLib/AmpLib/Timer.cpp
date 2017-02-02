#include "Timer.h"
#include <chrono>

namespace AmpLib
{
	class TIMER_IMPL
	{
	public:
		TIMER_IMPL()
			: t0(std::chrono::steady_clock::now())
		{
			
		}

		~TIMER_IMPL()
		{

		}

		void start()
		{
			this->t0 = std::chrono::steady_clock::now();
		}

		uint64_t ns()
		{
			return (uint64_t) std::chrono::duration_cast
				<std::chrono::nanoseconds>
				(std::chrono::steady_clock::now() - this->t0).count();
		}

		uint64_t ms()
		{
			return (uint64_t) std::chrono::duration_cast
				<std::chrono::milliseconds>
				(std::chrono::steady_clock::now() - this->t0).count();
		}

		uint64_t s()
		{
			return (uint64_t) std::chrono::duration_cast
				<std::chrono::seconds>
				(std::chrono::steady_clock::now() - this->t0).count();
		}

	private:
		std::chrono::time_point<std::chrono::steady_clock> t0;
	};

	Timer::Timer()
	{
		this->impl = new TIMER_IMPL();
	}

	Timer::~Timer()
	{
		delete this->impl;
	}

	void Timer::start()
	{
		this->impl->start();
	}

	uint64_t Timer::ns()
	{
		return this->impl->ns();
	}

	uint64_t Timer::ms()
	{
		return this->impl->ms();
	}

	uint64_t Timer::s()
	{
		return this->impl->s();
	}

}

