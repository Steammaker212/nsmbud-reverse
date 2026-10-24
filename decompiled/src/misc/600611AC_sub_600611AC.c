/* sub_600611AC
 * address: 0x600611AC   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600611AC(int a1)
{
  int *v2; // r4
  void *v3; // t1
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  unsigned int animations; // r2
  int *v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int (__fastcall *v12)(int, sead__SafeString *); // r2
  int v13; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  BowserJrBase__vf3EC();
  v3 = *(void **)(a1 + 7096);
  v2 = (int *)(a1 + 7096);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr";
  Model2 = (void *)Resource_getModel2(v3, &a2, 2, 0, 1, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v6, (int)v3, 0, 0);
  v2[1] = (int)v5;
  animations = (unsigned int)FIELD_U32(v5 + (1) * 48, 0x14);
  v8 = (int *)FIELD_U32(v5, 0xC);
  v9 = *v2;
  if ( FIELD_U32(v5, 0x8) > animations )
    v8 += animations;
  v10 = *v8;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "jc_wait";
  SkeletalAnim_play(v10, v9, (int)&a2);
  v11 = *(_DWORD *)v2[1];
  v12 = *(int (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)v11 + 84);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "mask";
  v13 = v12(v11, &a2);
  return (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)v2[1] + 112))(*(_DWORD *)v2[1], v13, 0);
}
