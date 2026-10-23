/* sub_60587884
 * address: 0x60587884   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_60587884(_DWORD *a1)
{
  void *v2; // r11
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int v7; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v10)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v11; // [sp+20h] [bp-28h]

  v10 = &sead__SafeStringBase__vtable;
  v11 = "bombhei";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v10);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "parachute";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  a1[1575] = v4;
  a1 += 1575;
  v6 = (int)*FIELD_U32(v4, 0xC);
  v10 = &sead__SafeStringBase__vtable;
  v11 = "bombhei";
  v7 = LoadResource(ResourceMgrRelated_instance, &v10);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "para_drop";
  SkeletalAnim_play(v6, v7, (const char **)&a2);
  *(_DWORD *)(**(_DWORD **)(*a1 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*a1 + 12) + 4), 1);
  return sub_6041838C((ModelAnimation *)(**(_DWORD **)(*a1 + 12) + 4));
}
