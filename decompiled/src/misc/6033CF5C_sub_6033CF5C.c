/* sub_6033CF5C
 * address: 0x6033CF5C   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6033CF5C(void *a1, sead__SafeString *a2, int a3)
{
  void *Model2; // r7
  ModelWrapper *v6; // r6
  ModelWrapper *v7; // r0

  Model2 = (void *)Resource_getModel2(a1, a2, 2, 1, 0, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v7 = sub_60421830(v6, Model2, 2, 1, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v7, (int)a1, 0, 0);
  if ( !a3 )
    sub_60421938(v6, (int)a1, (int)&dword_60C94550);
  return v6;
}
