/* lift_huriko_yougan_ref_2
 * address: 0x6063D520   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_huriko_yougan_ref_2(_DWORD *a1)
{
  void *Resource; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF
  _DWORD v8[8]; // [sp+20h] [bp-20h] BYREF

  a1[29] = 1162420224;
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "lift_huriko_yougan";
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v8);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_huriko_yougan_tomegu";
  Model2 = (void *)Resource_getModel2(Resource, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, Resource, 0, 0);
  a1[1526] = v4;
  a1[36] = 1065353216;
  a1[37] = 1065353216;
  a1[38] = 1065353216;
  a1[39] = 0;
  a1[40] = 0;
  a1[41] = 0;
  a1[123] = 0;
  a1[124] = 0;
  a1[125] = 1098907648;
  a1[126] = 1098907648;
  a1[127] = 1098907648;
  a1[128] = 1098907648;
  sub_6063D654(a1);
  return 1;
}
