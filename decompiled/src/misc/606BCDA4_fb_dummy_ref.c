/* fb_dummy_ref
 * address: 0x606BCDA4   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fb_dummy_ref(int a1)
{
  int v2; // r8
  void *Resource; // r10
  void *Model2; // r5
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  void *v7; // r5
  int i; // r8
  int *v9; // r11
  void *v10; // r6
  ModelWrapper *v11; // r7
  ModelWrapper *v12; // r0
  int v13; // r10
  int **v14; // r10
  int v15; // r4
  int v16; // r4
  void **animations; // r1
  char *v18; // r4
  int v19; // r4
  int result; // r0
  _DWORD v21[11]; // [sp+24h] [bp-2Ch] BYREF

  v2 = ResourceMgrRelated_instance;
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, dword_60CBA760);
  Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&unk_60CBA768, 1, 0, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v6, Resource, 0, 0);
  FIELD_U32(a1, 6152) = v5;
  v7 = (void *)LoadResource(v2, &dword_60CBA778);
  for ( i = 0; i != 2; ++i )
  {
    while ( 1 )
    {
      v9 = &dword_60CBA760[4 * i];
      v10 = (void *)Resource_getModel2(v7, (sead__SafeString *)(v9 + 15), 1, 0, 2, 1, 0, 0, 0);
      v11 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v12 = ModelWrapper_ctor(v11, v10, 1, 0, 2, 1, 0);
      ModelWrapper_setup(v12, v7, 0, 0);
      v13 = a1 + 4 * i;
      FIELD_U32(v13, 6156) = v11;
      v14 = (int **)(v13 + 6156);
      v15 = (int)*FIELD_U32(v11, 0x8).animations;
      SkeletalAnim_play(v15, (int)v7, (const char **)v9 + 17);
      AnimationCtrl_setRepeat((ModelAnimation *)(v15 + 4), 0);
      FIELD_U32(v15, 24) = 1063675494;
      v16 = (int)*FIELD_U32(v11, 0x18).animations;
      sub_60446088(v16, (int)v7, v9 + 17);
      AnimationCtrl_setRepeat((ModelAnimation *)(v16 + 4), 0);
      FIELD_U32(v16, 24) = 1063675494;
      animations = FIELD_U32(v11, 0x18).animations;
      if ( FIELD_U32(v11, 0x18).count > 1u )
        ++animations;
      v18 = (char *)*animations;
      ShuAnim_play(*animations, (int)v7, v9 + 17);
      AnimationCtrl_setRepeat((ModelAnimation *)(v18 + 4), 0);
      *((_DWORD *)v18 + 6) = 1063675494;
      v19 = (int)*FIELD_U32(v11, 0x20).animations;
      sub_6045195C(v19, (int)v7, (const char **)v9 + 17);
      AnimationCtrl_setRepeat((ModelAnimation *)(v19 + 4), 0);
      FIELD_U32(v19, 24) = 1063675494;
      result = **v14;
      if ( i )
        break;
      FIELD_U32(result, 36) = 16;
      v21[0] = &sead__SafeStringBase__vtable;
      v21[1] = "fb_dummy";
      sub_60418060(result, (int)v21);
      i = 1;
    }
    FIELD_U32(result, 36) = 25;
  }
  return result;
}
