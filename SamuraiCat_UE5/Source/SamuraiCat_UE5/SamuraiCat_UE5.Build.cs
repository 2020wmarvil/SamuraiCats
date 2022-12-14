// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SamuraiCat_UE5 : ModuleRules
{
	public SamuraiCat_UE5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
