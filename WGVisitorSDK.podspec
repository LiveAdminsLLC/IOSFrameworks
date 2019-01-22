#
#  Be sure to run `pod spec lint WGVisitorSDK.podspec'
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html

Pod::Spec.new do |s|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  s.name         = "WGVisitorSDK"
  s.version      = "1.0.3"
  s.summary      = "Liveadmins VisitorPanel library for iOS"
  s.homepage     = "https://liveadmins.com"
  s.author       = { "WG" => "zaigham.maqsood@liveadmins.com" }



  # ――― Platform Specifics ――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  # s.platform     = :ios

  # ――― Source Location ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  s.source       = { :git => "https://github.com/LiveAdminsLLC/IOSFrameworks.git", :branch => "master"}


  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
    s.resource = "WGSDK/*/*.bundle"
    s.ios.vendored_frameworks = 'WGSDK/*/*.framework'

# ――― Project Dependencies ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

s.dependency 'Reachability'

s.dependency 'XMPPFramework'

s.dependency 'TPKeyboardAvoiding'

s.dependency 'MCLocalization'



end
