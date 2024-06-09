// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_1.generated.h"

class UDA_2;

USTRUCT()
struct FMyStruct
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly)
	UDA_2* DataAsset;
	UPROPERTY(EditDefaultsOnly)
	FName Name;
	UPROPERTY(EditDefaultsOnly)
	FVector Vector;
};
UCLASS()
class TESTTASK_2024_API UDA_1 : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	FMyStruct MyStruct;
};
