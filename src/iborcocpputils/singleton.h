#pragma once

namespace iborcocpputils {

template <class T>
class Singleton
{
public:
    ~Singleton() {
    }

    static T* get() {
        if (!m_singleton) {
            m_singleton = new T();
        }
        return m_singleton;
    }

    static void cleanup()
    {
        delete m_singleton;
        m_singleton = nullptr;
    }

protected:
    Singleton() {}

private:
    inline static T* m_singleton = nullptr;
};

} // namespace iborcocpputils
