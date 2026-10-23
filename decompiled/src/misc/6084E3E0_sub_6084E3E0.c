/* sub_6084E3E0
 * address: 0x6084E3E0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084E3E0(const void *a1, int a2, int a3)
{
  int v4; // r4
  _DWORD v6[22]; // [sp+0h] [bp-80h] BYREF
  _DWORD v7[5]; // [sp+58h] [bp-28h] BYREF
  int v8; // [sp+6Ch] [bp-14h] BYREF

  v8 = a2;
  memset(v7, 0, 16);
  qmemcpy(v6, a1, 0x54u);
  v6[5] = 0;
  v6[6] = 0;
  sub_6084E450(v6, v7, &v8, a3);
  v4 = v8;
  nullsub_88();
  return v4;
}
