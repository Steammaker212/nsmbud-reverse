/* jc_wait_ref_8E554
 * address: 0x6008E554   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_wait_ref_8E554(int a1)
{
  _DWORD *v1; // r4
  int v2; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  v1 = (_DWORD *)(a1 + 15240);
  sub_603F01A0(dword_60C99D6C, FIELD_U32(a1, 15240), 27, 0);
  sub_603F01A0(dword_60C99D6C, *v1, 30, 0);
  v1[3] = 2;
  v2 = *(v1 - 2234);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "jc_wait";
  return sub_60421AE4(v2, v4, 1);
}
