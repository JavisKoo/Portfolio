// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/AG_MotionWarpingComponent.h"


UAG_MotionWarpingComponent::UAG_MotionWarpingComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);
}