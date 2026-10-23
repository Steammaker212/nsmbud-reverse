/* kuribo_ref
 * address: 0x6020BBE8   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall kuribo_ref(_DWORD *a1)
{
  void *v2; // r5
  void *Model; // r9
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r1
  sead__SafeString identifier; // [sp+18h] [bp-28h] BYREF

  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "kuribo";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  a1[103] = v2;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "kuribo";
  Model = (void *)Resource_getModel(v2, &identifier, 6, 2, 1, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model, 2, 1, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  a1[102] = v4;
  v6 = a1[103];
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "walk";
  sub_60421938(v4, v6, (int)&identifier);
  a1[32] = 1080033280;
  a1[33] = 1080033280;
  a1[34] = 1080033280;
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)a1[102] + 68))(*(_DWORD *)a1[102]);
}
