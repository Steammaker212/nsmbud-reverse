/* sub_605CECA4
 * address: 0x605CECA4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CECA4(int a1)
{
  int v2; // r3
  __int64 v4; // [sp+0h] [bp-10h] BYREF

  v4 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
  return sub_605CE840(a1 + 6120, (_DWORD *)(a1 + 164), &v4, v2);
}
