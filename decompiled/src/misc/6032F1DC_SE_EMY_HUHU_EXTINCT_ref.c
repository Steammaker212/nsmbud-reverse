/* SE_EMY_HUHU_EXTINCT_ref
 * address: 0x6032F1DC   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_HUHU_EXTINCT_ref(int a1)
{
  _DWORD *v2; // r5
  int v3; // r7
  Profile **v4; // r4
  int ResArchiveById; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r5
  float v11; // r0
  _DWORD *v12; // r5
  int v13; // r0
  int v14; // r0
  int (__fastcall ***v15)(_DWORD, int *); // r5
  char v16; // r12
  int v17; // r6
  Vec2 out; // [sp+4h] [bp-34h] BYREF
  Vec3 position; // [sp+Ch] [bp-2Ch] BYREF

  v3 = a1 + 6300;
  v2 = *(_DWORD **)(a1 + 6300);
  v4 = (Profile **)(a1 + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "touch";
  sub_60421938(v2, ResArchiveById, (int)&position);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += 4 * v7;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 0);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v9 )
    v8 += 4 * v9;
  *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
  v10 = Global_BasicSoundActor1;
  v11 = *(float *)(v3 - 6188);
  position.x = *(float *)(v3 - 6192);
  position.y = v11;
  mapPositionToScreen(&out, &position);
  sub_60813810(v10, (int)"SE_EMY_HUHU_EXTINCT", (int)&out, 1, 0);
  FIELD_U32(v3, 800) = 120;
  v12 = **(_DWORD ***)(*(_DWORD *)v3 + 28);
  v13 = Profile__getResArchiveById(*v4, 0);
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "touch";
  ShuAnim_play(v12, v13, (int)&position);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 28) + 4), 0);
  v14 = **(_DWORD **)(*(_DWORD *)v3 + 28);
  FIELD_U32(v14, 20) = 0;
  FIELD_U32(v14, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 28) + 24) = 1065353216;
  FIELD_U8(v3, 16) = 1;
  v15 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v3, 808));
  if ( v15 )
  {
    if ( ((unsigned int)dword_60C8F0A4 & ~(1613951908 << v16) & 1) == 0 && _cxa_guard_acquire(dword_60C8F0A4) )
    {
      dword_60C8F0A0 = (int)&off_60BC04AC;
      _cxa_guard_release(dword_60C8F0A4);
    }
    v17 = (int)(v15 + 4137);
    if ( !(**v15)(v15, &dword_60C8F0A0) )
      v17 = 16548;
    *(_BYTE *)v17 = 1;
  }
  FIELD_U8(a1, 6680) = 1;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
}
