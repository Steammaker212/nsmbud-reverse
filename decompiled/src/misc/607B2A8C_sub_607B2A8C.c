/* sub_607B2A8C
 * address: 0x607B2A8C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B2A8C(_DWORD *a1)
{
  int v2; // r1
  _DWORD v4[2]; // [sp+4h] [bp-14h] BYREF
  char v5; // [sp+Ch] [bp-Ch]

  v2 = a1[306];
  a1[301] |= 0x10000000u;
  a1[306] = v2 | 0x87C4;
  v4[0] = 1077936128;
  v4[1] = 1;
  v5 = 1;
  ((void (__fastcall *)(_DWORD *, _DWORD *))loc_607AF910)(a1, v4);
  a1[33] = 0;
  a1[40] = 0;
  return 0;
}
