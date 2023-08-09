#pragma once
#include "xml_tag.h"

class XMLParser
{
public:
	XMLParser(string text);
	shared_ptr<XMLTag> Parse();
private:
	int GetElementStart(int s);
	int GetElementEnd(int s);
	shared_ptr<XMLTag> GetRoot();
	shared_ptr<XMLTag> ProcessTag(shared_ptr<XMLTag> tag);
private:
	/* parent stack used to store the current active parent on top */
	stack<shared_ptr<XMLTag>> mParentStack;
	std::string mText;
};
