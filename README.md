# CppDemoApp

Sample command for scanning the project in Windows

cov-configure --msvc


cov-build --dir iDir msbuild.exe CppDemoApp.vcxproj /t:rebuild


cov-analyze --dir iDir --all --checker-option RESOURCE_LEAK:allow_main:true --strip-path=%cd%


cov-commit-defects --dir iDir --url https://localhost:8443 --user username --password password --stream CppDemoApp
