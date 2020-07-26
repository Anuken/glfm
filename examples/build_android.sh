# force a build clean every time
rm android_triangle/app/src/main/cpp/*

/p/Nim/bin/nim c -f --cpu:arm --os:android -c -d:androidNDK --noMain:on --nimcache:android_triangle/app/src/main/cpp/ main.nim

cp android_triangle/CMakeLists.txt android_triangle/app/src/main/cpp/

cp nimbase.h android_triangle/app/src/main/cpp/
cp file_compat.h android_triangle/app/src/main/cpp/
cp ../glfm/include/glfm.h android_triangle/app/src/main/cpp/
cp ../glfm/src/glfm_platform.h android_triangle/app/src/main/cpp/
cp ../glfm/src/glfm_platform_android.c android_triangle/app/src/main/cpp/
cp -r assets/* android_triangle/app/src/main/assets

