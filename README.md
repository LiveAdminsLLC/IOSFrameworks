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
 
 if your app is using  'AFNetworking', '~>3.0' then add following line to pod file.

pod 'SignalR-ObjC', :path => '../../SignalR-ObjC/'


Run Command:  Pod install 
 
Step 2: 
Create instance of WGVisitorViewController or extend your class with it.

Objective C Code

WGVisitorViewController * visitorPanel = [WGVisitorViewController new]; 

Set the domains for which you have registered WG Live Chat services by passing domains string to following method. 
 

NSDictionary* chatConfigurations =    @{ @"en":@{
@"PrivacyLink": <Privacy policy link for english>,
@"DomainNameLink": < Domain name link for english>,
@"RTL": @(NO) ,
@"ApplicationName": <Application name >
},

@"ar":@{

@"PrivacyLink":  <Privacy policy link for arabic>,
@"DomainNameLink": <Domain name link for arabic>,
@"RTL": @(YES),
@"ApplicationName" : <Application name  in arabic>
}

};

[WGVisitorViewController setChatConfigurations:chatConfigurations];

Now set preferred language as follows 
[visitorPanel setPreferredLanguage:@"ar"]; // "ar" for Arabic 
[visitorPanel setPreferredLanguage:@"en"]; // "en" for English 

To set the visitor post login information.

[WGVisitorViewController setVisitorName:@"Michael" phoneNumber:@"123456789" email:@"micahel@test.com"];

Swift Code

WGVisitorViewController.setPreferredLanguage("en");


let chatConfigurations =    [ "en":[
"PrivacyLink": <Privacy policy link for english>,
"DomainNameLink": <Domain name link for english agent>,
"RTL": false ,
"ApplicationName": <application name in english>
],

"ar":[
"PrivacyLink": <Privacy policy link for arabic>,
"DomainNameLink": <Domain name link for arabic agent>,
"RTL": true, //Right to Left
"ApplicationName" : <application name in arabic>
]

]
WGVisitorViewController.setChatConfigurations( chatConfigurations);



WGVisitorViewController.shouldShowChatHead(false)
WGVisitorViewController.shouldShowTimeStamp(false)



Now set preferred language as follows 
[visitorPanel setPreferredLanguage:@"ar"]; // "ar" for Arabic 
[visitorPanel setPreferredLanguage:@"en"]; // "en" for English 

 To set the visitor post login information.
[WGVisitorViewController setVisitorName:@"Michael" phoneNumber:@"123456789" email:@"micahel@test.com"];


In order to show chat head pass boolean value ;
WGVisitorViewController.shouldShowChatHead(true)

 
 To set the visitor post login information.

WGVisitorViewController.setVisitorName("Michael", phoneNumber: "12345678", email: "michael@test.com")

 
 Customization for iOS 
 
The layout and various resources for visitorPanel are provided with the library in the resource folder and are customizable. Additionally, following methods have been made available in the WGVisitorViewController class to further customize the chat messages: 
 
 
 
 Customization of Chat UI 
 
 Following are the parameter to apply custom theme. You can leave some of it if you want to use default theme
 
 Obj C:
 
 NSDictionary* themeConfigurations = @{
 
 @"ThemeColor": [UIColor colorWithRed:32/2555.0 green:42/2555.0 blue:69/2555.0 alpha:1],
 
 @"ChatHeadColour": [UIColor colorWithRed:32/2555.0 green:42/2555.0 blue:69/2555.0 alpha:1],
 
 @"NavigationLogo":
 [UIImage imageNamed:<navigation logo image>],
 
 @"AgentMessage":@{
 
 @"backgroundColor":[UIColor colorWithRed:32/2555.0 green:42/2555.0 blue:69/2555.0 alpha:1],
 @"textColor": [UIColor  whiteColor],
 @"avatar" :
 [UIImage imageNamed:<agent avatar image> )],
 
 },
 
 @"VisitorMessage":@{
 
 "backgroundColor": UIColor.lightGray,
 @"textColor": [UIColor whiteColor],
 
 "avatar" : UIImage.init(imageLiteralResourceName: <visitor avatar image> ))
 
 }
 
 };
 
 
 
 [WGVisitorViewController setThemeConfigurations:themeConfigurations];
 
 Swift:
 
 
 
 let themeConfigurations = [
 
 "ThemeColor": UIColor.init( red:32/2555.0, green:42/2555.0 ,blue:69/2555.0 ,alpha:1),
 
 "ChatHeadColour": UIColor.init( red:32/2555.0, green:42/2555.0 ,blue:69/2555.0 ,alpha:1),
 
 "NavigationLogo": UIImage.init(imageLiteralResourceName: "logo"),
 
 "AgentMessage":[
 
 "backgroundColor": UIColor.init( red:32/2555.0, green:42/2555.0 ,blue:69/2555.0 ,alpha:1),
 "textColor": UIColor.white,
 "avatar" : UIImage.init(imageLiteralResourceName: <agent avatar image>)
 ],
 
 "VisitorMessage":[
 
 "backgroundColor": UIColor.lightGray,
 "textColor": UIColor.darkText,     
 "avatar" : UIImage.init(imageLiteralResourceName: <visitor avatar image> )
 
 ]
 
 ] as [String : Any]
 
 
 WGVisitorViewController.setThemeConfigurations( themeConfigurations);
 
 
 Customization of chathead
 
 
 WGVisitorViewController.shouldShowChatHead(false)
 
 
 
 Change Navigation theme
 
 
 Here is the code to change navigation if required as per your need. This can be added inside your view controller class.
 
 
 if #available(iOS 11.0, *) {
 self.navigationController?.navigationBar.largeTitleTextAttributes = [.foregroundColor: UIColor.white]
 
 self.navigationController?.navigationBar.titleTextAttributes = [NSAttributedString.Key.foregroundColor: UIColor.white]
 } else {
 // Fallback on earlier versions
 }
 
 self.navigationController?.navigationBar.tintColor = UIColor.white
 
 self.navigationController?.navigationBar.barTintColor = WGVisitorSharedData.getSharedInstance().themeColor()
 
 
 
