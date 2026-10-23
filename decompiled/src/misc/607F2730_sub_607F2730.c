/* sub_607F2730
 * address: 0x607F2730   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F2730(int a1, _DWORD *a2)
{
  int v3; // r0
  __int16 v5; // [sp+0h] [bp-70h] BYREF

  v3 = sub_6090B350(&v5);
  v5 = 1;
  sub_6090B4B0(v3, a2[10]);
  sub_603FF388(dword_60C99E2C);
  sub_60239158(dword_60C8D9DC, a2, 9, 0);
  return sub_60499988(dword_60CA059C);
}
