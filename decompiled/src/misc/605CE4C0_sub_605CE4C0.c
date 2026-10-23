/* sub_605CE4C0
 * address: 0x605CE4C0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CE4C0(int a1)
{
  __int64 v3; // [sp+0h] [bp-10h] BYREF

  v3 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
  ((void (__fastcall *)(int, int, __int64 *))sub_605CE840)(a1 + 644, a1 + 164, &v3);
  return 1;
}
