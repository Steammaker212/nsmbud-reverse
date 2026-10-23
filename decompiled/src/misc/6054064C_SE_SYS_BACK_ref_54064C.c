/* SE_SYS_BACK_ref_54064C
 * address: 0x6054064C   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_BACK_ref_54064C(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r5
  int v4; // t1
  _DWORD *v5; // r0
  int v6; // r1
  int v7; // r2
  __int16 v8; // r1
  int *v9; // r1

  v4 = FIELD_U32(a1, 32828);
  result = (StateMethodExecuter *)(a1 + 32828);
  v3 = v4;
  if ( !BYTE2(result[1].vtable) )
  {
    if ( FIELD_U8(a1, 32843) )
    {
      v5 = (_DWORD *)(a1 + 28124);
      if ( v3 )
      {
        *v5 = &dword_60CABC7C;
        return StateMgr__changeState((StateMgr *)(a1 + 28108), (StateBase *)&dword_60CABB5C);
      }
      else
      {
        *v5 = &dword_60CABC5C;
        return StateMgr__changeState((StateMgr *)(a1 + 28108), (StateBase *)&dword_60CABB3C);
      }
    }
    else
    {
      v6 = FIELD_U32(a1, 34704);
      if ( (v6 & 0x4000) != 0 || (v7 = FIELD_U32(a1, 34708), (v7 & 0x4000) != 0) )
      {
        sub_60478680((int)"SE_SYS_BACK", 15);
        return StateMgr__changeState((StateMgr *)(a1 + 28108), (StateBase *)&dword_60CABC5C);
      }
      else
      {
        v8 = v6 | v7;
        if ( (v8 & 0x2000) != 0 )
        {
          sub_60502694((int)&result[-86].owner);
          v9 = &dword_60CABC7C;
          if ( !v3 )
            v9 = &dword_60CABC5C;
          FIELD_U32(a1, 28124) = v9;
          return StateMgr__changeState((StateMgr *)(a1 + 28108), (StateBase *)&dword_60CABB5C);
        }
        else if ( !FIELD_U8(a1, 32846) )
        {
          if ( v3 )
          {
            if ( (v8 & 0x40) != 0 )
              FIELD_U32(result, 0x0) = 0;
          }
          else if ( (v8 & 0x80) != 0 )
          {
            FIELD_U32(result, 0x0) = (void *)1;
          }
        }
      }
    }
  }
  return result;
}
