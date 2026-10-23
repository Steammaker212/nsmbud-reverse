/* sub_605180D0
 * address: 0x605180D0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605180D0(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 20));
  sub_6050DB10(a1 + 3652);
  sub_6050DB10(a1 + 7256);
  sub_6050DB10(a1 + 10860);
  sub_6050DB10(a1 + 14464);
  sub_6050DB10(a1 + 18068);
  return sub_60473B58((_DWORD *)(a1 + 40), FIELD_U32(a1, 36), 0);
}
