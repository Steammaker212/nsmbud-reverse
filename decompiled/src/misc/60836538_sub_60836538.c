/* sub_60836538
 * address: 0x60836538   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60836538(int a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // r7
  _BYTE v8[88]; // [sp+0h] [bp-58h] BYREF

  v6 = nullsub_69(*a3);
  *(_DWORD *)a1 = a1 + 16;
  FIELD_U32(a1, 8) = a3[2];
  dword_60CC73C0(v8, *a2);
  dword_60CC73C4(v8);
  dword_60CC73CC(v8, v6);
  dword_60CC73C8(v8, a3[2], a3[1]);
  dword_60CC73DC(*(_DWORD *)a1, v8);
  FIELD_U8(a1, 273) &= ~1u;
  FIELD_U8(a1, 272) = 1;
  return 1;
}
