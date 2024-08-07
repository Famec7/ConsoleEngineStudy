template<class T>
class Singleton
{
private:
	static T* _instance;

public:
	static T* GetInstance()
	{
		if (_instance == nullptr)
		{
			_instance = new T();
		}

		return _instance;
	}

public:
	Singleton() = default;
	virtual ~Singleton() = default;

	/*
	* 객체는 유일하게 하나만 존재해야 하므로 복사 생성자와 대입 연산자를 삭제한다.
	*/
	Singleton(const Singleton&) = delete;
	Singleton & operator=(const Singleton&) = delete;
	Singleton(Singleton&&) = delete;
	Singleton& operator=(Singleton&&) = delete;
};

template<class T>
T* Singleton<T>::_instance = nullptr;