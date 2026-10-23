/* sub_60550284
 * address: 0x60550284   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60550284(int a1, int a2)
{
  int *v3; // r5

  FIELD_U16(a1, 3608) = 257;
  if ( a2 == 1 )
    v3 = &dword_60CACF10;
  else
    v3 = &dword_60CACF08;
  sub_6047E0EC(v3, FIELD_U32(a1, 3588), 0);
  sub_6047E0EC(v3, FIELD_U32(a1, 3592), 0);
  sub_6047E0EC(v3, FIELD_U32(a1, 3596), 0);
  sub_6047E0EC(v3, FIELD_U32(a1, 3600), 0);
  sub_6047E0EC(v3, FIELD_U32(a1, 3604), 0);
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CACF38);
}
