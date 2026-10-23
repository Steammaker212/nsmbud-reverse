/* sub_60533464
 * address: 0x60533464   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60533464(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 12092, 0) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( *(_BYTE *)(FIELD_U32(dword_60CC6E04, 40) + 8) || !FIELD_U8(a1, 83634) )
    {
      if ( FIELD_U8(a1, 83632) && !FIELD_U8(a1, 83634) || FIELD_U8(a1, 83638) )
        v3 = &dword_60CAAE64;
      else
        v3 = &dword_60CAAE44;
    }
    else
    {
      v3 = &dword_60CAAE44;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v3);
  }
  return result;
}
