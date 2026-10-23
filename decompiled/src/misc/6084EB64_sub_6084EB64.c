/* sub_6084EB64
 * address: 0x6084EB64   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6084EB64(_DWORD *a1, int a2, int a3)
{
  float v6; // s0
  int v7; // r1
  float v8; // s16
  _DWORD v10[24]; // [sp+8h] [bp+0h] BYREF

  qmemcpy(v10, a1, 0x54u);
  v6 = ((float (__fastcall *)(_DWORD *, int, int, _DWORD, _DWORD, _DWORD))loc_6084EC5C)(v10, a2, a3, 0, 0, 0);
  v7 = v10[6];
  v8 = v6;
  a1[5] = v10[5];
  a1[6] = v7;
  nullsub_88();
  return v8;
}
