Pod::Spec.new do |s|
  s.name             = "UIView-IBDesignable"
  s.version          = "0.0.1"
  s.summary          = "IB_DESIGNABLE category to UIView"
  s.description      = <<-DESC
                       DESC
  s.homepage         = "https://github.com/k06a/UIView-IBDesignable"
  s.license          = "MIT"
  s.author           = { "Anton Bukov" => "k06aaa@gmail.com" }
  s.social_media_url = "https://twitter.com/k06a"
  s.platform         = :ios
  s.source           = { :git => "https://github.com/k06a/UIView-IBDesignable.git", :tag => "#{s.version}" }
  s.source_files     = "*.{h,m}"
  s.requires_arc     = true
end
