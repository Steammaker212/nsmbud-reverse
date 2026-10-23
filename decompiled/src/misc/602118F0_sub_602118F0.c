/* sub_602118F0
 * address: 0x602118F0   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602118F0(int a1, int a2, float a3, float a4)
{
  char v4; // r12
  int ResArchiveById; // r1
  __guard *v10; // r2
  int v11; // r4
  int result; // r0

  if ( ((unsigned int)&dword_60C8CFD0[1] & ~(1612781852 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8CFD0[1]) )
  {
    dword_60C8CFEC = (int)&sead__SafeStringBase__vtable;
    dword_60C8CFF0 = (int)"cobRainbowTateAppear";
    dword_60C8CFF4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8CFF8 = (int)"cobRainbowTateClose";
    sub_60000288();
    _cxa_guard_release(&dword_60C8CFD0[1]);
  }
  if ( ((unsigned int)&dword_60C8CFD0[2] & ~(1612781984 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8CFD0[2]) )
  {
    dword_60C8CFFC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D000 = (int)"cobRainbowYokoAppear";
    dword_60C8D004 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D008 = (int)"cobRainbowYokoClose";
    sub_60000288();
    _cxa_guard_release(&dword_60C8CFD0[2]);
  }
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), FIELD_U32(a1, 276));
  if ( FIELD_U32(a1, 276) )
    v10 = &dword_60C8CFD0[2 * a2 + 7];
  else
    v10 = &dword_60C8CFD0[2 * a2 + 11];
  sub_60446088(**(_DWORD **)(FIELD_U32(a1, 268) + 28), ResArchiveById, (int)v10);
  v11 = **(_DWORD **)(FIELD_U32(a1, 268) + 28);
  AnimationCtrl_setRepeat((ModelAnimation *)(v11 + 4), dword_60AF1F38[a2]);
  FIELD_F32(v11, 24) = a4;
  if ( a3 < 0.0 )
    a3 = FIELD_F32(v11, 8);
  FIELD_F32(v11, 20) = a3;
  result = FIELD_U32(v11, 28) | 2;
  FIELD_U32(v11, 28) = result;
  return result;
}
