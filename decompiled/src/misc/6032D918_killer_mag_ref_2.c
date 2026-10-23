/* killer_mag_ref_2
 * address: 0x6032D918   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall killer_mag_ref_2(_DWORD *a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  _DWORD *v6; // r5
  int v7; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v10)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v11; // [sp+20h] [bp-28h]

  v10 = &sead__SafeStringBase__vtable;
  v11 = "killer_mag";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v10);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "killer_mag";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  a1[3264] = v4;
  a1 += 3264;
  v6 = *FIELD_U32(v4, 0x1C);
  v10 = &sead__SafeStringBase__vtable;
  v11 = "killer_mag";
  v7 = LoadResource(ResourceMgrRelated_instance, &v10);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "switch";
  ShuAnim_play(v6, v7, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*a1 + 28) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(*a1 + 28) + 24) = 0;
  result = **(_DWORD **)(*a1 + 28);
  FIELD_U32(result, 20) = 1065353216;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
