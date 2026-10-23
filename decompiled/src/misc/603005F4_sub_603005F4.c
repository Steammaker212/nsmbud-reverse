/* sub_603005F4
 * address: 0x603005F4   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_603005F4(int a1, int a2)
{
  char v2; // r12
  int v5; // r4
  _DWORD *v6; // t1
  int ResArchiveById; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r0

  if ( ((unsigned int)dword_60C92DC8 & ~(1613760016 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C92DC8) )
  {
    dword_60C92D38[0] = (int)&sead__SafeStringBase__vtable;
    dword_60C92D3C = (int)"attack";
    dword_60C92D40 = (int)&sead__SafeStringBase__vtable;
    dword_60C92D44 = (int)"cs_wait";
    dword_60C92D48 = (int)&sead__SafeStringBase__vtable;
    dword_60C92D4C = (int)"dokan_fire_neck";
    dword_60C92D50 = (int)&sead__SafeStringBase__vtable;
    dword_60C92D54 = (int)"dead";
    dword_60C92D58 = (int)&sead__SafeStringBase__vtable;
    dword_60C92D5C = (int)"dead_ice";
    dword_60C92D60 = (int)&sead__SafeStringBase__vtable;
    dword_60C92D64 = (int)"dead_leaf";
    dword_60C92D68 = (int)&sead__SafeStringBase__vtable;
    dword_60C92D6C = (int)"dokan_attack";
    dword_60C92D70 = (int)&sead__SafeStringBase__vtable;
    dword_60C92D74 = (int)"dokan_attack";
    dword_60C92D78 = (int)&sead__SafeStringBase__vtable;
    dword_60C92D7C = (int)"dokan_fire_attack";
    dword_60C92D80 = (int)&sead__SafeStringBase__vtable;
    dword_60C92D84 = (int)"dokan_fire_neck";
    dword_60C92D88 = (int)&sead__SafeStringBase__vtable;
    dword_60C92D8C = (int)"dokan_fire_st";
    dword_60C92D90 = (int)&sead__SafeStringBase__vtable;
    dword_60C92D94 = (int)"dokan_fire_wait";
    dword_60C92D98 = (int)&sead__SafeStringBase__vtable;
    dword_60C92D9C = (int)"dokan_freeze";
    dword_60C92DA0 = (int)&sead__SafeStringBase__vtable;
    dword_60C92DA4 = (int)"fire_attack_down";
    dword_60C92DA8 = (int)&sead__SafeStringBase__vtable;
    dword_60C92DAC = (int)"fire_attack_up";
    dword_60C92DB0 = (int)&sead__SafeStringBase__vtable;
    dword_60C92DB4 = (int)"fire_wait_up";
    dword_60C92DB8 = (int)&sead__SafeStringBase__vtable;
    dword_60C92DBC = (int)"dokan_fire_neck";
    dword_60C92DC0 = (int)&sead__SafeStringBase__vtable;
    dword_60C92DC4 = (int)"touch";
    sub_60000288();
    _cxa_guard_release(dword_60C92DC8);
  }
  FIELD_U32(a1, 8488) = a2;
  v6 = *(_DWORD **)(a1 + 6300);
  v5 = a1 + 6300;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(v5 - 6288), 0);
  sub_60421938(v6, ResArchiveById, (int)&dword_60C92D38[2 * a2]);
  v8 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v5 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v9 )
    v8 += 4 * v9;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), dword_60AFF0D0[a2]);
  v10 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v5 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v11 )
    v10 += 4 * v11;
  return sub_6041838C((ModelAnimation *)(*(_DWORD *)v10 + 4));
}
