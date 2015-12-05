#pragma once
#include <string>
#include <vector>

class MapItem {
public:
	MapItem() {}
	~MapItem() {}

	int ParseFromString(const std::string &str);

	int iLocalPort;             //���ؼ����˿�
	std::string sDestIP;		  //Ŀ�ĵ�ַ
	int iDestPort;			  //Ŀ�Ķ˿�
};

class Config
{
public:
	Config();
	Config(const std::string &sConfigFileName);
	~Config();

	int LoadFromFile(const std::string &sFileName);
	int MapItemSize() const;
	MapItem *GetItem(int index);

private:
	int m_iLogLevel;
	std::vector<MapItem*> m_vecMapItemList;

};

