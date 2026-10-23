/* sub_606B966C
 * address: 0x606B966C   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B966C(int a1)
{
  int *v2; // r7
  unsigned int v3; // r4
  float v4; // s16
  int Area; // r5
  int v6; // r0
  bool v7; // zf
  __int16 *v8; // r0
  int v9; // r1
  float v10; // s2
  int v11; // r0
  float v12; // s0
  int v13; // r2
  float *v14; // r1
  float v15; // s4
  float v16; // s4
  float v17; // s6
  int v18; // r5
  _DWORD *v19; // r4
  int v20; // r1
  int v21; // r7
  int v22; // r6
  unsigned int v23; // r0
  int v25; // [sp+10h] [bp-38h] BYREF
  int v26; // [sp+14h] [bp-34h]

  FIELD_U32(a1, 116) = -1010302976;
  FIELD_U32(a1, 6252) = (int)(float)((float)(2147500000.0 * 0.75) / 180.0);
  v2 = (int *)(a1 + 6252);
  v3 = FIELD_U32(a1, 20);
  FIELD_U64(a1, 6128) = v3 & 3 | 0x3C00000000LL;
  if ( (v3 & 3) != 0 )
  {
    v4 = 0.0;
    goto LABEL_20;
  }
  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v6 = sub_60727908(Area, (v3 >> 20) & 0xF);
  v7 = v6 == 0;
  if ( v6 )
    v7 = FIELD_U16(v6, 4) == 0;
  if ( v7 || (v8 = (__int16 *)sub_60727950(Area, (v3 >> 20) & 0xF)) == 0 )
  {
    FIELD_U8(a1, 6140) = 1;
  }
  else
  {
    FIELD_F32(a1, 108) = (float)*v8;
    FIELD_F32(a1, 112) = -(float)v8[1];
    if ( !FIELD_U8(a1, 6140) )
    {
      v9 = FIELD_U32(a1, 112);
      v25 = FIELD_U32(a1, 108);
      v26 = v9;
      sub_607D8938(a1 + 6144, &v25, (FIELD_U32(a1, 20) >> 20) & 0xF, 1, 0, HIBYTE(FIELD_U32(a1, 20)), 0);
      StateMgr__execute((StateMgr *)(a1 + 6164));
      v10 = FIELD_F32(a1, 6228);
      v11 = FIELD_U32(a1, 6200);
      v4 = v10 / 0.3125;
      v12 = FIELD_F32(a1, 6204);
      FIELD_F32(a1, 6136) = v10;
      *v2 = (int)(float)((float)((float)(v10 / 0.3125) * 2147500000.0) / 180.0);
      goto LABEL_11;
    }
  }
  v4 = 0.0;
  v12 = FIELD_F32(a1, 112);
  v11 = FIELD_U32(a1, 108);
LABEL_11:
  v13 = 0x1FFF;
  FIELD_U32(a1, 6256) = v11;
  FIELD_F32(a1, 6260) = v12;
  v14 = (float *)(a1 + 71788);
  v15 = -0.2;
  while ( 1 )
  {
    *((_DWORD *)v14 - 1) = v11;
    *v14 = v12 + v15;
    if ( v13 <= 1 )
      break;
    v16 = v15 + -0.2;
    *((_DWORD *)v14 - 3) = v11;
    v13 -= 2;
    v17 = v12 + v16;
    v15 = v16 + -0.2;
    *(v14 - 2) = v17;
    v14 -= 4;
  }
  v18 = 0;
  FIELD_U32(a1, 6120) = 0;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    sub_606BA3D4(a1);
  }
  else
  {
    v19 = (_DWORD *)(a1 + 71864);
    do
    {
      sub_606BA5F4(a1, &v25, v18++);
      *(v19 - 2) = v25;
      *(v19 - 1) = v26;
      *v19 = FIELD_U32(a1, 116);
      v19 += 3;
    }
    while ( v18 != 13 );
  }
  FIELD_U32(EnemyCounterMaybe_instance, 924) = FIELD_U32(a1, 71860);
  v20 = *v2;
  v21 = 13;
  FIELD_U32(a1, 6248) += v20;
  v22 = a1 + 71856;
  do
  {
    v23 = sub_6000F7B8(FIELD_F32(v22, 16) - FIELD_F32(v22, 4), -(float)(FIELD_F32(v22, 12) - *(float *)v22));
    --v21;
    FIELD_U32(v22, 168) = FIELD_U32(a1, 6248);
    FIELD_U32(v22, 172) = 0;
    FIELD_U32(v22, 176) = -v23;
    v22 += 12;
  }
  while ( v21 );
LABEL_20:
  sub_606B99AC(a1, v4);
  sub_606B9E9C(a1);
  return 1;
}
