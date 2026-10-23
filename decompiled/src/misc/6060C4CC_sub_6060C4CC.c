/* sub_6060C4CC
 * address: 0x6060C4CC   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060C4CC(int a1, float s0_0, float a3, float a4)
{
  char v4; // r12
  int v9; // r0
  void *v10; // r5
  void *Model2; // r6
  ModelWrapper *v12; // r7
  ModelWrapper *v13; // r0
  sead__SafeString a2; // [sp+18h] [bp-38h] BYREF

  if ( ((unsigned int)dword_60CB2E40 & ~(1616954616 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60CB2E40) )
  {
    dword_60CB2E48 = (int)&sead__SafeStringBase__vtable;
    dword_60CB2E4C = (int)"mt_senter_s";
    sub_60000288();
    _cxa_guard_release(dword_60CB2E40);
  }
  if ( ((unsigned int)&dword_60CB2E40[1] & ~(1616954728 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2E40[1]) )
  {
    dword_60CB2E50 = (int)&sead__SafeStringBase__vtable;
    dword_60CB2E54 = (int)"obj_kinoko_s_L";
    dword_60CB2E58 = (int)&sead__SafeStringBase__vtable;
    dword_60CB2E5C = (int)"obj_kinoko_s_M";
    dword_60CB2E60 = (int)&sead__SafeStringBase__vtable;
    dword_60CB2E64 = (int)"obj_kinoko_s_R";
    dword_60CB2E68 = (int)&dword_60CB2E48;
    dword_60CB2E6C = 1090519040;
    byte_60CB2E70 = 1;
    byte_60CB2E71 = 0;
    byte_60CB2E72 = 0;
    dword_60CB2E74 = (int)&sead__SafeStringBase__vtable;
    dword_60CB2E78 = (int)"obj_kinoko_s_LR";
    dword_60CB2E7C = (int)&sead__SafeStringBase__vtable;
    dword_60CB2E80 = (int)"obj_kinoko_s_M";
    sub_60000288();
    _cxa_guard_release(&dword_60CB2E40[1]);
  }
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_kinoko";
  v9 = LoadResource(ResourceMgrRelated_instance, &a2);
  sub_6063031C(a1 + 6108, 0, v9, &dword_60CB2E50, s0_0, a3, a4);
  FIELD_F32(a1, 6620) = a4;
  FIELD_U32(a1, 6624) = dword_60CB2E6C;
  FIELD_F32(a1, 6628) = s0_0;
  FIELD_F32(a1, 6632) = s0_0;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_kinoko_shiso";
  v10 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  FIELD_U32(a1, 6100) = v10;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_kinoko_shiso_kuki_U";
  Model2 = (void *)Resource_getModel2(v10, &a2, 0, 0, 0, 0, 0, 0, 0);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v13 = ModelWrapper_ctor(v12, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v13, v10, 0, 0);
  FIELD_U32(a1, 6104) = v12;
  return 6104;
}
