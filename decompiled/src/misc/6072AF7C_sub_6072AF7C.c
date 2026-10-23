/* sub_6072AF7C
 * address: 0x6072AF7C   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072AF7C(_DWORD *a1)
{
  bool v2; // zf
  int v3; // r0
  void *v4; // r5
  void *Model2; // r6
  ModelWrapper *v6; // r7
  ModelWrapper *v7; // r0
  int v8; // r0
  int v9; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  v2 = (a1[5] & 0xF) == 0;
  a1[20] = v2;
  v3 = 1789569706;
  if ( v2 )
    v3 = 357913941;
  a1[40] = v3;
  a1[29] = 1153138688;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "miniGame_mochimaki";
  v4 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "mochimakiCannon";
  Model2 = (void *)Resource_getModel2(v4, &a2, 1, 0, 0, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v7, v4, 0, 0);
  a1[1575] = v6;
  v8 = (int)*FIELD_U32(v6, 0x8).animations;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "mochimakiCannon_ready";
  SkeletalAnim_play(v8, (int)v4, (const char **)&a2);
  *(_DWORD *)(**(_DWORD **)(a1[1575] + 12) + 24) = 0;
  hoto_rotate_ref(a1);
  v9 = sub_6072B2F8(a1);
  a1[1585] = sub_6072EC40(v9);
  a1[1584] = 0;
  return 1;
}
