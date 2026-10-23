/* sub_601A68FC
 * address: 0x601A68FC   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A68FC(_DWORD *a1, int a2)
{
  sead__SafeString *v3; // r6
  void *Resource; // r5
  void *Model; // r6
  ModelWrapper *v6; // r7
  ModelWrapper *v7; // r0
  int v8; // r1
  _DWORD v10[8]; // [sp+18h] [bp-20h] BYREF

  v3 = (sead__SafeString *)sub_60220C68(a2);
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v3);
  a1[103] = Resource;
  Model = (void *)Resource_getModel(Resource, v3, 6, 2, 0, 0, 0, 0, 1, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v7 = sub_60421830(v6, Model, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v7, (int)Resource, 0, 0);
  a1[102] = v6;
  v8 = a1[103];
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "wait2";
  sub_60421938(v6, v8, (int)v10);
  a1[32] = 1075838976;
  a1[33] = 1075838976;
  a1[34] = 1075838976;
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)a1[102] + 68))(*(_DWORD *)a1[102]);
}
