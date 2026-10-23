/* sub_6072D610
 * address: 0x6072D610   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072D610(int a1)
{
  void *v2; // r8
  char *v3; // r0
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  sead__SafeString a2; // [sp+18h] [bp-20h] BYREF

  v2 = *(void **)(a1 + 6124);
  if ( FIELD_U8(a1, 6106) )
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    v3 = "mochimakiBall_koopa";
  }
  else
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    v3 = "mochimakiBall_1up";
  }
  a2.cstr = v3;
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 1, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 1, 0, 0, 0);
  j_ModelWrapper_setupModel(v6, v2, 0, 0);
  FIELD_U32(a1, 6100) = v5;
  return 6100;
}
