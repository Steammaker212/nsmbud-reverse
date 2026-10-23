/* lift_spin_kinoko_ref
 * address: 0x60664A54   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_spin_kinoko_ref(_DWORD *a1)
{
  char v1; // r12
  void *v3; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  void *v7; // r5
  void *v8; // r6
  ModelWrapper *v9; // r7
  ModelWrapper *v10; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v13)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v14; // [sp+20h] [bp-28h]

  if ( ((unsigned int)&dword_60CB6B80 & ~(1617316464 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6B80) )
  {
    dword_60CB6B84 = (int)&sead__SafeStringBase__vtable;
    dword_60CB6B88 = (int)"lift_spin_kinoko_A_M";
    dword_60CB6B8C = (int)&sead__SafeStringBase__vtable;
    dword_60CB6B90 = (int)"lift_spin_kinoko_A_L";
    sub_60000288();
    _cxa_guard_release(&dword_60CB6B80);
  }
  v13 = &sead__SafeStringBase__vtable;
  v14 = "lift_spin_kinoko";
  v3 = (void *)LoadResource(ResourceMgrRelated_instance, &v13);
  Model2 = (void *)Resource_getModel2(
                     v3,
                     (sead__SafeString *)((char *)&dword_60CB6B80 + ((a1[6] >> 5) & 8) + 4),
                     1,
                     0,
                     0,
                     0,
                     0,
                     0,
                     0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v6, v3, 0, 0);
  a1[1526] = v5;
  v13 = &sead__SafeStringBase__vtable;
  v14 = "lift_spin_kinoko";
  v7 = (void *)LoadResource(ResourceMgrRelated_instance, &v13);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_spin_kinoko_B";
  v8 = (void *)Resource_getModel2(v7, &a2, 1, 0, 0, 0, 0, 0, 0);
  v9 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v10 = ModelWrapper_ctor(v9, v8, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v10, v7, 0, 0);
  a1[1527] = v9;
  return 6108;
}
