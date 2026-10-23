/* sub_602B584C
 * address: 0x602B584C   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B584C(_DWORD *a1)
{
  void *v2; // r11
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int v7; // r0
  float v8; // s0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v11)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v12; // [sp+20h] [bp-28h]

  v11 = &sead__SafeStringBase__vtable;
  v12 = "fruit";
  a2.vtable = &sead__SafeStringBase__vtable;
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v11);
  a2.cstr = "fruit";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  a1[1575] = v4;
  a1 += 1575;
  v6 = (int)*FIELD_U32(v4, 0xC);
  v11 = &sead__SafeStringBase__vtable;
  v12 = "fruit";
  v7 = LoadResource(ResourceMgrRelated_instance, &v11);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  SkeletalAnim_play(v6, v7, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*a1 + 12) + 4), 1);
  v8 = (float)FIELD_U16(dword_60C9CF0C, 1358) / 120.0;
  *(float *)(**(_DWORD **)(*a1 + 12) + 24) = v8;
  result = **(_DWORD **)(*a1 + 12);
  FIELD_F32(result, 20) = v8
                          * (float)((float)(100 * FIELD_U32(dword_60C99DD4, 1052)
                                          % (unsigned int)(float)((float)(60.0 / v8) * 100.0))
                                  / 100.0);
  FIELD_U32(result, 28) |= 2u;
  return result;
}
