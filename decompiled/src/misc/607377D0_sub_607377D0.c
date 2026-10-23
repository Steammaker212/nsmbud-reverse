/* sub_607377D0
 * address: 0x607377D0   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607377D0(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int v7; // r0
  float v8; // s16
  float v9; // s2
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-30h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "block_pata";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  v3 = v2;
  a2.cstr = "block_pata";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 1, 1, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 1, 1, 0, 0);
  ModelWrapper_setup(v6, v3, 0, 0);
  a1[1847] = v5;
  a1 += 1847;
  v7 = (int)*FIELD_U32(v5, 0xC);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "fly_normal";
  SkeletalAnim_play(v7, (int)v3, (const char **)&a2);
  v8 = *(float *)(**(_DWORD **)(*a1 + 12) + 8);
  LODWORD(v9) = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000;
  result = **(_DWORD **)(*a1 + 12);
  FIELD_F32(result, 20) = v8 * (float)(v9 + -1.0);
  FIELD_U32(result, 28) |= 2u;
  return result;
}
