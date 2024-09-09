# Uncomment the next line to define a global platform for your project

source 'https://github.com/CocoaPods/Specs.git'
platform :ios, '13.0'

target 'KJVoiceChatExperienceApp' do
  use_frameworks!
  
  pod 'AScenesKit', :path => './AScenesKit.podspec'
  pod 'AgoraRtcEngine_Special_iOS', '4.1.1.29'
end

post_install do |installer|
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '13.0'
    end
  end
end