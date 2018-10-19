// Fill out your copyright notice in the Description page of Project Settings.
#include "../Public/ForgeFunctionLibrary.h"
//#include "LandscapeSplinesComponent.h"


bool UForgeFunctionLibrary::UsefulFunction(bool inBool) {

	inBool = !inBool;

	//TArray< TWeakObjectPtr<ULandscapeSplineSegment> > Segments;
	//for (TObjectIterator<ULandscapeSplineSegment> Itr; Itr; ++Itr)
	//{
		//Segments.Add(TWeakObjectPtr<ULandscapeSplineSegment>(*Itr));
	//}

	return inBool;
}


