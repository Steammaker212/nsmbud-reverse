/* sub_6061F974
 * address: 0x6061F974   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061F974(int a1)
{
  int v1; // r1
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  v1 = FIELD_U32(a1, 6680);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = dword_60CB3830[2 * v1 + 12];
  return ((int (__fastcall *)(int, _DWORD *, _DWORD))sub_60621520)(a1, v3, 0);
}
