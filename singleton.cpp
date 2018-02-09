/*单例模式懒汉式线程不安全*/
#include "singleton.h"
Singleton* Singleton::_instance = nullptr;
Singleton* Singleton::getinstance()
{
	if (_instance == nullptr)
	{
		_instance = new Singleton();
	}
	return _instance;
}