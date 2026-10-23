/* BobOmb_setupModel
 * address: 0x6025D3C8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall BobOmb_setupModel(Enemy *a1)
{
  int *p_parent; // r8
  Actor *parent; // r9
  void *Model2; // r7
  ModelWrapper *v5; // r6
  ModelWrapper *v6; // r0
  int *v7; // r7
  int *v8; // r4
  int v9; // t1
  unsigned int animations; // r2
  void **v11; // r0
  char *v12; // r4
  int v13; // r4

  p_parent = (int *)&a1[1]._._._._.parent;
  parent = a1[1]._._._._.parent;
  Model2 = (void *)Resource_getModel2(parent, (sead__SafeString *)&dword_60C8E364, 2, 0, 1, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v6, (int)parent, 0, 0);
  a1[1]._._._._.field_34 = (int)v5;
  v7 = &a1[1]._._._._.field_34;
  v9 = a1[1]._._._._.field_3C;
  v8 = &a1[1]._._._._.field_3C;
  if ( v9 )
  {
    *v8 = 0;
    sub_60421AD4((int)v5);
  }
  else
  {
    animations = (unsigned int)v5[1].texAnims.animations;
    v11 = FIELD_U32(v5, 0xC);
    if ( FIELD_U32(v5, 0x8) > animations )
      v11 += animations;
    v12 = (char *)*v11;
    if ( *((float *)*v11 + 6) < 0.0 )
      sub_6041838C((ModelAnimation *)(v12 + 4));
    *((_DWORD *)v12 + 6) = 1065353216;
  }
  v13 = **(_DWORD **)(*v7 + 28);
  ShuAnim_play((_DWORD *)v13, *p_parent, (int)&dword_60C8E36C);
  AnimationCtrl_setRepeat((ModelAnimation *)(v13 + 4), 0);
  FIELD_U32(v13, 24) = 0;
}
