/* sub_601BA280
 * address: 0x601BA280   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_601BA280(int a1)
{
  float v2; // r0
  float v3; // r1
  float v4; // r2
  float v5; // s4
  float v6; // s2
  unsigned int result; // r0
  float v8[5]; // [sp+4h] [bp-14h] BYREF

  FIELD_U32(a1, 1108) |= 1u;
  sub_601B83F8(a1, 1);
  v2 = FIELD_F32(a1, 984);
  FIELD_F32(a1, 948) = v2;
  v3 = FIELD_F32(a1, 988);
  FIELD_F32(a1, 952) = v3;
  v4 = FIELD_F32(a1, 992);
  FIELD_F32(a1, 956) = v4;
  v5 = FIELD_F32(a1, 88);
  v6 = v3 - FIELD_F32(a1, 84);
  v8[0] = v2 - FIELD_F32(a1, 80);
  v8[1] = v6;
  v8[2] = v4 - v5;
  result = sub_60186214(a1, v8);
  FIELD_U32(a1, 1024) = result;
  return result;
}
