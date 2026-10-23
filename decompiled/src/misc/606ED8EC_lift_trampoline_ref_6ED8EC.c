/* lift_trampoline_ref_6ED8EC
 * address: 0x606ED8EC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_trampoline_ref_6ED8EC(int a1)
{
  int v2; // r8
  int Resource; // r6
  int *v4; // r7
  int v5; // r0
  int v6; // r0
  int result; // r0
  _DWORD v8[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD v9[8]; // [sp+8h] [bp-20h] BYREF

  v2 = FIELD_U32(a1, 4);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "lift_trampoline";
  Resource = LoadResource(ResourceMgrRelated_instance, v9);
  v4 = &dword_60CBC0A8[2 * FIELD_U8(a1, 86)];
  (*(void (__fastcall **)(int *))(*v4 + 12))(v4);
  v5 = v4[1];
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = v5;
  TexAnim_play(v2, Resource, v8);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 4) + 4), 0);
  v6 = FIELD_U32(a1, 4);
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(v6, 28) |= 2u;
  result = FIELD_U32(a1, 4);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
