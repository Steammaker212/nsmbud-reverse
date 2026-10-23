/* sub_601FC1E0
 * address: 0x601FC1E0   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FC1E0(int a1)
{
  void *ResArchiveById; // r5
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r1
  int v7; // r0
  int v8; // r0
  ModelAnimation *v9; // r5
  int v10; // r0
  int v11; // r1
  unsigned int v12; // r2
  int *v13; // r0
  int v14; // r0
  sead__SafeString identifier; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  FIELD_U32(a1, 272) = ResArchiveById;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobSurrender";
  Model = (void *)Resource_getModel(ResArchiveById, &identifier, 6, 2, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 2, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 268) = v4;
  v6 = FIELD_U32(a1, 272);
  v7 = (int)*FIELD_U32(v4, 0x8).animations;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobSurrenderAppear";
  SkeletalAnim_play(v7, v6, (int)&identifier);
  v8 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  if ( FIELD_U8(a1, 280) == 1 )
  {
    v9 = (ModelAnimation *)(v8 + 4);
    FIELD_U8(a1, 281) = 0;
    FIELD_U32(v8, 24) = 1065353216;
    AnimationCtrl_setRepeat((ModelAnimation *)(v8 + 4), 0);
    sub_6041838C(v9);
  }
  else
  {
    FIELD_U8(a1, 281) = 1;
    FIELD_U32(v8, 20) = FIELD_U32(v8, 8);
    FIELD_U32(v8, 28) |= 2u;
    v10 = FIELD_U32(a1, 268);
    v11 = FIELD_U32(a1, 272);
    v12 = FIELD_U32(v10, 8);
    v13 = *(int **)(v10 + 12);
    if ( v12 > 1 )
      ++v13;
    v14 = *v13;
    identifier.vtable = &sead__SafeStringBase__vtable;
    identifier.cstr = "cobSurrenderFlap";
    SkeletalAnim_play(v14, v11, (int)&identifier);
  }
  sub_60427BC8(dword_60C9BBD4, **(_DWORD **)(a1 + 268), FIELD_U8(a1, 240), FIELD_U8(a1, 244));
  FIELD_U32(a1, 212) = 1116471296;
  FIELD_U32(a1, 152) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 156) = FIELD_U32(a1, 84);
  FIELD_U32(a1, 160) = FIELD_U32(a1, 88);
  return 1;
}
