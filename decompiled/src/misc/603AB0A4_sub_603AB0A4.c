/* sub_603AB0A4
 * address: 0x603AB0A4   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603AB0A4(_DWORD *a1)
{
  void *Resource; // r6
  int v3; // r5
  void *Model2; // r8
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0

  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60C97B10);
  v3 = 0;
  a1[1525] = Resource;
  if ( Resource )
  {
    Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&unk_60C97B18, 2, 1, 0, 0, 0, 0, 0);
    v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
    v6 = sub_60421830(v5, Model2, 2, 1, 0, 0, 0);
    j_ModelWrapper_setupModel((int)v6, (int)Resource, 0, 0);
    a1[1526] = v5;
    if ( v5 )
    {
      a1[1527] = *FIELD_U32(v5, 0x10).animations;
      sub_603AB2E0(a1, 0, 0.0);
      return 1;
    }
  }
  return v3;
}
