#pragma once
#ifndef INSTAGRAM_H
#define INSTAGRAM_H

#include "SocialMediaAccount.h"

template <typename T>

class Instagram : public SocialMediaAccount<T> 
{
private:
	int likeCount;

public:
	Instagram();
	Instagram(const T& handler, bool private_account);

	int getLikeCount() const;
	void setLikeCount(int count);

	void Like();
};




#endif

