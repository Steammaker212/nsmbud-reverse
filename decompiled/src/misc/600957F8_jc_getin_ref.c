/* jc_getin_ref
 * address: 0x600957F8   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_getin_ref(_DWORD *a1)
{
  int v2; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  v2 = a1[1576];
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "jc_getin";
  sub_60421AE4(v2, v4, 0);
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 780))(a1, 2);
  a1[30] = dword_60AFE3F8[a1[20]];
  a1[31] = 1077936128;
  a1[32] = 0;
  a1[33] = 0;
  a1[34] = -1056964608;
  a1[35] = 0;
  a1[26] = 0;
  a1[25] = -1105618534;
  return -1105618534;
}
