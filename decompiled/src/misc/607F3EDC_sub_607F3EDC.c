/* sub_607F3EDC
 * address: 0x607F3EDC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F3EDC(int a1)
{
  int v2; // r5
  StateMethodExecuter *result; // r0
  int *v4; // r1

  v2 = dword_60CA83DC;
  result = (StateMethodExecuter *)sub_60512200(dword_60CA83DC);
  if ( !result )
  {
    result = (StateMethodExecuter *)sub_60511D50(v2);
    if ( !result )
    {
      if ( FIELD_U32(a1, 52) == 1 )
      {
        FIELD_U8(a1, 48) = 1;
        v4 = &dword_60CC6140;
        return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v4);
      }
      else
      {
        result = (StateMethodExecuter *)(FIELD_U32(a1, 56) - 2);
        switch ( FIELD_U32(a1, 56) )
        {
          case 2:
          case 4:
          case 5:
            v4 = &dword_60CC61C0;
            return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v4);
          case 3:
            v4 = &dword_60CC6220;
            return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v4);
          case 6:
            v4 = &dword_60CC6240;
            return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v4);
          default:
            return result;
        }
      }
    }
  }
  return result;
}
