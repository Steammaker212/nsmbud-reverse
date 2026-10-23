/* sub_60518848
 * address: 0x60518848   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60518848(int a1)
{
  _DWORD *v2; // r4
  int result; // r0

  v2 = (_DWORD *)(a1 + 40);
  result = *(unsigned __int8 *)(sub_6047482C(a1 + 40, 0) + 51);
  if ( (result & 1) != 0 )
  {
    StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA897C);
    return sub_6047DEC8(v2, FIELD_U32(a1, 3608), 0);
  }
  return result;
}
