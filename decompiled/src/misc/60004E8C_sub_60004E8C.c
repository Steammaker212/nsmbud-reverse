/* sub_60004E8C
 * address: 0x60004E8C   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60004E8C()
{
  int v0; // r4
  unsigned int v1; // r9
  int v2; // r6
  int v3; // r10
  int v4; // r0
  int v5; // r5
  int v6; // r7
  int v7; // r0
  int v8; // r0
  unsigned int v9; // s0
  int v10; // r0
  int v11; // r0
  int v12; // r4
  int v13; // r0
  bool v14; // zf
  float v15; // r1
  int v16; // r0
  int v17; // r0
  bool v18; // zf
  float v19; // r1
  int v20; // r0
  int result; // r0
  bool v22; // zf
  float v23; // r1
  int v24; // r0
  float v25; // [sp+4h] [bp-2Ch] BYREF
  float v26; // [sp+8h] [bp-28h]

  v0 = 0;
  v1 = FIELD_U8(LevelInfo_instance, 17);
  v2 = FIELD_U8(LevelInfo_instance, 18);
  v3 = FIELD_U8(LevelInfo_instance, 20);
  if ( v1 > 0x39 )
    v1 = 0;
  v4 = dword_60CBC000;
  FIELD_U32(dword_60CBC000, 100) = 0;
  FIELD_U32(v4, 104) = 0;
  v5 = sub_603F7EFC(dword_60C99DC8, v1);
  v6 = 256;
  do
  {
    v7 = *(unsigned __int8 *)(v5 + v0);
    if ( v7 != 255 )
    {
      if ( v2 == v7 )
      {
        v8 = v5 + v0;
        if ( v3 == *(unsigned __int8 *)(v5 + v0 + 1) )
        {
          v9 = FIELD_U16(v8, 4);
          v10 = -FIELD_U16(v8, 6);
          v25 = (float)v9;
          v26 = (float)v10;
          v11 = sub_606E9F24(dword_60CBC000, (int *)&v25, 0, 0);
          if ( v11 )
            *(_DWORD *)(dword_60CBC000 + v6) = FIELD_U32(v11, 8);
        }
      }
      ++FIELD_U32(dword_60CBC000, 100);
    }
    v0 += 8;
    v6 += 4;
  }
  while ( v0 != 2400 );
  v12 = sub_603F7EFC(dword_60C99DC8, v1);
  v13 = FIELD_U8(v12, 2400);
  if ( v13 != 255 )
  {
    v14 = v2 == v13;
    if ( v2 == v13 )
      v14 = v3 == FIELD_U8(v12, 2401);
    if ( v14 )
    {
      v15 = FIELD_F32(v12, 2408);
      v25 = FIELD_F32(v12, 2404);
      v26 = v15;
      v16 = sub_606E9F24(dword_60CBC000, (int *)&v25, 1, 0);
      if ( v16 )
        FIELD_U32(dword_60CBC000, 1456) = FIELD_U32(v16, 8);
    }
    ++FIELD_U32(dword_60CBC000, 104);
  }
  v17 = FIELD_U8(v12, 2412);
  if ( v17 != 255 )
  {
    v18 = v2 == v17;
    if ( v2 == v17 )
      v18 = v3 == FIELD_U8(v12, 2413);
    if ( v18 )
    {
      v19 = FIELD_F32(v12, 2420);
      v25 = FIELD_F32(v12, 2416);
      v26 = v19;
      v20 = sub_606E9F24(dword_60CBC000, (int *)&v25, 1, 0);
      if ( v20 )
        FIELD_U32(dword_60CBC000, 1460) = FIELD_U32(v20, 8);
    }
    ++FIELD_U32(dword_60CBC000, 104);
  }
  result = FIELD_U8(v12, 2424);
  if ( result != 255 )
  {
    v22 = v2 == result;
    if ( v2 == result )
      v22 = v3 == FIELD_U8(v12, 2425);
    if ( v22 )
    {
      v23 = FIELD_F32(v12, 2432);
      v25 = FIELD_F32(v12, 2428);
      v26 = v23;
      v24 = sub_606E9F24(dword_60CBC000, (int *)&v25, 1, 0);
      if ( v24 )
        FIELD_U32(dword_60CBC000, 1464) = FIELD_U32(v24, 8);
    }
    result = dword_60CBC000;
    ++FIELD_U32(dword_60CBC000, 104);
  }
  return result;
}
