--- remoting/host/base/desktop_environment_options.cc.orig	2024-11-04 08:56:03 UTC
+++ remoting/host/base/desktop_environment_options.cc
@@ -99,7 +99,7 @@ bool DesktopEnvironmentOptions::capture_video_on_dedic
   // TODO(joedow): Determine whether we can migrate additional platforms to
   // using the DesktopCaptureWrapper instead of the DesktopCaptureProxy. Then
   // clean up DesktopCapturerProxy::Core::CreateCapturer().
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return capture_video_on_dedicated_thread_;
 #else
   return false;
