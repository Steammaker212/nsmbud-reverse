/* jc_wait_ref_8D738
 * address: 0x6008D738   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_wait_ref_8D738(int a1)
{
  int v2; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 6304);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "jc_wait";
  sub_60421AE4(v2, v4, 1);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 3);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 9356) = 0;
  FIELD_U32(a1, 9352) = 0;
  sub_60095218(a1);
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U8(a1, 15261) = 0;
  return 15261;
}
