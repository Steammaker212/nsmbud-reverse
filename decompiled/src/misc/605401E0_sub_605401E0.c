/* sub_605401E0
 * address: 0x605401E0   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605401E0(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r2
  int v6; // r12
  char v7; // r2

  v4 = FIELD_U32(a1, 32828);
  result = (StateMethodExecuter *)(a1 + 32828);
  v3 = v4;
  if ( !BYTE2(result[1].vtable) )
  {
    if ( FIELD_U8(a1, 34725) )
    {
      return StateMgr__changeState((StateMgr *)(a1 + 28108), (StateBase *)&dword_60CABBDC);
    }
    else if ( FIELD_U8(a1, 32843) )
    {
      FIELD_U32(a1, 34720) = *(_DWORD *)(a1 + 4 * (v3 != 4) + 31792);
      FIELD_U8(a1, 34726) = 1;
      FIELD_U32(a1, 28124) = &dword_60CABC1C;
      return StateMgr__changeState((StateMgr *)(a1 + 28108), (StateBase *)&dword_60CABB5C);
    }
    else
    {
      v5 = FIELD_U32(a1, 34704);
      if ( (v5 & 0x2000) != 0 || (v6 = FIELD_U32(a1, 34708), (v6 & 0x2000) != 0) )
      {
        FIELD_U32(a1, 34720) = *(_DWORD *)(a1 + 4 * (v3 != 4) + 31792);
        FIELD_U8(a1, 34726) = 1;
        sub_60502694((int)&result[-86].owner);
        FIELD_U32(a1, 28124) = &dword_60CABC1C;
        return StateMgr__changeState((StateMgr *)(a1 + 28108), (StateBase *)&dword_60CABB5C);
      }
      else if ( !FIELD_U8(a1, 32846) )
      {
        v7 = v5 | v6;
        if ( v3 == 4 )
        {
          if ( v7 < 0 )
            FIELD_U32(result, 0x0) = (void *)5;
        }
        else if ( (v7 & 0x40) != 0 )
        {
          FIELD_U32(result, 0x0) = (void *)4;
        }
      }
    }
  }
  return result;
}
