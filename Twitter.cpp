#include "Twitter.h"

template <typename T>
Twitter<T>::Twitter() : SocialMediaAccount<T>(), retweetCount(0) {}

template <typename T>
Twitter<T>::Twitter(const T& handler, bool private_account)
	: SocialMediaAccount<T>(handler, private_account), retweetCount(0) {}

template <typename T>
int Twitter<T>::getRetweetCount() const {
	return retweetCount;
}

template <typename T>
void Twitter<T>::setRetweetCount(int count) {
	retweetCount = count;
}

template <typename T>
void Twitter<T>::RT() {
	++retweetCount;
}
