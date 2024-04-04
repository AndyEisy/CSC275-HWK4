#pragma once

#ifndef TWITTER_H
#define TWITTER_H

#include "SocialMediaAccount.h"

template <typename T>


class Twitter : public SocialMediaAccount<T>
{

private:
	int retweetCount;

public:
	Twitter();
	Twitter(const T& handler, bool private_account);

	int getRetweetCount() const;
	void setRetweetCount(int count);

	void RT();
};






#endif
