/* sub_6007E1E8
 * address: 0x6007E1E8   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6007E1E8(int result)
{
  int v1; // r3
  unsigned int v2; // lr
  float *v3; // r1
  float v4; // s0
  float v5; // s4

  v1 = FIELD_U32(result, 20);
  v2 = 0;
  if ( BYTE1(v1) )
    v2 = dword_60C8193C + (dword_60C81940 - dword_60C8193C) / BYTE1(v1) * BYTE2(v1);
  v3 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v4 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v5 = *v3 + (float)(v3[1] * v4);
  FIELD_F32(result, 120) = (float)(v3[2] + (float)(v4 * v3[3])) * 1.75;
  FIELD_F32(result, 124) = v5 * 1.75;
  FIELD_U32(result, 164) = v2 - 0x40000000;
  FIELD_U8(result, 6104) = 0;
  FIELD_U32(result, 3204) |= 0x1000u;
  FIELD_U32(result, 3180) |= 0x1000u;
  FIELD_U32(result, 3188) |= 0x1000u;
  FIELD_U32(result, 3196) |= 0x1000u;
  return result;
}
