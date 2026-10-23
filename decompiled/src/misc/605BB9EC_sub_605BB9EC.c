/* sub_605BB9EC
 * address: 0x605BB9EC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BB9EC(ModelWrapper **a1)
{
  ModelWrapper *v1; // r4

  v1 = *a1;
  ModelWrapper_updateAnims(*a1);
  return ModelWrapper_updateModel(v1);
}
