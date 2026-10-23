/* sub_60421830
 * address: 0x60421830   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_60421830(
        ModelWrapper *a1,
        void *a2,
        signed int a3,
        signed int numTexAnims,
        signed int numShuAnims,
        signed int numVisAnims,
        signed int numShaAnims)
{
  ModelWrapper_ctor(a1, a2, a3, numTexAnims, numShuAnims, numVisAnims, numShaAnims);
  sub_60421BAC(&a1[1]);
  a1[1].texAnims.animations = 0;
  return a1;
}
