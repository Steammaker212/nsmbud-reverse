/* appear_ref
 * address: 0x601A55D8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall appear_ref(int a1, int a2)
{
  char v2; // r12
  _DWORD *result; // r0
  int v6; // s0

  if ( ((unsigned int)&unk_60C8A110 & ~(1612338676 << v2) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C8A110) )
  {
    dword_60C8A114 = (int)&sead__SafeStringBase__vtable;
    dword_60C8A118 = (int)"wait";
    dword_60C8A11C = (int)&sead__SafeStringBase__vtable;
    dword_60C8A120 = (int)"appear";
    dword_60C8A124 = (int)&sead__SafeStringBase__vtable;
    dword_60C8A128 = (int)"appear";
    dword_60C8A12C = (int)&sead__SafeStringBase__vtable;
    dword_60C8A130 = (int)"appear";
    sub_60000288();
    _cxa_guard_release((__guard *)&unk_60C8A110);
  }
  SkeletalAnim_play(**(_DWORD **)(FIELD_U32(a1, 304) + 12), FIELD_U32(a1, 300), (int)&unk_60C8A110 + 8 * a2 + 4);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 304) + 12) + 4), dword_60AF23F4[a2]);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 304) + 12) + 24) = dword_60AF2404[a2];
  result = **(_DWORD ***)(FIELD_U32(a1, 304) + 12);
  if ( a2 == 2 )
    v6 = result[2];
  else
    v6 = 0;
  result[5] = v6;
  result[7] |= 2u;
  return result;
}
