/* sub_6032ED40
 * address: 0x6032ED40   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032ED40(int a1)
{
  Vec3 *v1; // r4
  _DWORD *v2; // r5
  int ResArchiveById; // r0
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  ActiveColliderMgr *v8; // r6
  int (**x_low)(); // [sp+0h] [bp-20h] BYREF
  const char *y_low; // [sp+4h] [bp-1Ch]

  v1 = (Vec3 *)(a1 + 6300);
  v2 = *(_DWORD **)(a1 + 6300);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  x_low = &sead__SafeStringBase__vtable;
  y_low = "dead_01";
  sub_60421938(v2, ResArchiveById, (int)&x_low);
  v4 = *(_DWORD *)(LODWORD(FIELD_F32(v1, 0x0)) + 12);
  v5 = *(_DWORD *)(LODWORD(FIELD_F32(v1, 0x0)) + 68);
  if ( *(_DWORD *)(LODWORD(FIELD_F32(v1, 0x0)) + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 0);
  v6 = *(_DWORD *)(LODWORD(FIELD_F32(v1, 0x0)) + 12);
  v7 = *(_DWORD *)(LODWORD(FIELD_F32(v1, 0x0)) + 68);
  if ( *(_DWORD *)(LODWORD(FIELD_F32(v1, 0x0)) + 8) > v7 )
    v6 += 4 * v7;
  *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
  EffectData_create(694, v1 - 516, 0, 0);
  LOBYTE(v1[31].z) = 1;
  LOBYTE(v1[1].y) = 1;
  v8 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)&v1[-510].z);
  ActiveColldierMgr_removeFromCreateList(v8, (ActiveCollider *)&v1[-510].z);
  ActiveColldierMgr_removeFromList3(v8, (int)&v1[-510].z);
  v1[-515].x = 0.0;
  v1[-515].y = 0.0;
  v1[-515].z = 0.0;
  x_low = (int (**)())LODWORD(v1[-516].x);
  y_low = (const char *)LODWORD(v1[-516].y);
  return (*(int (__fastcall **)(int, const char *, int (***)(), _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 36))(
           Global_BasicSoundActor1,
           "SE_EMY_HUHU_DOWN",
           &x_low,
           0);
}
