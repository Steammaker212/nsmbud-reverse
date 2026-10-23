/* jc_squat_ref
 * address: 0x600FC458   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_squat_ref(int a1)
{
  int v1; // r0
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  v1 = FIELD_U32(a1, 7100);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "jc_squat";
  return sub_60421AE4(v1, v3, 0);
}
