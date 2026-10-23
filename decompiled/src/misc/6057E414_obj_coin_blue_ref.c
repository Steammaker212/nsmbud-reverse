/* obj_coin_blue_ref
 * address: 0x6057E414   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall obj_coin_blue_ref(int a1)
{
  char v1; // r12
  void *Resource; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  _DWORD v8[8]; // [sp+18h] [bp-20h] BYREF

  if ( ((unsigned int)&unk_60CAEF30 & ~(1616372784 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60CAEF30) )
  {
    dword_60CAEF34 = (int)&sead__SafeStringBase__vtable;
    dword_60CAEF38 = (int)"obj_coin";
    dword_60CAEF3C = (int)&sead__SafeStringBase__vtable;
    dword_60CAEF40 = (int)"obj_coin_blue";
    sub_60000288();
    _cxa_guard_release((__guard *)&unk_60CAEF30);
  }
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "obj_coin";
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v8);
  Model2 = (void *)Resource_getModel2(
                     Resource,
                     (sead__SafeString *)((char *)&unk_60CAEF30 + 8 * (FIELD_U32(a1, 20) & 1) + 4),
                     0,
                     0,
                     0,
                     0,
                     0,
                     0,
                     0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v6, Resource, 0, 0);
  FIELD_U32(a1, 6104) = v5;
  return 6104;
}
