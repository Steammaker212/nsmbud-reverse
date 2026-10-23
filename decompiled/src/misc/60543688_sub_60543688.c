/* sub_60543688
 * address: 0x60543688   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60543688(StateMethodExecuter *result)
{
  StateMgr *v1; // r0
  int *v2; // r1
  bool v3; // zf

  if ( (unsigned int)(*((_DWORD *)result[2789].vtable + 123) - 1) <= 3 )
  {
    v1 = (StateMgr *)&result[2];
    v2 = &dword_60CABF3C;
    return StateMgr__changeState(v1, (StateBase *)v2);
  }
  v3 = dword_60C89E18 == 0;
  if ( dword_60C89E18 )
    v3 = FIELD_U8(dword_60C89E18, 17049) == 0;
  if ( !v3 )
  {
    v1 = (StateMgr *)&result[2];
    if ( (FIELD_U8(dword_60CC6D78, 44) & 8) != 0 )
      v2 = &dword_60CAC2BC;
    else
      v2 = &dword_60CABF3C;
    return StateMgr__changeState(v1, (StateBase *)v2);
  }
  return result;
}
