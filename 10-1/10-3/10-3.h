#pragma once
#ifndef _GOLF_
#define _GOLF_

class golf {
private:
	static const int len = 40;
	char fullname[len];
	int handicap;
public:
	golf();
	golf(const char *g, int hc);
	const golf & setgolf(const golf & g);
	void showgolf() const;
};
#endif