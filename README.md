# IOSFrameworks
Integration of Visitor Panel Library – iOS 

Overview 

This library allows you to integrate WG Live Chat Support in your iOS app.

https://github.com/LiveAdminsLLC/IOS-Samples

https://github.com/LiveAdminsLLC/IOSFrameworks

Step 1: 



source 'https://github.com/LiveAdminsLLC/PodSpecs.git'
platform :ios, '9.0'
use_frameworks!




pod 'WGVisitorSDK', :path => '../WGSDK/'

if your app is using  'AFNetworking', '~>3.0' then add following line to pod file.

pod 'SignalR-ObjC', :path => '../WGSDK/SignalR-ObjC/'


Note: WGSDK and SignalR-ObjC can be found at link

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
[WGVisitorViewController setPreferredLanguage:@"ar"]; // "ar" for Arabic 
[WGVisitorViewController setPreferredLanguage:@"en"]; // "en" for English 

To set the visitor post login information.

[WGVisitorViewController setVisitorName:@"Michael" phoneNumber:@"123456789" email:@"micahel@test.com"];

Swift Code


To hide file upload functionality add following code
self.uploadFileBtn.isHidden = true;

WGVisitorViewController.setPreferredLanguage("en");


let chatConfigurations =    [ "en":[
"PrivacyLink": <Privacy policy link for english>,
"DomainNameLink": <Domain name link for english agent>,
"RTL": false ,
"ApplicationName": <Application Name>
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


To set the visitor pre login information.

WGVisitorViewController.setVisitorName("Michael", phoneNumber: "12345678", email: "michael@test.com")


Step 3: 

Use WGVisitorPanel provided with this library to start chat with chat operator. In order to notify end of chat (with or without an error), your controller must implement the following methods. 

WGVisitorViewController *visitorController = [[WGVisitorViewController alloc]init]; 


Method 1: For Barbutton 

UIBarButtonItem * barButton = [[UIBarButtonItem alloc]initWithTitle:@“button title here" style:UIBarButtonItemStyleDone target:nil action:nil]; 

[visitorController addTargetSessionClosedForBarButton:barButton closed:^(WGStatus sessionStatus) { 

[self handleSesssionStatus:sessionStatus]; 

}];  



Method 2: For simpleButton 

UIButton * simpleButton = [UIButton buttonWithType:(UIButtonTypeRoundedRect)]; 
{ 
simpleButton.frame = CGRectMake(10, 5, 80, 40); // Adjust Frame 
[simpleButton setTitle:@“button title here" forState:(UIControlStateNormal)];     } 
[visitorControlelr addTargetSessionClosedForButton:simpleButton closed:^(WGStatus     sessionStatus) {  

[self handleSesssionStatus:sessionStatus]; 
}]; 

}]; 
For handle Responses use this method: 
- (void)handleSesssionStatus: (WGStatus) sessionStatus{    switch (sessionStatus) {    case INTERNET_UNAVAILABLE: 
break;    case CLOSE_BUTTON_PRESSED: 
break;    case  AUTOMATIC_CLOSED : 
break;     case NO_OPERATOR_FOUND:  
break;    case NETWORK_ERROR: 
break;    case USER_BLOCKED: 
break;    case WEBSITE_NOT_FOUND: 
break;    case EMAIL_SENT: 
break;    case EMAIL_NOT_SENT: 
break; 
4 

default: break;  
} 
} 


For swift

Extend your class with WGVisitorViewController

on viewDidLoad add following code to get development updates on chat.

self.addTargetSessionClosed(forBarButton: closeBtn) { (sessionStatus) in
self.handleSessionStatus(sessionStatus: sessionStatus);


func handleSessionStatus(sessionStatus:WGVisitorStatus) -> Void {
switch sessionStatus {
case WGVisitorStatus.INTERNET_UNAVAILABLE_TO_INITIATE_CHAT:
self.showAlert(withTitle: "Error", message: "Internet appears to be offline")
break;
case WGVisitorStatus.CLOSE_BUTTON_PRESSED:
self.showAlert(withTitle: "Error", message: "Close button press")
break;
case  WGVisitorStatus.AUTOMATIC_CLOSED :
self.showAlert(withTitle: "Error", message: "Automatic Closed")
break;
case WGVisitorStatus.NO_OPERATOR_FOUND:
self.showAlert(withTitle: "Error", message: "No operator found")
// No Operator Found

break;
case WGVisitorStatus.NETWORK_ERROR:
self.showAlert(withTitle: "Error", message: "Network error")
// Call to webserver failed

break;



case WGVisitorStatus.REJECT_TERMS:

self.showAlert(withTitle: "Error", message: "User Rejected your terms")

//            navigationController?.popViewController(animated: true)

break;
case WGVisitorStatus.USER_BLOCKED:
self.showAlert(withTitle: "Error", message: "User block")
break;
case WGVisitorStatus.WEBSITE_NOT_FOUND:
self.showAlert(withTitle: "Error", message: "Website not found")

break;
case WGVisitorStatus.EMAIL_SENT:
self.showAlert(withTitle: "Success", message: "Email sent")

break;

case WGVisitorStatus.EMAIL_NOT_SENT:
self.showAlert(withTitle: "Error", message: "Unable to send email")
//launch close button here

break;
default:
break
}

}




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
@"linkTextColor": [UIColor blueColor],
@"avatar" :
[UIImage imageNamed:<agent avatar image> )],

},

@"VisitorMessage":@{

"backgroundColor": UIColor.lightGray,
@"textColor": [UIColor whiteColor],
@"linkTextColor": [UIColor blueColor],

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
"linkTextColor": UIColor.yellow,
"avatar" : UIImage.init(imageLiteralResourceName: <agent avatar image>)
],

"VisitorMessage":[

"backgroundColor": UIColor.lightGray,
"textColor": UIColor.darkText,     
"linkTextColor": UIColor.yellow,
"avatar" : UIImage.init(imageLiteralResourceName: <visitor avatar image> )

]

] as [String : Any]


WGVisitorViewController.setThemeConfigurations( themeConfigurations);



5     





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












