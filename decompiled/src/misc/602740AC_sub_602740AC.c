/* sub_602740AC
 * address: 0x602740AC   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602740AC(int a1)
{
  int *v1; // r4
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int *animations; // r1
  unsigned int count; // r0
  int *v8; // r2
  int v9; // r7
  int v10; // r5
  int v11; // r8
  int v12; // r6
  int v13; // r5
  void *v14; // r6
  int v15; // r7
  ModelWrapper *v16; // r0
  int v17; // r0
  unsigned int v18; // r2
  int *v19; // r0
  RevealMaskRelated *v20; // r0
  RevealMaskRelated *v21; // r0

  v1 = (int *)(a1 + 6300);
  v2 = *(void **)(a1 + 6300);
  Model2 = (void *)Resource_getModel2(v2, (sead__SafeString *)&dword_60C8EC10, 3, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 3, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  v1[1] = (int)v4;
  animations = (int *)FIELD_U32(v4, 0xC);
  count = FIELD_U32(v4, 0x8);
  v8 = animations + 2;
  v9 = *animations;
  if ( count <= 2 )
    v8 = animations;
  if ( count > 1 )
    ++animations;
  v10 = *v8;
  v11 = *animations;
  SkeletalAnim_play(v9, *v1, (int)&dword_60C8EC20);
  SkeletalAnim_play(v11, *v1, (int)&dword_60C8EC20);
  SkeletalAnim_play(v10, *v1, (int)&dword_60C8EC28);
  AnimationCtrl_setRepeat((ModelAnimation *)(v10 + 4), 0);
  FIELD_U32(v10, 24) = 0;
  v12 = *(_DWORD *)v1[1];
  (*(void (__fastcall **)(int, _DWORD, float))(*(_DWORD *)v12 + 164))(v12, 0, 1.0);
  (*(void (__fastcall **)(int, int, float))(*(_DWORD *)v12 + 164))(v12, 1, 1.0);
  (*(void (__fastcall **)(int, int, float))(*(_DWORD *)v12 + 164))(v12, 2, 0.0);
  sub_60448AF4(v11, 0);
  sub_60448AF4(v10, 0);
  sub_60448AF4(v9, 1);
  sub_60448AF4(v9, 2);
  sub_60448AF4(v9, 3);
  sub_60448AF4(v11, 4);
  sub_60448AF4(v10, 4);
  sub_60448AF4(v9, 5);
  sub_60448AF4(v9, 6);
  sub_60448AF4(v11, 7);
  sub_60448AF4(v10, 7);
  sub_60448AF4(v11, 8);
  sub_60448AF4(v10, 8);
  v13 = *v1;
  v14 = (void *)Resource_getModel2((void *)*v1, (sead__SafeString *)&dword_60C8EC18, 0, 0, 2, 0, 0, 0, 0);
  v15 = operator_new_8DE25C(0x30u, 0, 4);
  v16 = ModelWrapper_ctor((ModelWrapper *)v15, v14, 0, 0, 2, 0, 0);
  ModelWrapper_setup(v16, v13, 0, 0);
  v1[2] = v15;
  ShuAnim_play(**(_DWORD ***)(v15 + 28), *v1, (int)&dword_60C8EC30);
  v17 = v1[2];
  v18 = FIELD_U32(v17, 24);
  v19 = *(int **)(v17 + 28);
  if ( v18 > 1 )
    ++v19;
  sub_60446088(*v19, *v1, (int)&dword_60C8EC30);
  v20 = (RevealMaskRelated *)operator_new(0x28u);
  v21 = LightMask__ctor(v20);
  v1[3] = (int)v21;
  return (*(int (__fastcall **)(RevealMaskRelated *, _DWORD, int))FIELD_U32(v21, 0x0))(v21, 0, 2);
}
