/* I_penguin_ref
 * address: 0x6046AF20   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall I_penguin_ref(int a1)
{
  void *Resource; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF
  _DWORD v8[8]; // [sp+20h] [bp-20h] BYREF

  FIELD_U8(a1, 6199) = 1;
  FIELD_U32(a1, 6168) = 7;
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "I_penguin";
  a2.vtable = &sead__SafeStringBase__vtable;
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v8);
  a2.cstr = "I_penguin";
  Model2 = (void *)Resource_getModel2(Resource, &a2, 1, 1, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v5, Resource, 0, 0);
  FIELD_U32(a1, 6160) = v4;
  sub_6046135C(a1);
  Item_playAppearSound_461C50(a1);
  sub_60462018(a1);
  return 1;
}
