/* I_moon_ref
 * address: 0x6046FF08   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall I_moon_ref(int a1)
{
  int v2; // r5
  void *v3; // r9
  void *Model2; // r8
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  FIELD_U32(a1, 6112) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6116) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6120) = FIELD_U32(a1, 116);
  v2 = 2;
  if ( !sub_60461BE4(a1) )
  {
    v2 = 1;
    FIELD_U8(a1, 6199) = 1;
    FIELD_U32(a1, 6168) = 12;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "I_moon";
    v3 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
    FIELD_U32(a1, 6828) = v3;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "I_moon";
    Model2 = (void *)Resource_getModel2(v3, &a2, 1, 1, 0, 0, 0, 0, 0);
    v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v6 = ModelWrapper_ctor(v5, Model2, 1, 1, 0, 0, 0);
    ModelWrapper_setup(v6, v3, 0, 0);
    FIELD_U32(a1, 6160) = v5;
    sub_6046135C(a1);
    Item_playAppearSound_461C50(a1);
    sub_60462018(a1);
  }
  return v2;
}
