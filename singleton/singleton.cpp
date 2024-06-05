/**
 ******************************************************************************
 * @file           : singleton.cpp
 * @author         : NoWineNoLife
 * @brief          : None
 * @attention      : None
 * @date           : 24-6-1
 ******************************************************************************
 */

#include "singleton.h"

#include <atomic>
#include <mutex>

namespace design_pattern
{
	std::mutex Singleton::m_m;
	// singleton
	Singleton::Singleton() = default;

	Singleton& Singleton::getInstance()
	{
		static Singleton m_s;
		return m_s;
	}

	std::atomic<Singleton*> Singleton::m_atomic;

//	Singleton* Singleton::getInstanceByPointLowEfficiency()
//	{
//		std::lock_guard<std::mutex> l(m_m);
//		if (nullptr == m_p_s) {
//			m_p_s = new Singleton;
//			return m_p_s;
//		}
//	}

//	Singleton* Singleton::getInstanceByPointDoubleCheck()
//	{
//		if (nullptr == m_p_s) {
//			std::lock_guard<std::mutex> l(m_m);
//			if (nullptr == m_p_s) {
//				m_p_s = new Singleton;
//			}
//		}
//		return m_p_s;
//	}


//	Singleton* Singleton::getInstanceByPointDoubleCheckSafe()
//	{
//		if (nullptr == m_p_s) {
//			Singleton* tmp = m_atomic.load();
//			if (nullptr == tmp) {
//				tmp = new Singleton;
//				m_atomic.store(tmp);
//			}
//		}
//		return m_atomic;
//	}

}  // namespace design_pattern