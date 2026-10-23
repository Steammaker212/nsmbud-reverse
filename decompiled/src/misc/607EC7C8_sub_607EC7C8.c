/* sub_607EC7C8
 * address: 0x607EC7C8   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607EC7C8(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r5
  int *v4; // r1
  StateMgr *v5; // r0
  int v6; // r0
  int v7; // r1

  result = (StateMethodExecuter *)dword_60CAADA8;
  v3 = dword_60C99DEC;
  if ( !FIELD_U8(dword_60CAADA8, 83624) || !FIELD_U8(dword_60CAB438, 83564) )
  {
    if ( FIELD_U8(dword_60CAADA8, 83631) || FIELD_U8(dword_60CAB438, 83571) )
    {
      v4 = &dword_60CC5D8C;
    }
    else
    {
      v6 = FIELD_U32(dword_60C99DEC, 508);
      if ( v6 == 6 )
      {
        v4 = &dword_60CC5DCC;
      }
      else if ( v6 == 5 )
      {
        v4 = &dword_60CC5DAC;
      }
      else
      {
        sub_60515AE0(a1 + 14376);
        v7 = FIELD_U32(v3, 508);
        if ( v7 != 2 )
        {
          v5 = (StateMgr *)(a1 + 216);
          if ( v7 == 4 )
            v4 = &dword_60CC5C6C;
          else
            v4 = &dword_60CC5C2C;
          return StateMgr__changeState(v5, (StateBase *)v4);
        }
        v4 = &dword_60CC5C0C;
      }
    }
    v5 = (StateMgr *)(a1 + 216);
    return StateMgr__changeState(v5, (StateBase *)v4);
  }
  return result;
}
