// Copyright Haboob Studios


#include "UI/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::SetWIdgetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
}
