// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MYPROJ1 : ModuleRules
{
	public MYPROJ1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
