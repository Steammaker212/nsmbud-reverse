/* sub_602CEA38
 * address: 0x602CEA38   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CEA38(int a1)
{
  float v2; // s0
  float v3; // s4
  float x; // s0
  _DWORD *v5; // r6
  _DWORD *v6; // r8
  _DWORD *v7; // r6
  _DWORD **v8; // r6
  int v9; // r0
  int v10; // r6
  _BYTE *v11; // r0
  _DWORD *v12; // r7
  _DWORD *v13; // r7
  _DWORD **v14; // r7
  int v15; // r4
  int v16; // r4
  int v17; // r4
  Vec2 out; // [sp+8h] [bp-28h] BYREF

  v2 = (float)(((unsigned __int8)FIELD_U32(EnemyCounterMaybe_instance, 952) + 1) & 3);
  FIELD_U32(EnemyCounterMaybe_instance, 952) = ((unsigned __int8)FIELD_U32(EnemyCounterMaybe_instance, 952) + 1)
                                                & 3;
  v3 = (float)(v2 * 64.0) + 1500.0;
  FIELD_F32(a1, 6580) = v3;
  FIELD_F32(a1, 116) = v3;
  FIELD_U8(a1, 84) = StageActor__distanceToPlayer((StateActor *)a1, &out);
  x = out.x;
  FIELD_U32(a1, 80) = out.x < 0.0;
  sub_602CED1C(a1, x);
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 6316) + 8))(a1 + 6316, a1);
  v6 = (_DWORD *)(a1 + 6436);
  v5 = *(_DWORD **)(a1 + 6436);
  (*(void (__fastcall **)(_DWORD *, int))(*v5 + 8))(v5, a1);
  v7 = (_DWORD *)v5[30];
  (*(void (__fastcall **)(_DWORD *, int))(*v7 + 8))(v7, a1);
  v8 = (_DWORD **)v7[30];
  ((void (__fastcall *)(_DWORD **, int))(*v8)[2])(v8, a1);
  (*(void (__fastcall **)(_DWORD *, int))(*v8[30] + 8))(v8[30], a1);
  v9 = FIELD_U32(a1, 80);
  FIELD_U32(a1, 6312) = v9;
  FIELD_U32(a1, 6300) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6304) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6308) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 160) = 0x3FFFFFFF * byte_60AFE3F4[v9];
  FIELD_U32(a1, 144) = 1065353216;
  v10 = a1 + 144;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  sub_602CEEB8(a1);
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFEA74, 0, &stru_60AFEA80);
  FIELD_U32(a1, 508) = 1119879168;
  FIELD_U32(a1, 512) = 1115684864;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U32(a1, 640) = a1 + 6232;
  v11 = (_BYTE *)(a1 + 6584);
  if ( FIELD_U8(a1, 30) )
  {
    *v11 = 1;
    sub_602CF048(4.0);
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 6316) + 36))(a1 + 6316);
    v12 = *(_DWORD **)(a1 + 6436);
    (*(void (__fastcall **)(_DWORD *))(*v12 + 36))(v12);
    v13 = (_DWORD *)v12[30];
    (*(void (__fastcall **)(_DWORD *))(*v13 + 36))(v13);
    v14 = (_DWORD **)v13[30];
    ((void (__fastcall *)(_DWORD **))(*v14)[9])(v14);
    (*(void (__fastcall **)(_DWORD *))(*v14[30] + 36))(v14[30]);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C919F8);
  }
  else
  {
    *v11 = 0;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91998);
  }
  sub_602D1910(a1 + 6316, a1 + 144);
  v15 = *v6;
  sub_602D1910(*v6, v10);
  v16 = FIELD_U32(v15, 120);
  sub_602D1910(v16, v10);
  v17 = FIELD_U32(v16, 120);
  sub_602D1910(v17, v10);
  sub_602D1910(FIELD_U32(v17, 120), v10);
  return 1;
}
