#pragma once
#include <string>
#include <vector>
#include <string>

class Garbage 
{
private:
	std::string name;
public:
	Garbage();
	void getGarbageName();
	void setGarbageName(std::string garbageName);
};

class PaperGarbage:public Garbage 
{
private: 
	bool isSqueezed;
public: 
	PaperGarbage();
	void squeeze(bool isSqueezed); 
}; 

class PlasticGarbage : public Garbage
{
private:
	bool isClean;

public:
	PlasticGarbage();
	void clean(bool isClean);

};

class Dustbin: public Garbage
{
	std::vector<Garbage> houseWasteContent{};
	std::string color;
	std::vector<PlasticGarbage> plasticContent{};
	std::vector<PaperGarbage> paperContent{};

public:
	Dustbin();
	void throwOutGarbage(Garbage inGarbage);
	void throwOutPaperGarbage(PaperGarbage inPaperGarbage, bool isSqueezed);
	void throwOutPlasticGarbage(PlasticGarbage inPlasticGarbage, bool isClean);
		
};

class MetalGarbage: public Garbage
{
};

class Dustbin9000 : public Garbage
{
private:
	std::vector<MetalGarbage> metalContent{};
	std::string capColor; 

	struct Cap
	{
		std::string capColor;
	};

	std::vector<Cap> capsContent{};
public:

	void acceptCaps(Cap inCap, std::vector<Cap> capsContent);
		
};