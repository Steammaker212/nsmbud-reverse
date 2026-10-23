/* boss_koopa_ashiba_ref
 * address: 0x605C0258   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall boss_koopa_ashiba_ref(int a1)
{
  char v1; // r12
  int v3; // r6
  void *v4; // r5
  int v5; // r1
  void *Model2; // r6
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  int v9; // r5
  int v10; // r0
  int result; // r0
  const char *v12[2]; // [sp+14h] [bp-34h] BYREF
  int (**v13)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v14; // [sp+20h] [bp-28h]

  if ( ((unsigned int)&unk_60CB09A0 & ~(1616642676 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60CB09A0) )
  {
    dword_60CB09A4 = (int)&sead__SafeStringBase__vtable;
    dword_60CB09A8 = (int)"boss_koopa_ashiba";
    dword_60CB09AC = (int)&sead__SafeStringBase__vtable;
    dword_60CB09B0 = (int)"boss_koopa_ashibaC";
    dword_60CB09B4 = (int)&sead__SafeStringBase__vtable;
    dword_60CB09B8 = (int)"boss_koopa_ashibaB";
    sub_60000288();
    _cxa_guard_release((__guard *)&unk_60CB09A0);
  }
  v3 = FIELD_U32(a1, 20);
  v13 = &sead__SafeStringBase__vtable;
  v14 = "boss_koopa_ashiba";
  v4 = (void *)LoadResource(ResourceMgrRelated_instance, &v13);
  v5 = v3 & 3;
  if ( v5 == 3 )
    v5 = 0;
  Model2 = (void *)Resource_getModel2(v4, (sead__SafeString *)((char *)&unk_60CB09A0 + 8 * v5 + 4), 1, 0, 0, 0, 0, 0, 0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v8 = ModelWrapper_ctor(v7, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v8, v4, 0, 0);
  FIELD_U32(a1, 6104) = v7;
  v9 = (int)*FIELD_U32(v7, 0x8).animations;
  v13 = &sead__SafeStringBase__vtable;
  v14 = "boss_koopa_ashiba";
  v10 = LoadResource(ResourceMgrRelated_instance, &v13);
  v12[0] = (const char *)&sead__SafeStringBase__vtable;
  v12[1] = "boss_koopa_ashiba_cut";
  SkeletalAnim_play(v9, v10, v12);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 4), 0);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 4));
  result = **(_DWORD **)(FIELD_U32(a1, 6104) + 12);
  FIELD_U32(result, 24) = 0;
  return result;
}
