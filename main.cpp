/* 
 * File:   main.cpp
 * Author: kate
 *
 * Created on 6 Октябрь 2012 г., 20:11
 */

#include <cstdlib>

#include <stdio.h>
#include <stdlib.h>
#include "DataGet.h"
#include "SmeltingListElement.h"
#include "DataExponent.h"
#include "SmeltingControl.h"
#include "SmeltingControlPowder.h"
//#include "SmeltingControlPowder.h"
#include <list>
#include <iostream>

using namespace std;
/*
 * 
 */
void testfunct( list<SmeltingListElement> el)
{
    list<SmeltingListElement>::iterator ptr;
    for (ptr = el.begin(); ptr != el.end(); ptr++)
    {
        cout << "hello" << ptr->GetFerrum() << "\n";
    }
}

int main(int argc, char** argv) 
{
    
//    list<SmeltingListElement> test;
// //   SmeltingListElement *el = new SmeltingListElement(2,5);
// //   cout << el->GetFerrum() << "\n";
//    
//    test.push_back(SmeltingListElement(3,8));
//    test.push_back(SmeltingListElement(4,12));
// //   cout << el->GetFerrum() << "\n";
//    list<SmeltingListElement>::iterator ptr;
//    for( ptr = test.begin(); ptr!=test.end() ; ptr++ )
//        cout << ptr->GetFerrum()<< "\n";
   // SmeltingListElement el1 = *firstElem;
 //   cout << test.front().GetFerrum() << "\n";
//    cout << (&el1)->GetFerrum() << "\n";
//    testfunct( test);
    //SmeltingControl *tmp = new SmeltingControl();
    //tmp->SetMeasuresList(test);
    //cout tmp->GetMeasuresList().front()->GetFerrum();
    
    SmeltingControlPowder *test = new SmeltingControlPowder( 7 );
    test->ResumeObserving( 10 );
    test->PrintMeasuresList();
    //test->CountOptimalTime();
    return 0;
}

