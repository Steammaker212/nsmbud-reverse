/* LavaGeyser_vf157
 * address: 0x6070C2E0   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall LavaGeyser_vf157(_DWORD *a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int ResArchiveById; // r0
  sead__SafeString a2; // [sp+18h] [bp-30h] BYREF
  int (**v9)(); // [sp+20h] [bp-28h] BYREF
  const char *v10; // [sp+24h] [bp-24h]

  v9 = &sead__SafeStringBase__vtable;
  v10 = "firepillar";
  a2.vtable = &sead__SafeStringBase__vtable;
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v9);
  a2.cstr = "firepillar";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  a1[1575] = v4;
  a1 += 1575;
  v6 = (int)*FIELD_U32(v4, 0x18).animations;
  ResArchiveById = Profile__getResArchiveById((Profile *)*(a1 - 1572), 0);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "firepillar_loop";
  sub_60446088(v6, ResArchiveById, &v9);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*a1 + 28) + 4), 1);
}
