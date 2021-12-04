//
//
//
//#include "DamageTrigger.h"
//
//#include "DrawDebugHelpers.h"
//
//ADamageTrigger::ADamageTrigger()
//{
//    //Register Events
//    OnActorBeginOverlap.AddDynamic(this, &ADamageTrigger::OnOverlapBegin);
//    OnActorEndOverlap.AddDynamic(this, &ADamageTrigger::OnOverlapEnd);
//}
//
//// Called when the game starts or when spawned
//void ADamageTrigger::BeginPlay()
//{
//    Super::BeginPlay();
//
//    DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Purple, true, 999, 0, 5);
//}
//
//void ADamageTrigger::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
//{
//    // check if Actors do not equal nullptr and that 
//    if (OtherActor && OtherActor != this)
//    {
//        if (GEngine)
//        {
//            GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, TEXT("Overlap Begin"));
//            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, FString::Printf(TEXT("Overlapped Actor = %s"), *OverlappedActor->GetName()));
//        }
//    }
//}
//
//void ADamageTrigger::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
//{
//    if (OtherActor && OtherActor != this)
//    {
//        if (GEngine)
//        {
//            GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, TEXT("Overlap Ended"));
//            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, FString::Printf(TEXT("%s has left the Trigger Box"), *OtherActor->GetName()));
//        }
//    }
//}