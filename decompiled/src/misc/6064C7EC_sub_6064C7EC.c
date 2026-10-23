/* sub_6064C7EC
 * address: 0x6064C7EC   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064C7EC(int a1)
{
  int *v1; // r4
  void *v2; // r5
  void *Model2; // r6
  int v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r1
  int v11; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  v1 = (int *)(a1 + 7252);
  v2 = *(void **)(a1 + 7252);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_number_ship_up";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 1, 1, 0, 0, 0, 0);
  v4 = operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor((ModelWrapper *)v4, Model2, 1, 1, 1, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  v1[48] = v4;
  SkeletalAnim_play(**(_DWORD **)(v4 + 12), *v1, (const char **)&dword_60CB60C8);
  v6 = **(_DWORD **)(v1[48] + 20);
  v1[49] = v6;
  v7 = *v1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_number_ship_up";
  TexAnim_play(v6, v7, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(v1[49] + 4), 0);
  v8 = v1[49];
  FIELD_U32(v8, 20) = 1086324736;
  FIELD_U32(v8, 28) |= 2u;
  *(_DWORD *)(v1[49] + 24) = 0;
  v9 = **(_DWORD ***)(v1[48] + 28);
  v1[50] = (int)v9;
  v10 = *v1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "warning";
  ShuAnim_play(v9, v10, &a2);
  v11 = v1[50];
  FIELD_U32(v11, 20) = 0;
  FIELD_U32(v11, 28) |= 2u;
  result = v1[50];
  FIELD_U32(result, 24) = 0;
  return result;
}
