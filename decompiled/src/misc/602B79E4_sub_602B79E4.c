/* sub_602B79E4
 * address: 0x602B79E4   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602B79E4(_DWORD *a1)
{
  _DWORD *v2; // r5
  void *Resource; // r8
  void *Model2; // r7
  ModelWrapper *v5; // r6
  ModelWrapper *v6; // r0
  _DWORD *v7; // r4
  int v8; // t1

  v2 = a1 + 1575;
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60C90FB0[2 * a1[1575] + 9]);
  Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&dword_60C90FB0[2 * *v2 + 13], 2, 0, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v6, (int)Resource, 0, 0);
  a1[1576] = v5;
  v8 = a1[1577];
  v7 = a1 + 1577;
  if ( v8 )
  {
    *v7 = 0;
    sub_60421AD4((int)v5);
  }
}
