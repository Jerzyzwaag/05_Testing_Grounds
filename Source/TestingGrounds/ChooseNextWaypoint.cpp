// Fill out your copyright notice in the Description page of Project Settings.

#include "ChooseNextWaypoint.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	//Super::ExecuteTask(OwnerComp, NodeMemory);
	auto BlackBoardComp = OwnerComp.GetBlackboardComponent();
	auto Index = BlackBoardComp->GetValueAsInt(IndexKey.SelectedKeyName);
	//UE_LOG(LogTemp,Warning,TEXT("Index: %i"),Index)
	return EBTNodeResult::Succeeded;
}
