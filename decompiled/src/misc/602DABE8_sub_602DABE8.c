/* sub_602DABE8
 * address: 0x602DABE8   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DABE8(_DWORD *a1)
{
  void *Resource; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int result; // r0

  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60C91D6C);
  Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&dword_60C91D74, 2, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)Resource, 0, 0);
  a1[1575] = v4;
  a1[1706] = Resource_getModel2(Resource, (sead__SafeString *)&dword_60C91DB0, 0, 0, 0, 0, 0, 0, 0);
  a1[1722] = Resource_getModel2(Resource, (sead__SafeString *)&unk_60C91DB8, 0, 0, 0, 0, 0, 0, 0);
  a1[1738] = Resource_getModel2(Resource, (sead__SafeString *)&dword_60C91DC0, 0, 0, 0, 0, 0, 0, 0);
  a1[1754] = Resource_getModel2(Resource, (sead__SafeString *)&dword_60C91DC8, 0, 0, 0, 0, 0, 0, 0);
  a1[1770] = Resource_getModel2(Resource, (sead__SafeString *)&dword_60C91DD0, 0, 0, 0, 0, 0, 0, 0);
  a1[1786] = Resource_getModel2(Resource, (sead__SafeString *)&dword_60C91DD8, 0, 0, 0, 0, 0, 0, 0);
  result = Resource_getModel2(Resource, (sead__SafeString *)&dword_60C91DE0, 0, 0, 0, 0, 0, 0, 0);
  a1[1802] = result;
  return result;
}
