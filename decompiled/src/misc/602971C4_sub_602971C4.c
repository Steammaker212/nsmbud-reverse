/* sub_602971C4
 * address: 0x602971C4   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_602971C4(int a1, int a2)
{
  char v2; // r12
  int ResArchiveById; // r1
  int v6; // r4
  _DWORD *v7; // t1
  int *v8; // r2
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0

  if ( ((unsigned int)&dword_60C8FEFC & ~(1613328864 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8FEFC) )
  {
    dword_60C8FE74[0] = (int)&sead__SafeStringBase__vtable;
    dword_60C8FE78 = (int)"attack";
    dword_60C8FE7C = (int)&sead__SafeStringBase__vtable;
    dword_60C8FE80 = (int)"cs_wait";
    dword_60C8FE84 = (int)&sead__SafeStringBase__vtable;
    dword_60C8FE88 = (int)"dokan_fire_neck";
    dword_60C8FE8C = (int)&sead__SafeStringBase__vtable;
    dword_60C8FE90 = (int)"dead";
    dword_60C8FE94 = (int)&sead__SafeStringBase__vtable;
    dword_60C8FE98 = (int)"dead_ice";
    dword_60C8FE9C = (int)&sead__SafeStringBase__vtable;
    dword_60C8FEA0 = (int)"dead_leaf";
    dword_60C8FEA4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8FEA8 = (int)"dokan_attack";
    dword_60C8FEAC = (int)&sead__SafeStringBase__vtable;
    dword_60C8FEB0 = (int)"dokan_attack";
    dword_60C8FEB4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8FEB8 = (int)"dokan_fire_attack";
    dword_60C8FEBC = (int)&sead__SafeStringBase__vtable;
    dword_60C8FEC0 = (int)"dokan_fire_neck";
    dword_60C8FEC4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8FEC8 = (int)"dokan_fire_st";
    dword_60C8FECC = (int)&sead__SafeStringBase__vtable;
    dword_60C8FED0 = (int)"dokan_fire_wait";
    dword_60C8FED4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8FED8 = (int)"dokan_freeze";
    dword_60C8FEDC = (int)&sead__SafeStringBase__vtable;
    dword_60C8FEE0 = (int)"fire_attack_down";
    dword_60C8FEE4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8FEE8 = (int)"fire_attack_up";
    dword_60C8FEEC = (int)&sead__SafeStringBase__vtable;
    dword_60C8FEF0 = (int)"fire_wait_up";
    dword_60C8FEF4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8FEF8 = (int)"dokan_freeze";
    sub_60000288();
    _cxa_guard_release(&dword_60C8FEFC);
  }
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v7 = *(_DWORD **)(a1 + 6300);
  v6 = a1 + 6300;
  v8 = (int *)v7[3];
  v9 = v7[17];
  if ( v7[2] > v9 )
    v8 += v9;
  SkeletalAnim_play(*v8, ResArchiveById, (int)&dword_60C8FE74[2 * a2]);
  v10 = *(_DWORD *)(*(_DWORD *)v6 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v6 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v6 + 8) > v11 )
    v10 += 4 * v11;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), dword_60AFE0E8[a2]);
  v12 = *(_DWORD *)(*(_DWORD *)v6 + 12);
  v13 = *(_DWORD *)(*(_DWORD *)v6 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v6 + 8) > v13 )
    v12 += 4 * v13;
  return sub_6041838C((ModelAnimation *)(*(_DWORD *)v12 + 4));
}
