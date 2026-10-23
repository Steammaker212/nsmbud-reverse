/* sub_60326550
 * address: 0x60326550   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_60326550(int a1)
{
  _DWORD *v1; // r4
  void *ResArchiveById; // r8
  int v3; // t1
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int v7; // r0
  void *v8; // r6
  ModelWrapper *v9; // r7
  ModelWrapper *v10; // r0
  void *v11; // r6
  ModelWrapper *v12; // r7
  ModelWrapper *v13; // r0
  ModelWrapper *result; // r0
  _DWORD v15[10]; // [sp+18h] [bp-28h] BYREF

  v1 = (_DWORD *)a1;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v3 = v1[1912];
  v1 += 1912;
  Model2 = (void *)Resource_getModel2(
                     ResArchiveById,
                     (sead__SafeString *)&dword_60C93B00[2 * v3 + 3],
                     1,
                     0,
                     0,
                     0,
                     0,
                     0,
                     0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v6, (int)ResArchiveById, 0, 0);
  *(v1 - 387) = v5;
  v7 = (int)*FIELD_U32(v5, 0xC);
  v15[0] = &sead__SafeStringBase__vtable;
  v15[1] = "shot";
  SkeletalAnim_play(v7, (int)ResArchiveById, (int)v15);
  *(_DWORD *)(**(_DWORD **)(*(v1 - 387) + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(v1 - 387) + 12) + 4), 1);
  v8 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)&dword_60C93B00[2 * *v1 + 7], 0, 0, 0, 0, 0, 0, 0);
  v9 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v10 = ModelWrapper_ctor(v9, v8, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v10, (int)ResArchiveById, 0, 0);
  *(v1 - 386) = v9;
  v11 = (void *)Resource_getModel2(
                  ResArchiveById,
                  (sead__SafeString *)&dword_60C93B00[2 * *v1 + 11],
                  0,
                  0,
                  0,
                  0,
                  0,
                  0,
                  0);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v13 = ModelWrapper_ctor(v12, v11, 0, 0, 0, 0, 0);
  result = ModelWrapper_setup(v13, (int)ResArchiveById, 0, 0);
  *(v1 - 385) = v12;
  return result;
}
