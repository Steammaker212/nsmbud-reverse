/* sub_6075A528
 * address: 0x6075A528   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6075A528(int a1)
{
  unsigned int v2; // r0

  sub_6078D210();
  sub_6078D230(a1);
  v2 = FIELD_U32(a1, 560);
  if ( v2 >= 2 )
    v2 = 0;
  return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 4 * v2 + 548));
}
