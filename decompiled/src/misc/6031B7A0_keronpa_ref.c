/* keronpa_ref
 * address: 0x6031B7A0   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall keronpa_ref(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "keronpa";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 1, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 1, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 7124) = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  sub_60421938(v4, (int)ResArchiveById, (int)&a2);
  v6 = **(_DWORD **)(FIELD_U32(a1, 7124) + 20);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "keronpa";
  TexAnim_play(v6, ResArchiveById, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7124) + 20) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 7124) + 20) + 24) = 0;
  result = **(_DWORD **)(FIELD_U32(a1, 7124) + 20);
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
