/* sub_604BDF90
 * address: 0x604BDF90   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604BDF90(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  int *v4; // r1

  result = (StateMethodExecuter *)FIELD_U8(a1, 35576);
  if ( result )
  {
    v3 = FIELD_U32(a1, 360);
    if ( (v3 & 0x40) != 0 )
    {
      if ( ((FIELD_U32(a1, 100) | FIELD_U32(a1, 92)) & 0x40) == 0 )
      {
        v4 = &dword_60CA27D8;
        return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v4);
      }
    }
    else
    {
      if ( (v3 & 0x80) == 0 )
      {
        v4 = &dword_60CA27D8;
        return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v4);
      }
      result = (StateMethodExecuter *)(FIELD_U32(a1, 100) | FIELD_U32(a1, 92));
      if ( ((unsigned __int8)result & 0x80) == 0 )
        return result;
    }
    sub_60502694(a1 + 564);
    v4 = &dword_60CA27F8;
    return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v4);
  }
  return result;
}
