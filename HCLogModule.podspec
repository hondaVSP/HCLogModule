#
# Be sure to run `pod lib lint HCLogModule.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'HCLogModule'
  s.version          = '1.0.0'
  s.summary          = 'HCLogModule.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  HCLogModule description.
                       DESC

  s.homepage         = 'https://github.com/hondaVSP/HCLogModule'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '445878662@qq.com' => 'gongm@reachauto.com' }
  s.source           = { :git => 'https://github.com/hondaVSP/HCLogModule.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.frameworks = 'Foundation'

  s.ios.deployment_target = '12.0'

  # s.requires_arc   = true
  # s.static_framework = true
  s.vendored_frameworks = 'HCLogModule.framework'
  s.dependency 'CocoaLumberjack'
  


end
