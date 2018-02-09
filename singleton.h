#ifndef _SINGLETON_H_
#define _SINGLETON_H_
class Singleton
{
public:
	~Singleton(){}
	static Singleton* getinstance();
private:
	static Singleton *_instance;
	Singleton(){}
};
#endif