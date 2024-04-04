

#include <iostream>
#include <string>
#include "SocialMediaAccount.h"
#include "Twitter.h"
#include "Instagram.h"
using namespace std;


struct Profile {
    int userid;
    string username;
};

template class SocialMediaAccount<string>;
template class SocialMediaAccount<Profile>;
template class Twitter<string>;
template class Twitter<Profile>;
template class Instagram<string>;
template class Instagram<Profile>;





int main()
{
    //Define Twitter <string> TS
    Twitter<string> TS("john_doe", false);

    //Define Twitter <Profile> TP
    Profile profile1 = { 1, "jane_smith" };
    Twitter<Profile> TP(profile1, true);

    //Define Instagram<string> IS
    Instagram<string> IS("photo_lover", false);

    //Define Instagram<Profile> IP
    Profile profile2 = { 2, "travel_addict" };
    Instagram<Profile> IP(profile2, true);

    //Function Testing
    TS.addFollower("user1");
    TS.addFollowed("user2");
    TS.displayFollowers();
    TS.displayFollowed();
    TS.RT();
    cout << "Retweet count: " << TS.getRetweetCount() << endl;

    IP.Like();
    IP.Like();
    cout << "Like count: " << IP.getLikeCount() << endl;



}

