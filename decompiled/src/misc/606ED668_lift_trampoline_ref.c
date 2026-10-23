/* lift_trampoline_ref
 * address: 0x606ED668   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall lift_trampoline_ref(int a1)
{
  int v2; // r9
  int v3; // r5
  int Resource; // r0
  int v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r0
  signed int result; // r0
  int v10; // r1
  float v11; // r0
  int (**v12)(); // [sp+8h] [bp-38h] BYREF
  int v13; // [sp+Ch] [bp-34h]
  Vec3 v14[4]; // [sp+10h] [bp-30h] BYREF

  v2 = FIELD_U32(a1, 80);
  v3 = **(_DWORD **)(*(_DWORD *)a1 + 12);
  LODWORD(v14[0].x) = &sead__SafeStringBase__vtable;
  LODWORD(v14[0].y) = "lift_trampoline";
  Resource = LoadResource(ResourceMgrRelated_instance, v14);
  v12 = &sead__SafeStringBase__vtable;
  v13 = v2;
  SkeletalAnim_play(v3, Resource, (const char **)&v12);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)a1 + 12) + 4), 0);
  v5 = **(_DWORD **)(*(_DWORD *)a1 + 12);
  FIELD_U32(v5, 20) = 0;
  FIELD_U32(v5, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)a1 + 12) + 24) = 1065353216;
  v6 = FIELD_U32(a1, 4);
  LODWORD(v14[0].x) = &sead__SafeStringBase__vtable;
  LODWORD(v14[0].y) = "lift_trampoline";
  v7 = LoadResource(ResourceMgrRelated_instance, v14);
  v12 = &sead__SafeStringBase__vtable;
  v13 = v2;
  TexAnim_play(v6, v7, &v12);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 4) + 4), 0);
  v8 = FIELD_U32(a1, 4);
  FIELD_U32(v8, 20) = 0;
  FIELD_U32(v8, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 4) + 24) = 1065353216;
  result = 257;
  FIELD_U16(a1, 84) = 257;
  v10 = FIELD_U32(a1, 88);
  if ( v10 != -1 )
  {
    v11 = FIELD_F32(a1, 68);
    v14[0].y = FIELD_F32(a1, 72);
    v14[0].x = v11;
    v14[0].z = 4500.0;
    return sub_602375C4((EffectData *)(a1 + 92), v10, v14, 0, 0);
  }
  return result;
}
