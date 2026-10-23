/* sub_601F9AE4
 * address: 0x601F9AE4   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F9AE4(int a1)
{
  void *Resource; // r5
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0

  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60C8BEF8);
  FIELD_U32(a1, 308) = Resource;
  Model = (void *)Resource_getModel(Resource, (sead__SafeString *)&dword_60C8BF08, 6, 2, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)Resource, 0, 0);
  FIELD_U32(a1, 304) = v4;
  sub_601F0304(a1);
  return 1;
}
