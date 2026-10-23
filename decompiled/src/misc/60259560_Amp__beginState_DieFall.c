/* Amp__beginState_DieFall
 * address: 0x60259560   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF0
// 
// Overridden by: None
ActiveColliderMgr *__fastcall Amp__beginState_DieFall(int a1)
{
  int v2; // r7
  int v3; // r5
  int ResArchiveById; // r0
  int v5; // r0
  int v6; // r0
  int v7; // s0
  int v8; // r2
  int v9; // r3
  int *v10; // r1
  ActiveCollider *v11; // r4
  ActiveColliderMgr *v12; // r5
  _DWORD v14[8]; // [sp+8h] [bp-20h] BYREF

  v2 = a1 + 6300;
  v3 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = "body_wait";
  SkeletalAnim_play(v3, ResArchiveById, (int)v14);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 24) = 0;
  v5 = **(_DWORD **)(*(_DWORD *)v2 + 12);
  FIELD_U32(v5, 20) = 0;
  FIELD_U32(v5, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 4), 1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  CollisionMgr_vf14(a1 + 648);
  v6 = FIELD_U32(a1, 6128);
  FIELD_U32(a1, 6284) = v6;
  FIELD_U32(a1, 104) = 0;
  v7 = byte_60AFE3F4[v6];
  FIELD_U32(a1, 100) = FIELD_U32(a1, 6116);
  FIELD_F32(a1, 120) = (float)v7 * 1.5;
  FIELD_U32(a1, 124) = 1080033280;
  v8 = FIELD_S8(a1, 6124);
  if ( v8 >= 0 )
  {
    v9 = FIELD_S8(a1, 6132);
    if ( (unsigned __int8)v9 > 3u )
    {
      if ( (unsigned __int8)v9 == 4 )
        sub_600229B0(0.0, 24.0, dword_60C7F52C, a1, v8);
    }
    else
    {
      sub_60022540(dword_60C7F52C, a1 + 108, v8, v9, 1);
    }
  }
  v10 = dword_60259740;
  if ( (FIELD_U8(a1, 87) & 2) != 0 )
    v10 = &dword_60259740[1];
  FIELD_U32(a1, 116) = *v10;
  v11 = (ActiveCollider *)(a1 + 6580);
  v12 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v11);
  ActiveColldierMgr_removeFromCreateList(v12, v11);
  return ActiveColldierMgr_removeFromList3(v12, (int)v11);
}
