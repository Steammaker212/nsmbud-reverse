/* sub_603D4FE8
 * address: 0x603D4FE8   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_603D4FE8(int a1, int a2)
{
  char v2; // r12
  int v5; // r4
  _DWORD *v6; // t1
  int ResArchiveById; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r0

  if ( ((unsigned int)&dword_60C98F74[1] & ~(1614630920 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C98F74[1]) )
  {
    dword_60C98FA0 = (int)&sead__SafeStringBase__vtable;
    dword_60C98FA4 = (int)"walk";
    dword_60C98FA8 = (int)&sead__SafeStringBase__vtable;
    dword_60C98FAC = (int)"attack_st";
    dword_60C98FB0 = (int)&sead__SafeStringBase__vtable;
    dword_60C98FB4 = (int)"attack";
    dword_60C98FB8 = (int)&sead__SafeStringBase__vtable;
    dword_60C98FBC = (int)"attack_ed";
    dword_60C98FC0 = (int)&sead__SafeStringBase__vtable;
    dword_60C98FC4 = (int)"dead";
    dword_60C98FC8 = (int)&sead__SafeStringBase__vtable;
    dword_60C98FCC = (int)"touch_attack";
    sub_60000288();
    _cxa_guard_release(&dword_60C98F74[1]);
  }
  FIELD_U32(a1, 6332) = a2;
  v6 = *(_DWORD **)(a1 + 6380);
  v5 = a1 + 6380;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(v5 - 6368), 0);
  sub_60421938(v6, ResArchiveById, (int)&byte_60C98F70[8 * a2 + 48]);
  v8 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v5 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v9 )
    v8 += 4 * v9;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), dword_60B01270[a2]);
  v10 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v5 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v11 )
    v10 += 4 * v11;
  return sub_6041838C((ModelAnimation *)(*(_DWORD *)v10 + 4));
}
