/* sub_606BFC24
 * address: 0x606BFC24   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606BFC24(int a1)
{
  void *Resource; // r5
  void *Model2; // r7
  ModelWrapper *v4; // r6
  ModelWrapper *v5; // r0

  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60CBA890);
  FIELD_U32(a1, 6100) = Resource;
  if ( !Resource )
    return 0;
  Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&dword_60CBA898, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, Resource, 0, 0);
  FIELD_U32(a1, 6104) = v4;
  return v4 != 0;
}
