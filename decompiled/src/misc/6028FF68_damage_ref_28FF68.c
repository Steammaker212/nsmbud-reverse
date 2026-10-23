/* damage_ref_28FF68
 * address: 0x6028FF68   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall damage_ref_28FF68(int *a1)
{
  void *Resource; // r0
  int v3; // r5
  void *Model2; // r7
  ModelWrapper *v5; // r6
  ModelWrapper *v6; // r0
  _DWORD *v7; // r0
  int v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r0
  _DWORD *v11; // r0
  int v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r0
  _DWORD *v15; // r0
  int v16; // r1
  int v17; // r0
  _DWORD v19[10]; // [sp+18h] [bp-28h] BYREF

  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60C8F8A0);
  v3 = (int)Resource;
  a1[9] = (int)Resource;
  if ( !Resource )
    return 0;
  Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&dword_60C8F8A8, 2, 0, 1, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v6, v3, 0, 0);
  a1[10] = (int)v5;
  if ( a1[12] )
  {
    a1[12] = 0;
    sub_60421938(v5, a1[9], (int)dword_60C8F5A4);
    v7 = (_DWORD *)a1[10];
    v8 = v7[3];
    v9 = v7[2];
    v10 = v7[17];
    if ( v9 > v10 )
      v8 += 4 * v10;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = dword_60C8F5A4[4 * a1[12] + 2];
    v11 = (_DWORD *)a1[10];
    v12 = v11[3];
    v13 = v11[2];
    v14 = v11[17];
    if ( v13 > v14 )
      v12 += 4 * v14;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), dword_60C8F5A4[4 * a1[12] + 3]);
    v5 = (ModelWrapper *)a1[10];
  }
  v15 = *FIELD_U32(v5, 0x18).animations;
  a1[11] = (int)v15;
  v16 = a1[9];
  v19[0] = &sead__SafeStringBase__vtable;
  v19[1] = "damage";
  ShuAnim_play(v15, v16, (int)v19);
  v17 = a1[11];
  FIELD_U32(v17, 20) = 0;
  FIELD_U32(v17, 28) |= 2u;
  *(_DWORD *)(a1[11] + 24) = 0;
  return 1;
}
