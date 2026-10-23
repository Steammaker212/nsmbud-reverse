/* sub_60297420
 * address: 0x60297420   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60297420(Actor *a1)
{
  void *ResArchiveById; // r4
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  unsigned int animations; // r2
  int *v7; // r0
  int v8; // r0
  int result; // r0
  int *v10; // r5
  _DWORD *v11; // r0
  int (**v12)(); // [sp+18h] [bp-28h] BYREF
  const char *v13; // [sp+1Ch] [bp-24h]

  ResArchiveById = (void *)Profile__getResArchiveById(FIELD_U32(a1, 0xC), 0);
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)&dword_60C8FC98, 2, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  a1[78].field_3C = (int)v4;
  animations = (unsigned int)v4[1].texAnims.animations;
  v7 = (int *)FIELD_U32(v4, 0xC);
  if ( FIELD_U32(v4, 0x8) > animations )
    v7 += animations;
  v8 = *v7;
  v12 = &sead__SafeStringBase__vtable;
  v13 = "cs_wait";
  SkeletalAnim_play(v8, (int)ResArchiveById, (int)&v12);
  (*(void (__fastcall **)(_DWORD, _DWORD, float))(**(_DWORD **)a1[78].field_3C + 164))(
    *(_DWORD *)a1[78].field_3C,
    0,
    1.0);
  result = Actor__getProfileId(a1);
  if ( result == 491 )
  {
    v10 = &a1[78].field_3C;
    v11 = **(_DWORD ***)(*v10 + 28);
    v12 = &sead__SafeStringBase__vtable;
    v13 = "damage";
    ShuAnim_play(v11, (int)ResArchiveById, (int)&v12);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v10 + 28) + 4), 1);
    *(_DWORD *)(**(_DWORD **)(*v10 + 28) + 24) = 0;
    result = **(_DWORD **)(*v10 + 28);
    FIELD_U32(result, 20) = 0;
    FIELD_U32(result, 28) |= 2u;
  }
  return result;
}
