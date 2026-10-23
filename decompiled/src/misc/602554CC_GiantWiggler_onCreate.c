/* GiantWiggler_onCreate
 * address: 0x602554CC   size: 776   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall GiantWiggler_onCreate(int a1)
{
  int v2; // r0
  _BOOL4 v3; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r7
  _DWORD *v6; // r6
  _DWORD **v7; // r6
  int v8; // r1
  int v9; // r0
  unsigned int v10; // r0
  int v11; // s0
  int v12; // s2
  int v13; // s4
  int v14; // r1
  int *v15; // r1
  int v16; // r5
  int v17; // r5
  int v18; // r5
  Vec2 out; // [sp+8h] [bp-20h] BYREF

  FIELD_U32(EnemyCounterMaybe_instance, 952) = ((unsigned __int8)FIELD_U32(EnemyCounterMaybe_instance, 952) + 1)
                                                & 3;
  FIELD_U32(a1, 116) = 1153138688;
  v2 = (unsigned __int8)FIELD_U32(a1, 20) >> 4;
  if ( v2 == 1 )
  {
    v3 = 0;
  }
  else if ( v2 )
  {
    StageActor__distanceToPlayer((StateActor *)a1, &out);
    v3 = out.x < 0.0;
  }
  else
  {
    v3 = 1;
  }
  FIELD_U32(a1, 80) = v3;
  FIELD_F32(a1, 100) = -0.1875 * 0.7;
  FIELD_U32(a1, 136) = -1065353216;
  GiantWiggler_onCreate_helper(a1);
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 6316) + 8))(a1 + 6316, a1);
  v5 = (_DWORD *)(a1 + 6500);
  v4 = *(_DWORD **)(a1 + 6500);
  (*(void (__fastcall **)(_DWORD *, int))(*v4 + 8))(v4, a1);
  v6 = (_DWORD *)v4[46];
  (*(void (__fastcall **)(_DWORD *, int))(*v6 + 8))(v6, a1);
  v7 = (_DWORD **)v6[46];
  ((void (__fastcall *)(_DWORD **, int))(*v7)[2])(v7, a1);
  (*(void (__fastcall **)(_DWORD *, int))(*v7[46] + 8))(v7[46], a1);
  FIELD_U32(a1, 6312) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 6300) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6304) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6308) = FIELD_U32(a1, 116);
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFD854, 0, &stru_60AFD860);
  FIELD_U32(a1, 3200) |= 0x10000800u;
  v8 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) |= 0x10000800u;
  FIELD_U32(a1, 3184) = v8 | 0x10000800;
  v9 = FIELD_U32(a1, 20) & 1;
  FIELD_U32(a1, 6556) = v9;
  FIELD_U32(a1, 88) = dword_60AF1F78[v9];
  FIELD_U32(a1, 160) = 715827882 * byte_60AFE3F4[FIELD_U32(a1, 80)];
  GiantWiggler_onCreate_helper_2559BC((Enemy *)a1);
  GiantWiggler_onCreate_helper_255B24(a1);
  FIELD_U32(a1, 6244) = 0;
  v10 = FIELD_U32(a1, 20);
  if ( (v10 & 0x100) != 0 )
  {
    ((void (__fastcall *)(int))loc_60255C94)(a1);
    FIELD_U8(a1, 6496) = 1;
    v10 = FIELD_U32(a1, 20);
  }
  v11 = 1124073472;
  v12 = 1126170624;
  v13 = 1148190720;
  v14 = (v10 >> 12) & 3;
  if ( v14 != 1 )
  {
    if ( v14 == 2 )
    {
      v11 = 1133510656;
      v12 = 1134559232;
    }
    else
    {
      v13 = 1135607808;
    }
  }
  FIELD_U32(a1, 500) = v13;
  FIELD_U32(a1, 504) = v12;
  FIELD_U32(a1, 508) = 1134559232;
  FIELD_U32(a1, 512) = v11;
  FIELD_U32(a1, 6560) = HIBYTE(v10);
  if ( HIBYTE(v10) )
    v15 = &dword_60C8DFE8;
  else
    v15 = &dword_60C8E008;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v15);
  sub_60257BE8(a1 + 6316);
  v16 = *v5;
  sub_60257BE8(*v5);
  v17 = FIELD_U32(v16, 184);
  sub_60257BE8(v17);
  v18 = FIELD_U32(v17, 184);
  sub_60257BE8(v18);
  sub_60257BE8(FIELD_U32(v18, 184));
  return 1;
}
