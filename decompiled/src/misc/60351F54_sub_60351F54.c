/* sub_60351F54
 * address: 0x60351F54   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60351F54(int a1, int r1_0)
{
  void *v4; // r0
  void *v5; // r5
  void *Model2; // r7
  int v7; // r6
  ModelWrapper *v8; // r0
  int result; // r0
  void *v10; // r6
  ModelWrapper *v11; // r7
  ModelWrapper *v12; // r0
  int v13; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "mouse";
  v4 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  v5 = v4;
  a2.cstr = "mouse";
  Model2 = (void *)Resource_getModel2(v4, &a2, 1, 0, 0, 0, 0, 0, 0);
  v7 = operator_new_8DE25C(0x30u, 0, 4);
  v8 = ModelWrapper_ctor((ModelWrapper *)v7, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v8, (int)v5, 0, 0);
  FIELD_U32(a1, 6300) = v7;
  result = SkeletalAnim_play(**(_DWORD **)(v7 + 12), (int)v5, (int)&dword_60C95018);
  if ( r1_0 == 1 )
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "mouse_eye_light";
    v10 = (void *)Resource_getModel2(v5, &a2, 1, 0, 0, 0, 0, 0, 0);
    v11 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v12 = ModelWrapper_ctor(v11, v10, 1, 0, 0, 0, 0);
    ModelWrapper_setup(v12, (int)v5, 0, 0);
    FIELD_U32(a1, 6412) = v11;
    *((_DWORD *)FIELD_U32(v11, 0x0) + 9) = 19;
    v13 = **(_DWORD **)(FIELD_U32(a1, 6412) + 12);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "eye_walk";
    return SkeletalAnim_play(v13, (int)v5, (int)&a2);
  }
  return result;
}
