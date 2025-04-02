class vIntList
{
public:
	~vIntList(){};
	virtual void Add(int value) = 0;
	virtual int Remove() = 0;
};
