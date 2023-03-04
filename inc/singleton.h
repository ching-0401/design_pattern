#ifndef YUKI_DESIGN_PATTERN_
#define YUKI_DESIGN_PATTERN_
#include <mutex>
#include <atomic>

namespace design_pattern
{

    class Singleton
    {
    public:
        Singleton(Singleton& a_s) = delete;
        Singleton operator = (Singleton& a_s) =delete;

        static Singleton& getInstance();
        static Singleton* getInstanceByPointLowEffeciency();    // but right
        /***************
         *  memory reorder by compiler. For effeciency, compiler may malloc
         *  then return the address, lastly, call constructor. Anathor object
         *  get the address while the constructor not compelete.
         ***************/
        static Singleton* getInstanceByPointDoubleCheck();
        static Singleton* getInstanceByPointDoubleCheckSafe();


        static Singleton* m_p_s;

    private:
        Singleton();
        static std::mutex m_m;
        static std::atomic<Singleton*> m_atomic;

    };

}



#endif
