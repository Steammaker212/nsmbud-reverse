/* sub_6013891C
 * address: 0x6013891C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013891C(int a1)
{
  int v2; // r2
  int v3; // r0
  unsigned int v4; // r0
  float *v5; // r1
  float v6; // s0

  v2 = dword_60C8799C;
  v3 = dword_60C879A0;
  FIELD_U32(a1, 144) = dword_60C87998;
  FIELD_U32(a1, 148) = v2;
  FIELD_U32(a1, 152) = v3;
  FIELD_U32(a1, 6152) = 1053374284;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
  FIELD_U32(a1, 568) |= 0x80u;
  v4 = FIELD_U32(a1, 6136);
  v5 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v6 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  FIELD_F32(a1, 6156) = *v5 + (float)(v5[1] * v6);
  FIELD_F32(a1, 6160) = v5[2] + (float)(v6 * v5[3]);
  FIELD_U32(a1, 6164) = 1077936128;
  FIELD_U8(a1, 6168) = 1;
  FIELD_U32(a1, 6116) = 5;
  return 6116;
}
