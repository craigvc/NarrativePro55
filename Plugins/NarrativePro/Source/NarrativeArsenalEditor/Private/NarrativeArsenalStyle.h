// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class FNarrativeArsenalStyle
{
private:
	static FString RootToContentDir(const ANSICHAR* RelativePath, const TCHAR* Extension);
	static TSharedPtr< class FSlateStyleSet > StyleSet;

public:
	static void Initialize();
	static void Shutdown();
	static TSharedPtr< class ISlateStyle > Get();
	static FName GetStyleSetName();
};
