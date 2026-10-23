/* star_coinA_ref_2
 * address: 0x60585C68   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall star_coinA_ref_2(int a1)
{
  int v2; // s0
  void *Resource; // r8
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF
  _DWORD v9[8]; // [sp+20h] [bp-20h] BYREF

  FIELD_U16(a1, 7376) = 0;
  if ( (FIELD_U8(a1, 20) & 1) != 0 )
  {
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = "star_coin";
    Resource = (void *)LoadResource(ResourceMgrRelated_instance, v9);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "star_coinA";
    Model2 = (void *)Resource_getModel2(Resource, &a2, 1, 0, 0, 0, 0, 0, 0);
    v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 0, 0, 0);
    ModelWrapper_setup(v6, Resource, 0, 0);
    FIELD_U32(a1, 7348) = v5;
    sub_60585D84(a1);
    v2 = 1115684864;
  }
  else
  {
    v2 = 1107296256;
  }
  FIELD_U32(a1, 508) = v2;
  FIELD_U32(a1, 512) = v2;
  return 1;
}
