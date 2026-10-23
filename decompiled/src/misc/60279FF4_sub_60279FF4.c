/* sub_60279FF4
 * address: 0x60279FF4   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_60279FF4(int a1)
{
  float v2; // s0
  int v3; // r0
  int v4; // r0
  signed int v5; // r0
  int v6; // r1
  int v7; // r0
  unsigned int v8; // r2
  int v9; // r6
  int ResArchiveById; // r0
  _DWORD v12[8]; // [sp+0h] [bp-20h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v3 = FIELD_U32(a1, 8552);
  if ( v3 == 2 )
  {
    v5 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
    FIELD_U32(a1, 80) = v5;
    v6 = FIELD_U32(a1, 160) + dword_60AFE3EC[v5];
    FIELD_U32(a1, 160) = v6;
    if ( v6 < 0 && v6 != 0x80000000 )
      v6 = -v6;
    v7 = Enemy_CommonRotations[v5];
    v8 = v7;
    if ( v7 < 0 )
    {
      v8 = v7;
      if ( v7 != 0x80000000 )
        v8 = -v7;
    }
    if ( v6 >= v8 )
    {
      FIELD_U32(a1, 160) = v7;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EEB8);
      v9 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
      ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
      v12[0] = &sead__SafeStringBase__vtable;
      v12[1] = "walk";
      SkeletalAnim_play(v9, ResArchiveById, (int)v12);
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 24) = 1065353216;
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4), 1);
    }
  }
  else if ( v3 == 1 )
  {
    v4 = FIELD_U32(a1, 8548);
    FIELD_U32(a1, 8548) = v4 - 1;
    if ( v4 <= 1 )
    {
      FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
      FIELD_U32(a1, 8552) = 2;
    }
  }
  if ( sub_60001B14((StageActor *)a1, a1 + 648) == 1 )
    sub_600020C4(a1, a1 + 648);
  return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
}
