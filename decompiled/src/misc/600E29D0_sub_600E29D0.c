/* sub_600E29D0
 * address: 0x600E29D0   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600E29D0(int a1)
{
  float v2; // s0
  float v3; // s16
  float v4; // s0
  int v5; // r11
  int v6; // r8
  int *v7; // r7
  int *v8; // r4
  char *v9; // r9
  int *v10; // r12
  int v11; // r1
  int v12; // r2
  int v13; // r10
  sead_ListNode *v14; // r6
  float *v15; // r4
  float v16; // s16
  float v17; // s6
  float v18; // s2
  float v19; // s4
  int v21; // [sp+8h] [bp-98h]
  CircularColliderInfo info; // [sp+18h] [bp-88h] BYREF
  _BYTE v23[8]; // [sp+38h] [bp-68h] BYREF
  int v24; // [sp+40h] [bp-60h]
  int v25; // [sp+44h] [bp-5Ch]
  int v26; // [sp+48h] [bp-58h]
  _DWORD v27[2]; // [sp+60h] [bp-40h] BYREF
  _DWORD v28[14]; // [sp+68h] [bp-38h] BYREF

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 192))(a1);
  FIELD_U32(a1, 6536) = 1065353216;
  v2 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 200))(a1);
  FIELD_F32(a1, 144) = v2;
  FIELD_F32(a1, 148) = v2;
  FIELD_F32(a1, 152) = v2;
  FIELD_U32(a1, 116) = -988004352;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, 0, 0, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 236))(a1);
  v3 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
  v4 = (*(float (__fastcall **)(int, float))(*(_DWORD *)a1 + 200))(a1, v3);
  memset(&info, 0, 24);
  info.radius = v3 * v4;
  info.rotation = 0;
  CircularCollider_init((CircularCollider *)(a1 + 6104), (StageActor *)a1, &info);
  FIELD_U32(a1, 6416) = sub_600E2D20;
  FIELD_U32(a1, 6420) = sub_600E2F44;
  v21 = a1;
  FIELD_U32(a1, 6424) = &loc_600E310C;
  if ( !dword_60C84E98 )
  {
    v5 = 0;
    v6 = 0;
    v7 = &dword_60AF5E14;
    v8 = &dword_60C84E9C;
    do
    {
      v9 = (char *)&unk_60C84D90 + v5;
      v10 = (int *)((char *)&unk_60C84D90 + v5 + 8);
      *(_DWORD *)((char *)&unk_60C84D90 + v5 + 32) = *v7;
      v11 = v8[1];
      v12 = v8[2];
      *v10 = *v8;
      v10[1] = v11;
      v10[2] = v12;
      v13 = *(_DWORD *)((char *)&unk_60C84D90 + v5 + 36);
      if ( v13 )
      {
        v14 = (sead_ListNode *)((char *)&unk_60C84D90 + 40 * v6);
        *((_DWORD *)v9 + 9) = 0;
        sead__ListNode__erase((char *)&unk_60C84D90 + v5);
        --FIELD_U32(v13, 8);
      }
      else
      {
        v14 = (sead_ListNode *)((char *)&unk_60C84D90 + v5);
      }
      *((_DWORD *)v9 + 9) = &dword_60C84E90;
      sead__ListNode__insertFront((sead_ListNode *)&dword_60C84E90, v14);
      v5 += 40;
      v8 += 3;
      ++v7;
      ++v6;
      ++dword_60C84E98;
    }
    while ( v5 != 240 );
  }
  v15 = (float *)v21;
  FIELD_U32(v21, 6504) = 0;
  FIELD_U32(v21, 6508) = 1096810496;
  AnimationCtrl_setRepeat((ModelAnimation *)(v21 + 6504), 0);
  FIELD_U32(v21, 6524) = 0;
  sub_6041838C((ModelAnimation *)(v21 + 6504));
  FIELD_U32(v21, 100) = -1103101952;
  FIELD_U32(v21, 136) = -1061158912;
  v16 = (*(float (__fastcall **)(float *))(*(_DWORD *)v15 + 204))(v15);
  v17 = v15[28] - (float)(v16 * (*(float (__fastcall **)(float *, float))(*(_DWORD *)v15 + 200))(v15, v16));
  v18 = FIELD_F32(dword_60CC6484, 108);
  v19 = FIELD_F32(dword_60CC6484, 124);
  v28[0] = FIELD_U32(v21, 108);
  *(float *)&v28[1] = v17;
  v27[0] = v28[0];
  *(float *)&v27[1] = v19 - v18;
  if ( v17 >= (float)(v19 - v18) )
  {
    v25 = 0;
    v26 = 0;
    if ( ((int (__fastcall *)(int, _BYTE *, _DWORD *, _DWORD *, int))loc_6015D2DC)(v21 + 652, v23, v28, v27, 8) == 1 )
      FIELD_U32(v21, 6544) = v24;
  }
  FIELD_U32(v21, 624) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 196))(v21);
  return 1;
}
