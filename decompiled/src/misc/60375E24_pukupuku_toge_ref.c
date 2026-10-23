/* pukupuku_toge_ref
 * address: 0x60375E24   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall pukupuku_toge_ref(int a1)
{
  void *v2; // r0
  int v3; // r8
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  _DWORD *v7; // r4
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "pukupuku_toge";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  v3 = (int)v2;
  a2.cstr = "pukupuku_toge";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 1, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v6, v3, 0, 0);
  FIELD_U32(a1, 6300) = v5;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "swim";
  sub_6040F4B8(v5, &a2, 1);
  v7 = **(_DWORD ***)(FIELD_U32(a1, 6300) + 20);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "pukupuku_toge";
  TexAnim_play(v7, v3, &a2);
  v7[6] = 0;
  v7[5] = 0;
  result = v7[7] | 2;
  v7[7] = result;
  return result;
}
