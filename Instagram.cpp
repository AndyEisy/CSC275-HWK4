#include "Instagram.h"


template <typename T>
Instagram<T>::Instagram() : SocialMediaAccount<T>(), likeCount(0) {}

template <typename T>
Instagram<T>::Instagram (const T& handler, bool private_account)
	: SocialMediaAccount<T>(handler, private_account), likeCount(0) {}

template <typename T>
int Instagram<T>::getLikeCount() const {
	return likeCount;
}

template <typename T>
void Instagram<T>::setLikeCount(int count) {
	likeCount = count;
}

template <typename T>
void Instagram<T>::Like() {
	++likeCount;
}