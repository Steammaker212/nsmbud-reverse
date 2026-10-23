/* sub_6084EBDC
 * address: 0x6084EBDC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6084EBDC(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  float v10; // s0
  int v11; // r1
  float v12; // s16
  _DWORD v14[30]; // [sp+8h] [bp-78h] BYREF

  qmemcpy(v14, a1, 0x54u);
  v10 = ((float (__fastcall *)(_DWORD *, int, int, int, int, int))loc_6084EC5C)(v14, a2, a3, a4, a5, a6);
  v11 = v14[6];
  v12 = v10;
  a1[5] = v14[5];
  a1[6] = v11;
  nullsub_88();
  return v12;
}
