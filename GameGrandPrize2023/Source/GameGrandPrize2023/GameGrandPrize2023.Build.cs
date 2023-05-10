// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GameGrandPrize2023 : ModuleRules
{
	public GameGrandPrize2023(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
