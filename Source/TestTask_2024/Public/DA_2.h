// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_2.generated.h"

class UDA_1;

UENUM(BlueprintType)
enum class EMyEnum : uint8
{
	value_false,
	value_true ,
	value_m
};
UCLASS()
class TESTTASK_2024_API UDA_2 : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	EMyEnum MyEnum;
	UPROPERTY(EditDefaultsOnly, meta=(EditCondition="MyEnum==EMyEnum::value_true", EditConditionHides))
	UDA_1* DataAsset;
};
