// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "MandaMathLibrary.generated.h"

/**
 *
 */
UCLASS()
class MANDA_API UMandaMathLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		//
		// Vector (2D) functions.
		//

		/** Linearly interpolates between A and B based on Alpha (100% of A when Alpha=0 and 100% of B when Alpha=1) */
		UFUNCTION(BlueprintPure, meta = (DisplayName = "Lerp (Vector 2D)", ScriptMethod = "LerpTo"), Category = "Math|Vector 2D")
		static FVector2D V2DLerp(FVector2D A, FVector2D B, float Alpha);

		/** Element-wise Vector multiplication (Result = {A.x*B.x, A.y*B.y, A.z*B.z}) */
		UFUNCTION(BlueprintPure, meta = (DisplayName = "Rotator * Rotator (Euler)", CompactNodeTitle = "*", ScriptMethod = "Multiply", ScriptOperator = "*;*=", Keywords = "* multiply", CommutativeAssociativeBinaryOperator = "true"), Category = "Math|Rotator")
		static FRotator Multiply_RotatorRotator(FRotator A, FRotator B);
};

// Conditionally inlined
#if KISMET_MATH_INLINE_ENABLED
#include "MandaMathLibrary.inl"
#endif
