require 'json'
package = JSON.parse(File.read('package.json'))

Pod::Spec.new do |s|

  s.name           = package['name']
  s.version        = package["version"]
  s.summary        = 'Contacts plugin to wrap native contact pickers for iOS and Android.'
  s.homepage       = package['homepage']
  s.license        = package["license"]
  s.author         = package['author']['name']
  s.platform       = :ios, "9.0"
  s.source         = { :git => 'https://github.com/LynxITDigital/react-native-contacts-wrapper.git' }
  s.source_files   = "ios/RCTContactsWrapper/*.{h,m}"

  s.dependency 'React'

end
