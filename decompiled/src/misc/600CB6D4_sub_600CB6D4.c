/* sub_600CB6D4
 * address: 0x600CB6D4   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CB6D4(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  _DWORD *v6; // r5
  int v7; // r0
  int v8; // r0
  int (__fastcall *v9)(int, sead__SafeString *); // r2
  int v10; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "kameck";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "jc_demo_W8_appear";
  sub_60421AE4(v4, &a2, 0);
  v6 = **(_DWORD ***)(FIELD_U32(a1, 6300) + 28);
  v7 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wand";
  ShuAnim_play(v6, v7, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 24) = 0;
  v8 = **(_DWORD **)(a1 + 6300);
  v9 = *(int (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)v8 + 84);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "broom";
  v10 = v9(v8, &a2);
  return (*(int (__fastcall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(a1 + 6300) + 112))(
           **(_DWORD **)(a1 + 6300),
           v10,
           0);
}
