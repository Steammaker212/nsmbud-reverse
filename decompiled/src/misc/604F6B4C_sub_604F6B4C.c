/* sub_604F6B4C
 * address: 0x604F6B4C   size: 1152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604F6B4C(int a1)
{
  int v2; // r0
  float v3; // s0
  int v4; // r7
  int v5; // r9
  int v6; // r6
  int v7; // r11
  int v8; // r5
  int v9; // r10
  char v10; // r0
  int v11; // r1
  int v12; // r9
  _DWORD *v13; // r0
  int v14; // r0
  unsigned int v15; // r5
  bool v16; // zf
  int v17; // r0
  bool v18; // zf
  int v19; // r0
  bool v20; // zf
  int v21; // r0
  bool v22; // zf
  unsigned int v23; // r0
  unsigned int v24; // r7
  float v25; // s0
  unsigned int v26; // r4
  float v27; // s0
  float v28; // s0
  float v29; // s0
  float v30; // s0
  unsigned int v31; // r5
  StateBase *v32; // r1
  _DWORD *v34; // [sp+4h] [bp-44h]
  _DWORD *v35; // [sp+8h] [bp-40h]
  int v36; // [sp+Ch] [bp-3Ch]
  _DWORD v37[14]; // [sp+10h] [bp-38h] BYREF

  v34 = (_DWORD *)dword_60C99DEC;
  v2 = sub_60473B4C(a1 + 40);
  sub_6098F1D4(v2);
  v36 = a1;
  v4 = 0;
  v5 = 0;
  v6 = FIELD_U32(a1, 9628);
  v35 = (_DWORD *)(a1 + 9628);
  v7 = dword_60CC6D78 + 98488;
  do
  {
    v8 = *(_DWORD *)(v6 + 4 * v5);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v7 + 4 * v5);
      v10 = 0;
      v11 = dword_60B034A8[v9];
      FIELD_U32(v8, 3592) = v11;
      if ( v9 != 15 )
      {
        sub_60473DE4((_DWORD *)v8, 0, &dword_60CA6ACC[2 * v11], 0);
        v10 = 1;
      }
      FIELD_U8(v8, 3580) = v10;
      if ( v9 != 15 )
        ++v4;
    }
    ++v5;
  }
  while ( v5 != 10 );
  FIELD_U32(v6, 40) = v4;
  v12 = a1 + 7588;
  v13 = (_DWORD *)*v35;
  if ( *(_DWORD *)(*(_DWORD *)*v35 + 3592) == 10 )
  {
    sub_6047EEC4(a1 + 7588, 0, v3);
    FIELD_U8(a1, 8048) = 0;
    v13 = (_DWORD *)*v35;
  }
  if ( *(_DWORD *)(v13[1] + 3592) == 10 )
  {
    sub_6047EEC4(v12, 1, v3);
    FIELD_U8(a1, 8049) = 0;
    v13 = (_DWORD *)*v35;
  }
  if ( *(_DWORD *)(v13[2] + 3592) == 10 )
  {
    sub_6047EEC4(v12, 2, v3);
    FIELD_U8(a1, 8050) = 0;
    v13 = (_DWORD *)*v35;
  }
  if ( *(_DWORD *)(v13[3] + 3592) == 10 )
  {
    sub_6047EEC4(v12, 3, v3);
    FIELD_U8(a1, 8051) = 0;
    v13 = (_DWORD *)*v35;
  }
  if ( *(_DWORD *)(v13[4] + 3592) == 10 )
  {
    sub_6047EEC4(v12, 4, v3);
    FIELD_U8(a1, 8052) = 0;
    v13 = (_DWORD *)*v35;
  }
  if ( *(_DWORD *)(v13[5] + 3592) == 10 )
  {
    sub_6047EEC4(v12, 5, v3);
    FIELD_U8(a1, 8053) = 0;
    v13 = (_DWORD *)*v35;
  }
  if ( *(_DWORD *)(v13[6] + 3592) == 10 )
  {
    sub_6047EEC4(v12, 6, v3);
    FIELD_U8(a1, 8054) = 0;
    v13 = (_DWORD *)*v35;
  }
  if ( *(_DWORD *)(v13[7] + 3592) == 10 )
  {
    sub_6047EEC4(v12, 7, v3);
    FIELD_U8(a1, 8055) = 0;
    v13 = (_DWORD *)*v35;
  }
  if ( *(_DWORD *)(v13[8] + 3592) == 10 )
  {
    sub_6047EEC4(v12, 8, v3);
    FIELD_U8(a1, 8056) = 0;
    v13 = (_DWORD *)*v35;
  }
  if ( *(_DWORD *)(v13[9] + 3592) == 10 )
  {
    sub_6047EEC4(v12, 9, v3);
    FIELD_U8(a1, 8057) = 0;
  }
  v14 = v34[121];
  v15 = 0;
  v16 = v14 == 4;
  if ( v14 != 4 )
    v16 = v14 == 12;
  if ( !v16 )
  {
    if ( v14 == 15 )
      goto LABEL_51;
    v15 = 1;
    v37[0] = dword_60B034A8[v14];
  }
  v17 = v34[122];
  v18 = v17 == 4;
  if ( v17 != 4 )
    v18 = v17 == 12;
  if ( !v18 )
  {
    if ( v17 == 15 )
      goto LABEL_51;
    v37[v15++] = dword_60B034A8[v17];
  }
  v19 = v34[123];
  v20 = v19 == 4;
  if ( v19 != 4 )
    v20 = v19 == 12;
  if ( !v20 )
  {
    if ( v19 == 15 )
      goto LABEL_51;
    v37[v15++] = dword_60B034A8[v19];
  }
  v21 = v34[124];
  v22 = v21 == 4;
  if ( v21 != 4 )
    v22 = v21 == 12;
  if ( !v22 )
  {
    if ( v21 == 15 )
      goto LABEL_51;
    v37[v15++] = dword_60B034A8[v21];
  }
  v23 = v34[125];
  if ( v23 > 0xF || ((1 << v23) & 0x9010) == 0 )
    v37[v15++] = dword_60B034A8[v23];
LABEL_51:
  v24 = sub_604F6FF8(*v35, v37, v15);
  FIELD_U16(a1, 7140) = 257;
  if ( v15 <= v24 )
  {
    *(_BYTE *)(FIELD_U32(a1, 3592) + 64) |= 1u;
    v32 = &stru_60CA681C;
  }
  else
  {
    sub_6047EEC4(v12, 10, v25);
    v26 = 0;
    FIELD_U8(v36, 8058) = 0;
    sub_6047EEC4(v12, 11, v27);
    FIELD_U8(v36, 8059) = 0;
    sub_6047EEC4(v12, 12, v28);
    FIELD_U8(v36, 8060) = 0;
    sub_6047EEC4(v12, 13, v29);
    FIELD_U8(v36, 8061) = 0;
    sub_6047EEC4(v12, 14, v30);
    v31 = v15 - v24;
    FIELD_U8(v36, 8062) = 0;
    if ( v24 < 5 )
      v26 = v24;
    FIELD_U32(v36, 9644) = v24;
    FIELD_U32(v36, 9648) = v31;
    sub_604F714C(FIELD_U32(v36, 9632), &v37[v26], v31);
    ItemStock_DelItem_ref(v36, v31);
    v32 = (StateBase *)&unk_60CA689C;
  }
  return StateMgr__changeState((StateMgr *)(v36 + 24), v32);
}
