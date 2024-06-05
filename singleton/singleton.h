/**
 ******************************************************************************
 * @file           : singleton.h
 * @author         : NoWineNoLife
 * @brief          : None
 * @attention      : None
 * @date           : 24-6-1
 ******************************************************************************
 */

#ifndef DESIGN_PATTERN_SINGLETON_H
#define DESIGN_PATTERN_SINGLETON_H
#include <mutex>
#include <atomic>

namespace design_pattern
{

	class Singleton
	{
	  public:
		Singleton(Singleton& a_s) = delete;
		Singleton operator=(Singleton& a_s) = delete;

		static Singleton& getInstance();

		// to do
//		static Singleton* getInstanceByPointLowEfficiency();  // but right
		/*****
		 * @brief memory reorder by compiler. For efficiency, compiler may malloc
		 *  then return the address, lastly, call constructor. Another object
		 *  get the address while the constructor not complete.
		 ***************/
//		static Singleton* getInstanceByPointDoubleCheck();
//		static Singleton* getInstanceByPointDoubleCheckSafe();

//		static Singleton* m_p_s;
		static std::atomic<Singleton*> m_atomic;
		static std::mutex m_m;

	  private:
		Singleton();


	};

}  // namespace design_pattern

#endif  // DESIGN_PATTERN_SINGLETON_H
