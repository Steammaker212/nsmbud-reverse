/* sub_6061FB48
 * address: 0x6061FB48   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061FB48(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // r1
  _DWORD v6[4]; // [sp+0h] [bp-10h] BYREF

  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[33] = 0;
  a1[34] = -1065353216;
  a1[35] = 0;
  a1[25] = -1105199104;
  v4 = a1[1670];
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = dword_60CB3830[2 * v4 + 16];
  return ((int (__fastcall *)(_DWORD *, _DWORD *, int, int))sub_60621520)(a1, v6, 1, a4);
}
