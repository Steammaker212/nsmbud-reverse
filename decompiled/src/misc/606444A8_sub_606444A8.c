/* sub_606444A8
 * address: 0x606444A8   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606444A8(ModelWrapper **a1, void *r1_0, void *a3, float a4, float a5, float a6)
{
  char v6; // r12
  void *Model2; // r7
  ModelWrapper *v14; // r5
  ModelWrapper *v15; // r0
  int v16; // r5
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-48h] BYREF

  if ( ((unsigned int)dword_60CB5B70 & ~(1617183968 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60CB5B70) )
  {
    dword_60CB5B78 = (int)&sead__SafeStringBase__vtable;
    dword_60CB5B7C = (int)"mat_lift_up_down_body";
    sub_60000288();
    _cxa_guard_release(dword_60CB5B70);
  }
  if ( ((unsigned int)&dword_60CB5B70[1] & ~(1617184080 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5B70[1]) )
  {
    dword_60CB5B80 = (int)&sead__SafeStringBase__vtable;
    dword_60CB5B84 = (int)"lift_up_down_L";
    dword_60CB5B88 = (int)&sead__SafeStringBase__vtable;
    dword_60CB5B8C = (int)"lift_up_down_M";
    dword_60CB5B90 = (int)&sead__SafeStringBase__vtable;
    dword_60CB5B94 = (int)"lift_up_down_R";
    dword_60CB5B98 = (int)&dword_60CB5B78;
    dword_60CB5B9C = 1090519040;
    byte_60CB5BA0 = 1;
    byte_60CB5BA1 = 0;
    byte_60CB5BA2 = 0;
    dword_60CB5BA4 = (int)&sead__SafeStringBase__vtable;
    dword_60CB5BA8 = (int)"lift_up_down";
    dword_60CB5BAC = (int)&sead__SafeStringBase__vtable;
    dword_60CB5BB0 = (int)"lift_up_down";
    sub_60000288();
    _cxa_guard_release(&dword_60CB5B70[1]);
  }
  sub_6063031C(a1 + 1, (int)r1_0, (int)a3, (int)&dword_60CB5B80, a4, a5, a6);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_up_down_plate";
  Model2 = (void *)Resource_getModel2(a3, &a2, 0, 1, 0, 0, 0, 0, (int)r1_0);
  v14 = (ModelWrapper *)operator_new_8DE25C(0x30u, r1_0, 4);
  v15 = ModelWrapper_ctor(v14, Model2, 0, 1, 0, 0, 0);
  ModelWrapper_setup(v15, a3, 0, r1_0);
  *a1 = v14;
  v16 = (int)*FIELD_U32(v14, 0x10).animations;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_up_down_plate";
  TexAnim_play(v16, (int)a3, &a2);
  FIELD_F32(v16, 20) = a5;
  result = FIELD_U32(v16, 28) | 2;
  FIELD_U32(v16, 28) = result;
  return result;
}
