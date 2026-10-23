/* sub_603262C0
 * address: 0x603262C0   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603262C0(int a1)
{
  void *ResArchiveById; // r8
  _DWORD *v3; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int v7; // r0
  void *v8; // r6
  ModelWrapper *v9; // r7
  void *v10; // r10
  ModelWrapper *v11; // r0
  int v12; // r1
  int result; // r0
  _DWORD *v14; // r2
  int v15; // r8
  unsigned __int8 v16; // r9
  int v17; // r0
  _DWORD *v18; // r4
  int v19; // r5
  void *v20; // r6
  ModelWrapper *v21; // r7
  ModelWrapper *v22; // r0
  unsigned int v23; // r0
  int v24; // r0
  _DWORD *v25; // [sp+18h] [bp-30h]
  _DWORD v26[11]; // [sp+1Ch] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v3 = (_DWORD *)(a1 + 7648);
  Model2 = (void *)Resource_getModel2(
                     ResArchiveById,
                     (sead__SafeString *)&dword_60C93B00[2 * FIELD_U32(a1, 7648) + 3],
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
  FIELD_U32(a1, 6100) = v5;
  v7 = (int)*FIELD_U32(v5, 0x8).animations;
  v26[0] = &sead__SafeStringBase__vtable;
  v26[1] = "shot";
  SkeletalAnim_play(v7, (int)ResArchiveById, (int)v26);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6100) + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6100) + 12) + 4), 1);
  v8 = (void *)Resource_getModel2(
                 ResArchiveById,
                 (sead__SafeString *)&dword_60C93B00[2 * FIELD_U32(a1, 7648) + 7],
                 0,
                 0,
                 0,
                 0,
                 0,
                 0,
                 0);
  v9 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v10 = ResArchiveById;
  v11 = ModelWrapper_ctor(v9, v8, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v11, (int)ResArchiveById, 0, 0);
  v12 = a1;
  FIELD_U32(a1, 6104) = v9;
  v14 = (_DWORD *)(a1 + 7664);
  result = FIELD_U32(a1, 7664);
  if ( result )
  {
    v15 = 0;
    v16 = 0;
    v25 = v3;
    do
    {
      v17 = *v3;
      v18 = v14;
      v19 = v12;
      v20 = (void *)Resource_getModel2(v10, (sead__SafeString *)&dword_60C93B00[2 * v17 + 11], 0, 0, 0, 0, 0, 0, 0);
      v21 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v22 = ModelWrapper_ctor(v21, v20, 0, 0, 0, 0, 0);
      ModelWrapper_setup(v22, (int)v10, 0, 0);
      v23 = v16;
      v14 = v18;
      v12 = v19;
      v3 = v25;
      ++v16;
      if ( v23 >= 0x10 )
        v15 = 0;
      v24 = v12 + 4 * v15;
      v15 = v16;
      FIELD_U32(v24, 6108) = v21;
      result = *v18;
    }
    while ( (unsigned int)v16 < *v18 );
  }
  return result;
}
