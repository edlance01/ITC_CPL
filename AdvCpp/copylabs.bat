rem copylabs.bat

rem Chapter 1
xcopy Chap01\OCF\Step0 Labs\Lab1A\OCF\ /s
xcopy Chap01\Access\Step0 Labs\Lab1B\Access\ /s
xcopy Chap01\List\Step0 Labs\Lab1C\List\ /s

rem Chapter 2
xcopy Chap02\Multicatch Demos\Multicatch\ /s
xcopy Chap02\Stack\Step3 Labs\Lab2\StackException\ /s

rem Chapter 3
xcopy Chap03\Employee\Start4 Labs\Lab3\EmployeeRTTI\ /s

rem Chapter 4
md Labs\Lab4\MiHierarchy\Hints
xcopy Examples\MiHierarchy\Step0 Labs\MiHierarchy\Work\ /s
copy Examples\MiHierarchy\Step2\ostack.* Labs\MiHierarchy\Hints
xcopy Examples\MiHierarchy\Step4 Labs\MiRTTI\ /s

rem Chapter 5
xcopy Chap05\String\Step0 Labs\Lab5\String\ /s
