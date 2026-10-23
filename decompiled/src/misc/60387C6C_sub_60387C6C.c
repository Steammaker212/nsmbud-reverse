/* sub_60387C6C
 * address: 0x60387C6C   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60387C6C(_DWORD *a1, void *a2)
{
  void *Resource; // r0
  int v5; // r7
  int v6; // r6
  void *Model2; // r4
  ModelWrapper *v8; // r5
  ModelWrapper *v9; // r0
  void *v10; // r7
  void *v11; // r4
  ModelWrapper *v12; // r6
  ModelWrapper *v13; // r0

  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60C96C48);
  v5 = (int)Resource;
  v6 = 0;
  a1[1] = Resource;
  if ( Resource )
  {
    Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&dword_60C96C6C, 0, 0, 1, 0, 0, 0, (int)a2);
    v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, a2, 4);
    v9 = ModelWrapper_ctor(v8, Model2, 0, 0, 1, 0, 0);
    ModelWrapper_setup(v9, v5, 0, a2);
    a1[2] = v8;
    if ( v8 )
    {
      v10 = (void *)a1[1];
      v11 = (void *)Resource_getModel2(v10, (sead__SafeString *)&dword_60C96C74, 0, 0, 1, 0, 0, 0, (int)a2);
      v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, a2, 4);
      v13 = ModelWrapper_ctor(v12, v11, 0, 0, 1, 0, 0);
      ModelWrapper_setup(v13, (int)v10, 0, a2);
      a1[3] = v12;
      return v12 != 0;
    }
  }
  return v6;
}
