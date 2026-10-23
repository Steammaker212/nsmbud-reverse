/* sub_602E3270
 * address: 0x602E3270   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E3270(int a1, float *a2)
{
  int v4; // r10
  int v5; // r8
  float v6; // s26
  float v7; // s28
  float v8; // s26
  int v9; // r0
  int v10; // r9
  float v11; // s0
  Actor *v12; // r0
  int ProfileId; // r0
  bool v14; // zf
  int v15; // r1
  int result; // r0
  float v17; // s0
  Actor *v18; // r0
  int v19; // r0
  int v20; // r1
  int v21; // r1
  int v22; // [sp+Ch] [bp-3Ch]
  TileCheck_Result v23; // [sp+10h] [bp-38h] BYREF
  Vec2 a3; // [sp+38h] [bp-10h] BYREF
  Vec2 positionOffset; // [sp+40h] [bp-8h] BYREF
  TileCheck v26; // [sp+48h] [bp+0h] BYREF
  TileCheck_Param v27[6]; // [sp+94h] [bp+4Ch] BYREF

  v4 = 2;
  v5 = 2;
  v22 = 0;
  do
  {
    v6 = a2[1];
    v7 = *a2 + -4.0;
    positionOffset.x = v7 + 0.0;
    v23.field_C = 0;
    positionOffset.y = v6 + 40.0;
    a3.x = v7 + 0.0;
    v23.field_10 = 0;
    *(_WORD *)&v27[0].field_0 = 0;
    v8 = v6 + (float)((float)v5 * 16.0);
    a3.y = v8;
    v27[0].field_2 = FIELD_U8(a1, 86);
    v27[0].field_3 = FIELD_U8(a1, 87);
    v27[0].field_4 = 0;
    v27[0].field_8 = 0;
    TileCheck_ctor(&v26, v27);
    v9 = TileCheck_check(&v26, &v23, &a3, &positionOffset, 15);
    if ( v5 == 2 )
    {
      if ( v9 != 1 || (v10 = 1, v23.field_20) && *(_DWORD *)(v23.field_20 + 300) == 17 )
      {
        v11 = a2[1];
        v23.field_C = 0;
        v23.field_10 = 0;
        *(_WORD *)&v27[0].field_0 = 0;
        positionOffset.x = v7 + 8.0;
        a3.x = v7 + 8.0;
        a3.y = v8;
        positionOffset.y = v11 + 40.0;
        v27[0].field_2 = FIELD_U8(a1, 86);
        v27[0].field_3 = FIELD_U8(a1, 87);
        v27[0].field_4 = 0;
        v27[0].field_8 = 0;
        TileCheck_ctor(&v26, v27);
        if ( !TileCheck_check(&v26, &v23, &a3, &positionOffset, 15)
          || (v10 = 1, v23.field_20) && *(_DWORD *)(v23.field_20 + 300) == 17 )
        {
LABEL_22:
          v10 = 5;
        }
      }
      result = v4;
      goto LABEL_25;
    }
    if ( !v9 )
      goto LABEL_16;
    v10 = 5;
    if ( !v23.field_20 )
      goto LABEL_24;
    if ( *(_DWORD *)(v23.field_20 + 300) == 17 )
      goto LABEL_16;
    v12 = *(Actor **)(v23.field_20 + 144);
    if ( !v12 )
      goto LABEL_24;
    ProfileId = Actor__getProfileId(v12);
    v14 = ProfileId == 392;
    v15 = v22 | (ProfileId != 392);
    result = v5;
    v22 = v15;
    if ( v14 )
    {
LABEL_16:
      v17 = a2[1];
      v23.field_C = 0;
      v23.field_10 = 0;
      *(_WORD *)&v27[0].field_0 = 0;
      positionOffset.x = v7 + 8.0;
      a3.x = v7 + 8.0;
      a3.y = v8;
      positionOffset.y = v17 + 40.0;
      v27[0].field_2 = FIELD_U8(a1, 86);
      v27[0].field_3 = FIELD_U8(a1, 87);
      v27[0].field_4 = 0;
      v27[0].field_8 = 0;
      TileCheck_ctor(&v26, v27);
      if ( !TileCheck_check(&v26, &v23, &a3, &positionOffset, 15) )
        goto LABEL_22;
      v10 = 5;
      if ( !v23.field_20 )
        goto LABEL_24;
      if ( *(_DWORD *)(v23.field_20 + 300) == 17 )
        goto LABEL_22;
      v18 = *(Actor **)(v23.field_20 + 144);
      if ( !v18 )
      {
LABEL_24:
        v22 = 1;
        result = v5;
        goto LABEL_25;
      }
      v19 = Actor__getProfileId(v18);
      v14 = v19 == 392;
      v20 = v22 | (v19 != 392);
      result = v5;
      v22 = v20;
      if ( v14 )
        goto LABEL_22;
    }
LABEL_25:
    v21 = v22 & 1;
    if ( (v22 & 1) != 0 )
      v21 = 2;
    if ( v10 != 5 )
      v21 = v10;
    if ( v21 )
      goto LABEL_32;
    --v5;
    v4 = result;
  }
  while ( v5 >= -1 );
  v21 = 2;
LABEL_32:
  if ( (v22 & 1) == 0 )
    result = -2;
  if ( v21 != 2 )
    return 2;
  return result;
}
