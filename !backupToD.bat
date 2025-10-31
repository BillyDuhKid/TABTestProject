rmdir "D:\PluginTesting" /s /q
xcopy "C:\Games\Epic Games\Unreal Projects\PluginTesting" "D:\PluginTesting" /EXCLUDE:!excludelist.txt /i /s
