/* sub_606106B0
 * address: 0x606106B0   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606106B0(int a1)
{
  int v2; // r7
  float v3; // s2
  unsigned int v4; // r0
  float v6[2]; // [sp+4h] [bp-24h] BYREF
  signed int v7; // [sp+Ch] [bp-1Ch] BYREF

  v7 = 4;
  if ( !sub_606D4384(&v7, FIELD_U8(a1, 28)) )
    return 0;
  sub_606D45B8(a1 + 1072, v6);
  v2 = 0;
  v3 = FIELD_F32(a1, 112) - v6[1];
  FIELD_F32(a1, 1076) = FIELD_F32(a1, 108) - v6[0];
  FIELD_F32(a1, 1080) = v3;
  sub_606D465C(a1 + 108, a1 + 164);
  if ( FIELD_U32(a1, 1052) == 1 )
  {
    v4 = FIELD_U32(a1, 20);
    v2 = 0;
    if ( v4 >> 28 == 1 )
      v2 = 94371840;
    if ( !(v4 >> 28) )
      v2 = 0x10000000;
  }
  FIELD_U32(a1, 164) += v2;
  return 1;
}
