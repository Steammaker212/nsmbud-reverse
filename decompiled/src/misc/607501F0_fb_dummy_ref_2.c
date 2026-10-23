/* fb_dummy_ref_2
 * address: 0x607501F0   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fb_dummy_ref_2(int **a1)
{
  void *Resource; // r5
  sead__SafeString *v2; // r6
  int i; // r10
  void *Model2; // r4
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int v7; // r4
  int v8; // r4
  void **animations; // r1
  char *v10; // r4
  int v11; // r4
  int v12; // r0
  int result; // r0
  _DWORD v15[11]; // [sp+1Ch] [bp-2Ch] BYREF

  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60CBEAD0);
  v2 = (sead__SafeString *)&dword_60CBEAE4;
  for ( i = 0; i != 2; ++i )
  {
    Model2 = (void *)Resource_getModel2(Resource, v2, 1, 0, 2, 1, 0, 0, 0);
    v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 2, 1, 0);
    ModelWrapper_setup(v6, Resource, 0, 0);
    a1[i] = (int *)v5;
    v7 = (int)*FIELD_U32(v5, 0x8).animations;
    SkeletalAnim_play(v7, (int)Resource, (const char **)v2);
    AnimationCtrl_setRepeat((ModelAnimation *)(v7 + 4), 0);
    FIELD_U32(v7, 24) = 1063675494;
    v8 = (int)*FIELD_U32(v5, 0x18).animations;
    sub_60446088(v8, (int)Resource, v2);
    AnimationCtrl_setRepeat((ModelAnimation *)(v8 + 4), 0);
    FIELD_U32(v8, 24) = 1063675494;
    animations = FIELD_U32(v5, 0x18).animations;
    if ( FIELD_U32(v5, 0x18).count > 1u )
      ++animations;
    v10 = (char *)*animations;
    ShuAnim_play(*animations, (int)Resource, v2);
    AnimationCtrl_setRepeat((ModelAnimation *)(v10 + 4), 0);
    *((_DWORD *)v10 + 6) = 1063675494;
    v11 = (int)*FIELD_U32(v5, 0x20).animations;
    sub_6045195C(v11, (int)Resource, (const char **)v2);
    AnimationCtrl_setRepeat((ModelAnimation *)(v11 + 4), 0);
    ++v2;
    FIELD_U32(v11, 24) = 1063675494;
  }
  v12 = **a1;
  FIELD_U32(v12, 36) = 16;
  v15[0] = &sead__SafeStringBase__vtable;
  v15[1] = "fb_dummy";
  sub_60418060(v12, (int)v15);
  result = *a1[1];
  FIELD_U32(result, 36) = 25;
  return result;
}
