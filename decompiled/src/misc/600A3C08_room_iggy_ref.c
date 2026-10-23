/* room_iggy_ref
 * address: 0x600A3C08   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall room_iggy_ref(int a1)
{
  void *v2; // r0
  int v3; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  _DWORD *v7; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "room_iggy";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  v3 = (int)v2;
  a2.cstr = "room_iggy";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 0, 1, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v6, v3, 0, 0);
  FIELD_U32(a1, 644) = v5;
  v7 = *FIELD_U32(v5, 0x1C);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "room_iggy";
  ShuAnim_play(v7, v3, (int)&a2);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 644) + 28) + 24) = 0;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 644) + 28) + 4), 0);
}
