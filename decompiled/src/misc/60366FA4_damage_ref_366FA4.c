/* damage_ref_366FA4
 * address: 0x60366FA4   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall damage_ref_366FA4(int a1)
{
  int v2; // r6
  void *ResArchiveById; // r5
  int *v4; // r8
  void *Model2; // r4
  ModelWrapper *v6; // r6
  ModelWrapper *v7; // r0
  ModelWrapper **v8; // r5
  _DWORD *v9; // r4
  void **animations; // r2
  unsigned int v11; // r1
  void **v12; // r2
  unsigned int v13; // r0
  _DWORD *v14; // r0
  int *v15; // r7
  int v16; // r1
  int v17; // r0
  _DWORD v19[10]; // [sp+18h] [bp-28h] BYREF

  v2 = 0;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  FIELD_U32(a1, 6100) = ResArchiveById;
  if ( ResArchiveById )
  {
    v4 = (int *)(a1 + 6100);
    Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)&unk_60C95CD8, 2, 0, 1, 0, 0, 0, 0);
    v6 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
    v7 = sub_60421830(v6, Model2, 2, 0, 1, 0, 0);
    j_ModelWrapper_setupModel((int)v7, (int)ResArchiveById, 0, 0);
    FIELD_U32(a1, 6104) = v6;
    v8 = (ModelWrapper **)(a1 + 6104);
    v9 = (_DWORD *)(a1 + 6112);
    if ( FIELD_U32(a1, 6112) )
    {
      *v9 = 0;
      sub_60421938(v6, *v4, (int)dword_60C95A38);
      animations = (*v8)->sklAnims.animations;
      v11 = (unsigned int)(*v8)[1].texAnims.animations;
      if ( (*v8)->sklAnims.count > v11 )
        animations += v11;
      *((_DWORD *)*animations + 6) = dword_60C95A38[4 * *v9 + 2];
      v12 = (*v8)->sklAnims.animations;
      v13 = (unsigned int)(*v8)[1].texAnims.animations;
      if ( (*v8)->sklAnims.count > v13 )
        v12 += v13;
      AnimationCtrl_setRepeat((ModelAnimation *)((char *)*v12 + 4), dword_60C95A38[4 * *v9 + 3]);
      v6 = *v8;
    }
    v14 = *FIELD_U32(v6, 0x1C);
    FIELD_U32(a1, 6108) = v14;
    v15 = (int *)(a1 + 6108);
    v16 = *v4;
    v19[0] = &sead__SafeStringBase__vtable;
    v19[1] = "damage";
    ShuAnim_play(v14, v16, (int)v19);
    v17 = *v15;
    v2 = 1;
    FIELD_U32(v17, 20) = 0;
    FIELD_U32(v17, 28) |= 2u;
    *(_DWORD *)(*v15 + 24) = 0;
    *((_DWORD *)(*v8)->model + 8) = 0;
    *((_DWORD *)(*v8)->model + 9) = 0;
  }
  return v2;
}
