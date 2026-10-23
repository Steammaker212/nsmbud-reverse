/* sub_6079F31C
 * address: 0x6079F31C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6079F31C(int a1)
{
  float v2; // s0
  float v3; // s2
  unsigned int result; // r0
  int v5; // [sp+4h] [bp-1Ch] BYREF
  int v6[2]; // [sp+8h] [bp-18h] BYREF
  int v7; // [sp+10h] [bp-10h] BYREF
  int v8; // [sp+14h] [bp-Ch]

  v2 = FIELD_F32(a1, 1244);
  v7 = FIELD_U32(a1, 304);
  *(float *)&v8 = (float)(v2 + 4.0) * 0.5;
  v3 = FIELD_F32(a1, 312);
  v5 = 11;
  *(float *)v6 = v3 * 3.5;
  v6[1] = v8;
  sub_60764C2C((_DWORD *)a1, &v7, v6, &v5);
  result = FIELD_U32(a1, 336) & 0xFFFFF7FF;
  FIELD_U32(a1, 336) = result;
  return result;
}
