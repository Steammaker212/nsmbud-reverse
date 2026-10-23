/* sub_6020DC50
 * address: 0x6020DC50   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020DC50(_DWORD *a1, int a2)
{
  sead__SafeString *v3; // r6
  void *Resource; // r5
  void *Model; // r6
  ModelWrapper *v6; // r7
  ModelWrapper *v7; // r0

  v3 = (sead__SafeString *)sub_60220C68(a2);
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v3);
  a1[94] = Resource;
  Model = (void *)Resource_getModel(Resource, v3, 6, 2, 0, 0, 0, 0, 1, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v7 = sub_60421830(v6, Model, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v7, (int)Resource, 0, 0);
  a1[93] = v6;
  sub_60421938(v6, a1[94], (int)&dword_60C8CD90);
  a1[32] = 0x40000000;
  a1[33] = 0x40000000;
  a1[34] = 0x40000000;
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)a1[93] + 68))(*(_DWORD *)a1[93]);
}
