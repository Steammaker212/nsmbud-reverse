/* sub_605ECE18
 * address: 0x605ECE18   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605ECE18(int a1, float a2, float a3)
{
  float v4; // s0
  int v5; // r1
  float v6; // s2
  int v7; // r2
  int v8; // r5
  _BYTE *v9; // r3
  int i; // r0
  int v11; // r2
  float v12; // s0
  int v13; // r0
  int v14; // r0
  unsigned int v16; // r0
  _BYTE *v17; // r7

  v4 = 8.0;
  v5 = (unsigned __int16)FIELD_U32(a1, 20) >> 12;
  FIELD_U8(a1, 10570) = v5;
  FIELD_U8(a1, 10568) = 32;
  v6 = FIELD_F32(a1, 112);
  v7 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6104) = a1 + 24 * v5 + 6108;
  if ( v5 )
  {
    v6 = v6 + 8.0;
    v8 = 0;
    v9 = (_BYTE *)(a1 + 6128);
    for ( i = 0; i != v5; ++i )
    {
      *((_DWORD *)v9 - 5) = v7;
      *((float *)v9 - 4) = v6;
      *((_DWORD *)v9 - 3) = 1141473280;
      *((_DWORD *)v9 - 2) = 0;
      *((_DWORD *)v9 - 1) = v8;
      *v9 = i;
      v9 += 24;
      v8 += 0x1000000;
    }
  }
  if ( (FIELD_U8(a1, 27) & 0x10) != 0 )
  {
    v17 = (_BYTE *)(a1 + 10569);
    v16 = FIELD_U8(a1, 10569);
    if ( v16 < FIELD_U8(a1, 10570) )
    {
      do
      {
        v16 = (unsigned __int8)v16;
        if ( (unsigned __int8)v16 >= 0xFu )
          v16 = 0;
        sub_605ECF7C(
          a1 + 24 * v16 + 6108,
          a1 + 108,
          FIELD_U8(a1, 10566),
          FIELD_U8(a1, 29),
          v4,
          a3,
          v6);
        LOBYTE(v16) = *v17 + 1;
        *v17 = v16;
      }
      while ( (unsigned __int8)v16 < (unsigned int)FIELD_U8(a1, 10570) );
    }
    return 1;
  }
  else
  {
    v11 = FIELD_U32(a1, 108);
    v12 = FIELD_F32(a1, 112) + 8.0;
    v13 = (FIELD_U16(a1, 10564) + 1) & 0x1FF;
    FIELD_U16(a1, 10564) = v13;
    v14 = a1 + 8 * v13;
    FIELD_U32(v14, 6468) = v11;
    FIELD_F32(v14, 6472) = v12;
    return 1;
  }
}
