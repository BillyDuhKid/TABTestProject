// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TABTestProject : ModuleRules
{
	public TABTestProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"TABTestProject",
			"TABTestProject/Variant_Platforming",
			"TABTestProject/Variant_Platforming/Animation",
			"TABTestProject/Variant_Combat",
			"TABTestProject/Variant_Combat/AI",
			"TABTestProject/Variant_Combat/Animation",
			"TABTestProject/Variant_Combat/Gameplay",
			"TABTestProject/Variant_Combat/Interfaces",
			"TABTestProject/Variant_Combat/UI",
			"TABTestProject/Variant_SideScrolling",
			"TABTestProject/Variant_SideScrolling/AI",
			"TABTestProject/Variant_SideScrolling/Gameplay",
			"TABTestProject/Variant_SideScrolling/Interfaces",
			"TABTestProject/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
