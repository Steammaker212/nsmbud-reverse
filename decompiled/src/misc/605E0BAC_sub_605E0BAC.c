/* sub_605E0BAC
 * address: 0x605E0BAC   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E0BAC(StateMethodExecuter *result, void *a2, void *a3)
{
  result[563].vtable = a2;
  if ( result[566].vtable != (void *)1 )
  {
    switch ( (unsigned int)a2 )
    {
      case 2u:
      case 0xFu:
        result[668].owner = 0;
        result = StateMgr__changeState((StateMgr *)&result[561].currentState, (StateBase *)&dword_60CB18E0);
        break;
      case 3u:
      case 4u:
      case 5u:
      case 6u:
        result[668].owner = 0;
        result = StateMgr__changeState((StateMgr *)&result[561].currentState, (StateBase *)&dword_60CB1900);
        break;
      case 7u:
      case 8u:
        result[668].owner = 0;
        result = StateMgr__changeState((StateMgr *)&result[561].currentState, (StateBase *)&dword_60CB1980);
        break;
      case 9u:
        result[668].owner = 0;
        result = StateMgr__changeState((StateMgr *)&result[561].currentState, (StateBase *)&dword_60CB1960);
        break;
      case 0xAu:
        result[668].owner = 0;
        result = StateMgr__changeState((StateMgr *)&result[561].currentState, (StateBase *)&dword_60CB19A0);
        break;
      case 0x14u:
      case 0x16u:
        result[668].owner = 0;
        result = StateMgr__changeState((StateMgr *)&result[561].currentState, (StateBase *)&dword_60CB1940);
        break;
      default:
        result[668].owner = a3;
        result = StateMgr__changeState((StateMgr *)&result[561].currentState, (StateBase *)&dword_60CB1920);
        break;
    }
  }
  return result;
}
