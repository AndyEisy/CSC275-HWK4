#include "SocialMediaAccount.h"
#include <iostream>
using namespace std;

//Constructor implementations
template <typename T>
SocialMediaAccount<T>::SocialMediaAccount() : followerCount(0), followedCount(0), private_account(true) {}

template <typename T>
SocialMediaAccount<T>::SocialMediaAccount(const T& handler, bool private_account)
	: handler(handler), followerCount(0), followedCount(0), private_account(private_account) {}

//getter and setter implementations
template <typename T>
T SocialMediaAccount<T>::getHandler() const {
	return handler;
}

template <typename T>
void SocialMediaAccount<T>::setHandler(const T& handler) {
	this->handler = handler;
}

template <typename T>
bool SocialMediaAccount<T>::isPrivate() const {
	return private_account;
}

template <typename T>
void SocialMediaAccount<T>::setPrivate(bool private_account) {
	this->private_account = private_account;
}

// other member function implementations

template <typename T>
void SocialMediaAccount<T>::addFollower(const T& user) {
	//adds user to the followers array if there is space
	if (followerCount < maxFollowers) {
		collowers[followerCount++] = user;
	}
	else {
		cout << "Cannot add more followers. Maximum has been reached." << endl;
	}
}

template <typename T>
void SocialMediaAccount<T>::addFollowed(const T& user) {
	//Adds the userto the followed array if there is space
	if (followedCount < maxFollowed) {
		followed[followedCount++] = user;
	}
	else {
		cout << "Cannot add more followed accounts. Maximum has been reached." << endl;
	}
}

template <typename T>
void SocialMediaAccount<T>::displayFollowers() const {
	if (private_account) {
		cout << "Account is private. Cannot display followers." << endl;
	}
	else {
		cout << "Followers: ";
		for (int i = 0; i < followerCount; ++i) {
			cout << followers[i] << " ";
		}
		cout << endl;
	}
}

template <typename T>
void SocialMediaAccount<T>::displayFollowed() const {
	if (private_account) {
		cout << "Account is private. Cannot display followed accounts." << endl;
	}
	else {
		cout << "Followed accounts: ";
		for (int i = 0; i < followedCount; ++i) {
			cout << followed[i] << " ";
		}
		cout << endl;
	}
}




