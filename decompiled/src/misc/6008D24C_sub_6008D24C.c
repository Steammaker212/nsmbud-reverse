/* sub_6008D24C
 * address: 0x6008D24C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008D24C(_DWORD *a1)
{
  int v2; // r0
  int result; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  v2 = a1[1576];
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "jc_delight";
  sub_60421AE4(v2, v4, 0);
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 780))(a1, 4);
  sub_60813430(a1 + 2369, "SE_VOC_JR_PROV2", 0);
  a1[30] = 0;
  a1[33] = 0;
  a1[26] = 0;
  result = dword_60C82340;
  a1[2339] = dword_60C82340;
  return result;
}
