/* sub_6085E7F8
 * address: 0x6085E7F8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085E7F8(int a1, int a2)
{
  int v4; // s0
  int v5; // r0
  unsigned int v6; // r0
  unsigned int v7; // r1
  int v8; // r2
  unsigned int v9; // r1
  int v10; // r1
  char v11; // r1
  char v12; // r2
  char v13; // r0
  int v14; // r5
  char v15; // t1
  char v16; // r2
  char v17; // r3
  int result; // r0

  FIELD_U32(a2, 20) = 0;
  FIELD_U32(a2, 24) = 0;
  FIELD_U32(a2, 40) = FIELD_U32(a1, 188);
  if ( FIELD_U32(a1, 188) )
  {
    sub_60849BB8(a2, FIELD_F32(a1, 192), FIELD_F32(a1, 196));
    FIELD_U32(a2, 60) = FIELD_U32(a1, 200);
    FIELD_U32(a2, 56) = FIELD_U32(a1, 204);
    if ( (FIELD_U8(a1, 216) & 0x40) != 0 )
      v4 = FIELD_U32(a1, 56);
    else
      v4 = 2139095039;
    FIELD_U32(a2, 52) = v4;
  }
  v5 = FIELD_U32(a1, 208);
  if ( v5 )
    FIELD_U32(a2, 76) = v5;
  v6 = 0;
  if ( !FIELD_U32(a1, 252) )
  {
    v7 = FIELD_U8(a1, 218);
    v6 = (FIELD_U16(a1, 216) & 3) - 1;
    if ( v6 >= 3 )
    {
      v6 = (v7 & 3) == 0;
      if ( (v7 & 3) == 2 )
        v6 = 2;
    }
    v8 = v7 & 3;
    v9 = v7 >> 2;
    if ( v8 == 2 )
    {
      v6 |= 0x20u;
    }
    else if ( !v8 )
    {
      v6 |= 0x10u;
    }
    v10 = v9 & 3;
    if ( v10 == 2 )
    {
      v6 |= 0x200u;
    }
    else if ( !v10 )
    {
      v6 |= 0x100u;
    }
  }
  FIELD_U32(a2, 72) = v6;
  v11 = FIELD_U8(a1, 180);
  v12 = FIELD_U8(a1, 182);
  v13 = FIELD_U8(a1, 183);
  FIELD_U8(a2, 1) = FIELD_U8(a1, 181);
  *(_BYTE *)a2 = v11;
  FIELD_U8(a2, 3) = v13;
  FIELD_U8(a2, 2) = v12;
  v15 = FIELD_U8(a1, 184);
  v14 = a1 + 184;
  v16 = FIELD_U8(v14, 2);
  v17 = FIELD_U8(v14, 3);
  FIELD_U8(a2, 5) = FIELD_U8(v14, 1);
  FIELD_U8(a2, 4) = v15;
  FIELD_U8(a2, 7) = v17;
  FIELD_U8(a2, 6) = v16;
  result = FIELD_U32(v14, 36);
  FIELD_U32(a2, 36) = result;
  return result;
}
