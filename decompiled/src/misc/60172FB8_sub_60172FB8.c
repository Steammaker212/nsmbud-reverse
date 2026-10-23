/* sub_60172FB8
 * address: 0x60172FB8   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60172FB8(int a1)
{
  int v2; // r0
  __n64 v3; // d0
  int v4; // r2
  int v5; // s2
  int v6; // r1
  int result; // r0
  unsigned int v8; // r6
  unsigned int v9; // r3
  int v10; // r3
  unsigned int v11; // r6
  int v12; // r6
  _DWORD *v13; // r5
  int v14; // r2
  int v15; // r6
  int v16; // r5
  unsigned int v17; // r6
  unsigned int v18; // r3
  unsigned int v19; // r0
  int v20; // r3
  _DWORD *v21; // r0
  int v22; // r1
  int v23; // r3
  unsigned int v24[9]; // [sp+4h] [bp-24h] BYREF

  v2 = sub_601CF9C0(dword_60C8AEF0);
  memset(v24, 255, 12);
  sub_6019EC34(v24, v2 + 1032);
  v3.n64_u64[0] = sub_60170BD8(a1, v24).n64_u64[0];
  v4 = 0;
  *(__n64 *)(a1 + 100) = v3;
  FIELD_U32(a1, 108) = v5;
  v6 = dword_60C89E18;
  result = dword_60CC6D78;
  v8 = FIELD_U32(dword_60CC6D78, 416);
  v9 = FIELD_U32(dword_60CC6D78, 412);
  if ( v8 >= 2 )
    v8 = 0;
  if ( v9 >= 9 )
    v9 = 0;
  v10 = *(_DWORD *)(dword_60C89E18 + 8 * v9 + 4 * v8 + 2336);
  FIELD_U32(a1, 60) = v10;
  if ( v10 != 5 )
  {
    v11 = FIELD_U32(result, 412);
    if ( v11 >= 9 )
      v11 = 0;
    v12 = 3 * v11;
    if ( FIELD_U32(result, 416) < 2u )
      v4 = FIELD_U32(result, 416);
    v13 = (_DWORD *)(v6 + 8 * v12 + 12 * v4);
    v14 = v13[602];
    v15 = v13[603];
    v16 = v13[604];
    if ( v10 == 2 )
    {
      FIELD_U32(a1, 124) = v14;
      FIELD_U32(a1, 128) = v15;
      FIELD_U32(a1, 132) = v16;
      v17 = 0;
      v18 = FIELD_U32(result, 412);
      v19 = FIELD_U32(result, 416);
      if ( v18 >= 9 )
        v18 = 0;
      v20 = 3 * v18;
      if ( v19 < 2 )
        v17 = v19;
      v21 = (_DWORD *)(v6 + 8 * v20 + 12 * v17);
      v22 = v21[656];
      v23 = v21[657];
      result = v21[658];
      FIELD_U32(a1, 136) = v22;
      FIELD_U32(a1, 140) = v23;
      FIELD_U32(a1, 144) = result;
      FIELD_U32(a1, 100) = v14;
    }
    else if ( v10 == 3 )
    {
      FIELD_U32(a1, 100) = v14;
      FIELD_U32(a1, 104) = v15;
      FIELD_U32(a1, 108) = v16;
    }
  }
  FIELD_U8(a1, 601) = 1;
  return result;
}
