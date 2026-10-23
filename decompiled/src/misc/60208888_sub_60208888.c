/* sub_60208888
 * address: 0x60208888   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60208888(_DWORD *a1, int a2)
{
  _DWORD *v4; // r6
  sead__SafeString *v5; // r7
  void *Resource; // r5
  void *Model; // r8
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0

  v4 = (_DWORD *)sub_60220C68(a2);
  v5 = (sead__SafeString *)sub_60220C7C(a2);
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v4);
  a1[94] = Resource;
  Model = (void *)Resource_getModel(Resource, v5, 6, 2, 0, 0, 0, 0, 1, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v9 = sub_60421830(v8, Model, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v9, (int)Resource, 0, 0);
  a1[93] = v8;
  sub_60421938(v8, a1[94], (int)&dword_60C8C8C0);
  a1[32] = 0x40000000;
  a1[33] = 0x40000000;
  a1[34] = 0x40000000;
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)a1[93] + 68))(*(_DWORD *)a1[93]);
}
