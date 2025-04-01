rem copylabs.bat

rem Chapter 1
xcopy Chap01\Virtdemo\Step0 Demos\Virtdemo\ /s
xcopy Chap01\Employee\Step1 Labs\Lab1A\Employee\ /s
xcopy Chap01\Employee\Start3 Labs\Lab1B\EmployeePoly\ /s

rem Chapter 2
md Labs\Lab2
copy Labs\readme.txt Labs\Lab2

rem Chapter 3
xcopy Chap03\Stack\Step0 Labs\Lab3A\Stack\ /s
xcopy Chap03\Dictionary\Step0 Labs\Lab3B\Dictionary\ /s

rem Chapter 4
md Labs\Lab4\Exer1
copy Labs\readme.txt Labs\Lab4\Exer1\readme.txt
xcopy Chap04\StringIO Labs\Lab4\Exer2\ /s
xcopy Chap04\Months\Step1 Labs\Lab4\Exer3\ /s
