#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "HealthBarComponent.generated.h"

UCLASS()
class UDEMYPROJECT_API UHealthBarComponent : public UWidgetComponent
{
	GENERATED_BODY()
	
public:

	void SetHealthPercent(float Percent);

private:

	UPROPERTY()
	class UHealthBar* HealthBarWidget;
};
