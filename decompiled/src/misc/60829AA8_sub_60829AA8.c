/* sub_60829AA8
 * address: 0x60829AA8   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60829AA8(int a1)
{
  int v2; // r10
  _QWORD *v3; // r4
  int v4; // r6
  __int64 *v5; // r5
  __int64 v6; // r8
  unsigned __int64 v7; // r0
  char v8; // r2
  unsigned int v9; // r5
  int v10; // r1
  int v11; // r7
  int v12; // r3
  unsigned int *v13; // r2
  unsigned int v14; // r3
  unsigned int v15; // r0
  int v16; // r4
  unsigned __int8 v17; // r0
  unsigned int v18; // r2
  int v19; // r0
  int v20; // r7
  int v21; // r4
  unsigned int v22; // r2
  int v23; // r7
  int v24; // r4
  int v25; // r1
  _BYTE *v26; // r6
  int v27; // t1
  int v28; // r0
  int result; // r0

  v2 = 0;
  v3 = (_QWORD *)(a1 + 64);
  v4 = FIELD_U32(a1, 40);
  v5 = (__int64 *)(dword_60CC6BE4 + 200);
  v6 = FIELD_U64(dword_60CC6BE4, 200);
  v7 = (v6 - FIELD_U64(a1, 64)) / 0x3CuLL;
  if ( (unsigned int)v7 >= 0x3C )
  {
    HIDWORD(v7) = FIELD_U32(v4, 44128);
    LODWORD(v7) = HIDWORD(v7) + (unsigned int)v7 / 0x3C;
    if ( (unsigned int)v7 < HIDWORD(v7) )
      LODWORD(v7) = -1;
    FIELD_U32(v4, 44128) = v7;
    v8 = FIELD_U8(a1, 48);
    if ( HIDWORD(v7) != (_DWORD)v7 )
      v8 |= 1u;
    FIELD_U8(a1, 48) = v8;
    *v3 = v6;
    v6 = *v5;
  }
  v9 = (v6 - FIELD_U64(a1, 72)) / 0x3CuLL;
  v10 = dword_60CC6D8C;
  if ( v9 >= 0x3C )
  {
    v11 = 1;
    v2 = 1;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      v12 = 44136;
    else
      v12 = 44132;
    v13 = (unsigned int *)(v4 + v12);
    v14 = *(_DWORD *)(v4 + v12);
    v15 = v14 + v9 / 0x3C;
    if ( v15 >= v14 )
      v11 = 0;
    if ( v11 )
      v15 = -1;
    *v13 = v15;
    FIELD_U64(a1, 72) = v6;
  }
  v16 = FIELD_U8(v10, 17);
  v17 = sub_608FBB8C(FIELD_U8(dword_60CC6D78, 2092));
  if ( v16 )
  {
    if ( FIELD_U8(v4, 44306) < (unsigned int)v17 )
    {
      FIELD_U8(v4, 44306) = v17;
      v2 = 1;
    }
    v18 = FIELD_U8(v4, 44305);
    v19 = dword_60CC6D78;
    if ( v18 <= 8 )
    {
      v20 = 9;
      while ( 1 )
      {
        v21 = v20 - 1;
        if ( (FIELD_U16(dword_60CC6D78, 520) & (1 << (v20 - 1))) != 0 )
          break;
        --v20;
        if ( v21 <= (int)v18 )
          goto LABEL_32;
      }
      v2 = 1;
      FIELD_U8(v4, 44305) = v20;
    }
LABEL_32:
    v25 = 44297;
  }
  else
  {
    if ( FIELD_U8(v4, 44304) < (unsigned int)v17 )
    {
      FIELD_U8(v4, 44304) = v17;
      v2 = 1;
    }
    v22 = FIELD_U8(v4, 44303);
    v19 = dword_60CC6D78;
    if ( v22 <= 8 )
    {
      v23 = 9;
      while ( 1 )
      {
        v24 = v23 - 1;
        if ( (FIELD_U16(dword_60CC6D78, 520) & (1 << (v23 - 1))) != 0 )
          break;
        --v23;
        if ( v24 <= (int)v22 )
          goto LABEL_34;
      }
      v2 = 1;
      FIELD_U8(v4, 44303) = v23;
    }
LABEL_34:
    v25 = 44296;
  }
  v27 = *(unsigned __int8 *)(v4 + v25);
  v26 = (_BYTE *)(v4 + v25);
  v28 = FIELD_U32(v19, 52);
  if ( v27 < v28 )
  {
    *v26 = v28;
    v2 = 1;
  }
  result = FIELD_U8(a1, 48);
  if ( v2 )
    result |= 1u;
  FIELD_U8(a1, 48) = result;
  return result;
}
