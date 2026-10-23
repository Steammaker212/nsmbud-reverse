/* fire_wait_up_ref
 * address: 0x602FFCC8   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fire_wait_up_ref(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  unsigned int animations; // r2
  int *v7; // r0
  int v8; // r0
  _DWORD *v9; // r0
  int result; // r0
  int (**v11)(); // [sp+18h] [bp-28h] BYREF
  const char *v12; // [sp+1Ch] [bp-24h]

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)&dword_60C92E10, 2, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  animations = (unsigned int)v4[1].texAnims.animations;
  v7 = (int *)FIELD_U32(v4, 0xC);
  if ( FIELD_U32(v4, 0x8) > animations )
    v7 += animations;
  v8 = *v7;
  v11 = &sead__SafeStringBase__vtable;
  v12 = "fire_wait_up";
  SkeletalAnim_play(v8, (int)ResArchiveById, (int)&v11);
  (*(void (__fastcall **)(_DWORD, _DWORD, float))(***(_DWORD ***)(a1 + 6300) + 164))(**(_DWORD **)(a1 + 6300), 0, 1.0);
  v9 = **(_DWORD ***)(FIELD_U32(a1, 6300) + 28);
  v11 = &sead__SafeStringBase__vtable;
  v12 = "damage";
  ShuAnim_play(v9, (int)ResArchiveById, (int)&v11);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 24) = 0;
  result = **(_DWORD **)(FIELD_U32(a1, 6300) + 28);
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
