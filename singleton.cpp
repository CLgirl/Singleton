/*����ģʽ����ʽ�̲߳���ȫ*/
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