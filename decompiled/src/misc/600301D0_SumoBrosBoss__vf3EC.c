/* SumoBrosBoss__vf3EC
 * address: 0x600301D0   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026BE4
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf3EC(_DWORD *a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "boss_KK";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[1775] = v2;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "boss_KK";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 0, 3, 1, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 3, 1, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  a1[1774] = v4;
  a1[36] = 1075838976;
  a1 += 36;
  a1[1] = 1075838976;
  a1[2] = 1075838976;
  return (*(int (__fastcall **)(void *, _DWORD *))(*(_DWORD *)FIELD_U32(v4, 0x0) + 68))(FIELD_U32(v4, 0x0), a1);
}
