/* CS_W8a_ref
 * address: 0x60221D5C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CS_W8a_ref(int a1, int a2, float a3, float a4)
{
  char v4; // r12
  int Resource; // r0
  int v10; // r4
  int result; // r0
  _DWORD v12[10]; // [sp+0h] [bp-28h] BYREF

  if ( ((unsigned int)&unk_60C8D5B0 & ~(1612848520 << v4) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C8D5B0) )
  {
    dword_60C8D5B4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D5B8 = (int)"CS_W8a_CloudBG_Demo1";
    dword_60C8D5BC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D5C0 = (int)"CS_W8a_CloudBG_Demo2";
    sub_60000288();
    _cxa_guard_release((__guard *)&unk_60C8D5B0);
  }
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "CS_W8a";
  Resource = LoadResource(ResourceMgrRelated_instance, v12);
  v10 = **(_DWORD **)(*(_DWORD *)a1 + 28);
  ShuAnim_play((_DWORD *)v10, Resource, (int)&unk_60C8D5B0 + 8 * a2 + 4);
  AnimationCtrl_setRepeat((ModelAnimation *)(v10 + 4), 0);
  FIELD_F32(v10, 24) = a3;
  if ( a4 < 0.0 )
    a4 = FIELD_F32(v10, 8);
  FIELD_F32(v10, 20) = a4;
  result = FIELD_U32(v10, 28) | 2;
  FIELD_U32(v10, 28) = result;
  return result;
}
