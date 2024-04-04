#pragma once

	//global constants
	const int maxFollowers = 100;
	const int maxFollowed = 100;

	//template class definition
	template <typename T>
	class SocialMediaAccount {
	private:
		T handler;
		T followers[maxFollowers];
		T followed[maxFollowed];
		int followerCount;
		int followedCount;
		bool private_account;

	public:
		//constructors
		SocialMediaAccount();
		SocialMediaAccount(const T& handler, bool private_account);

		//getters and setters
		T getHandler() const;
		void setHandler(const T& handler);
		bool isPrivate() const;
		void setPrivate(bool private_account);

		//other functions
		void addFollower(const T& user);
		void addFollowed(const T& user);
		void displayFollowers() const;
		void displayFollowed() const;
	};



