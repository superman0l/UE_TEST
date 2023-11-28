// Copyright Epic Games, Inc. All Rights Reserved.

#include "regularBPLibrary.h"
#include "regular.h"

UregularBPLibrary::UregularBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

/*float UregularBPLibrary::regularSampleFunction(float Param)
{
	return -1;
}*/

FString UregularBPLibrary::RegularMatch(const FString str, const FString Reg) {
    FRegexPattern Pattern(Reg);
    FRegexMatcher Matcher(Pattern, str);
    if (Matcher.FindNext()) {
        return str.Mid(Matcher.GetMatchBeginning(), Matcher.GetMatchEnding() - Matcher.GetMatchBeginning());
    }
    else {
        return "";
    }
}
