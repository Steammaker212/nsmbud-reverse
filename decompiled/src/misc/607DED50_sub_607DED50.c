/* sub_607DED50
 * address: 0x607DED50   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607DED50(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  int *v4; // r1

  result = (StateMethodExecuter *)dword_60CC6E04;
  v3 = FIELD_U32(dword_60CC6E04, 28);
  if ( v3 == 1 )
  {
    v4 = &dword_60CC57D4;
  }
  else
  {
    if ( v3 )
      return result;
    sub_60829274();
    FIELD_U32(dword_60C9CFB8, 16) = *(unsigned __int8 *)(FIELD_U32(dword_60CC6E04, 40) + 9);
    v4 = &dword_60CC57F4;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 212), (StateBase *)v4);
}
