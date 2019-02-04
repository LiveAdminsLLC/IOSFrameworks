# IOSFrameworks

This library allows you to integrate WG Live Chat Support in your iOS app.

https://github.com/LiveAdminsLLC/IOS-Samples

https://github.com/LiveAdminsLLC/IOSFrameworks
 
Step 1: 
 


source 'https://github.com/LiveAdminsLLC/PodSpecs.git'
platform :ios, '9.0'
use_frameworks!

target '<Your Target Name>' do
  pod WGVisitorSDK
end


if WGVisitorSDK not loading then can be used local pods as follow.

pod 'WGVisitorSDK', :path => '../WGSDK/'
 
Run Command:  Pod install 
 
Step 2: 
Create instance of WGVisitorViewController or extend your class with it.

Objective C Code

WGVisitorViewController * visitorPanel = [WGVisitorViewController new]; 

Set the domains for which you have registered WG Live Chat services by passing domains string to following method. 
 
[WGVisitorViewController setDomainForEnglish:@"domain for English language"];
[WGVisitorViewController setDomainForArabic:@"domain for Arabic language"]; 

Now set preferred language as follows 
[visitorPanel setPreferredLanguage:@"ar"]; // "ar" for Arabic 
[visitorPanel setPreferredLanguage:@"en"]; // "en" for English 

 To set the visitor post login information.
[WGVisitorViewController setVisitorName:@"Michael" phoneNumber:@"123456789" email:@"micahel@test.com"];

Swift Code

WGVisitorViewController.setPreferredLanguage("en");
WGVisitorViewController.setDomainForEnglish("domain for English language")
WGVisitorViewController.setDomainForArabic("domain for Arabic language")
WGVisitorViewController.shouldShowChatHead(false)
WGVisitorViewController.chatHeadColour(UIColor.darkGray) 
 
 To set the visitor post login information.

WGVisitorViewController.setVisitorName("Michael", phoneNumber: "12345678", email: "michael@test.com")

 
 Customization for iOS 
 
The layout and various resources for visitorPanel are provided with the library in the resource folder and are customizable. Additionally, following methods have been made available in the WGVisitorViewController class to further customize the chat messages: 
 
 
 
Customization of text color and background color for chat participants. 
 
// This function changes color of text messages sent by the visitor / customer (default color: 
#ffffff). 
 
@property (nonatomic, retain)UIColor * outGoingTextColor; 
 
// This function will change Visitor’s message background color (default color: #40bcbc) 
 
@property (nonatomic, retain)UIColor * outGoingBackgroundColor; 
 
// This function changes Chat Operator’s text color (default color: #ffffff). 
 
@property (nonatomic, retain)UIColor * inComingTextColor; 
 
5     // This function will change Chat Operator’s message background color (default color: #4570c6) 
 
@property (nonatomic, retain)UIColor * inComingBackgroundColor; 
 
 
 
Customization of Send Button 
 
// This function will change send button’s text color. 
 
@property (nonatomic, retain)UIColor * sendButtonTextColor; 
 
// This function will change send button’s background color. 
 
@property (nonatomic, retain)UIColor * sendButtonBackGroundColor; 
 
// This function will allow you to add a background image within the send button. 
 
@property (nonatomic, retain)UIImage * sendButtonBackGroundImage; 


Customization of chathead


WGVisitorViewController.shouldShowChatHead(false)

WGVisitorViewController.chatHeadColour( UIColor.darkGray)
