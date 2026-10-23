/* sub_603D907C
 * address: 0x603D907C   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D907C(int a1, int a2, float a3)
{
  char v3; // r12
  int v7; // r6
  int v8; // r0
  char *v9; // r5
  int *v10; // r8
  int v11; // t1
  int v12; // r0
  int result; // r0
  int (**v14)(); // [sp+0h] [bp-30h] BYREF
  const char *v15; // [sp+4h] [bp-2Ch]

  if ( ((unsigned int)&dword_60C99124[2] & ~(1614647464 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C99124[2]) )
  {
    dword_60C99144 = (int)&sead__SafeStringBase__vtable;
    dword_60C99148 = (int)"wait";
    dword_60C9914C = (int)&sead__SafeStringBase__vtable;
    dword_60C99150 = (int)"attack";
    sub_60000288();
    _cxa_guard_release(&dword_60C99124[2]);
  }
  v7 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  v14 = &sead__SafeStringBase__vtable;
  v15 = "wanwan";
  v8 = LoadResource(ResourceMgrRelated_instance, &v14);
  v9 = &byte_60C99120[8 * a2 + 36];
  SkeletalAnim_play(v7, v8, (int)v9);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4), 1);
  *(float *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 24) = a3;
  v11 = FIELD_U32(a1, 6304);
  v10 = (int *)(a1 + 6304);
  v14 = &sead__SafeStringBase__vtable;
  v15 = "wanwan";
  v12 = LoadResource(ResourceMgrRelated_instance, &v14);
  TexAnim_play(v11, v12, v9);
  AnimationCtrl_setRepeat((ModelAnimation *)(*v10 + 4), 1);
  result = *v10;
  *(float *)(*v10 + 24) = a3;
  return result;
}
