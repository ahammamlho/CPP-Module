/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:23:49 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/04 13:12:59 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

class YoutubeChannel 
{
    private:
        std::string Name;
        int SubscribersCount;
        list<string> VideoTitle[5];
    protected:
        std::string OwnerName;
        int ContentQuality;

    public:
        YoutubeChannel(string name, string ownerName)
        {
            Name = name;
            OwnerName = ownerName;
            SubscribersCount = 0;
            ContentQuality = 0;
        }
        void getInfo()
        {
            std::cout << "name : " << Name << std::endl;
            std::cout << "OwnerName : " << OwnerName << std::endl;
            std::cout << "subscriber : " << SubscribersCount << std::endl;
            std::cout << "ContentQuality : " << ContentQuality << std::endl;
        }
        void Subsccribe()
        {
            SubscribersCount++;
        }
        void UnSubsccribe()
        {
            if (SubscribersCount > 0)
                SubscribersCount--;
        }
        void CheckAnalytics()
        {
            if (ContentQuality < 5)
                std::cout << Name << "has bad quality content." << std::endl;
            else
                std::cout << Name << "has great content." << std::endl;
        }
};

class CookingYoutubeChannel : public YoutubeChannel
{
    public:
        CookingYoutubeChannel(string name, string ownername)
                            :YoutubeChannel(name, ownername){

        };
        void Practice()
        {
            std::cout << OwnerName << " : learning how to cook ..." << std::endl;
            ContentQuality++;
        }
};

class SingersYoutubeChannel : public YoutubeChannel
{
    public:
        SingersYoutubeChannel(string name, string ownername)
                            :YoutubeChannel(name, ownername){

        };
        void Practice()
        {
            std::cout << OwnerName << " : learning how ti dance ..." << std::endl;
            ContentQuality++;
        }
};

int main()
{
    std::cout << "--------------------------------" << std::endl;

    // CookingYoutubeChannel ytChannel("ahamama","lhoussaine");
    // ytChannel.Practice();
    // SingersYoutubeChannel yt2("JohnSings", "John");
    // yt2.Practice();

    std::cout << "--------------------------------" << std::endl;
    return (0);
}