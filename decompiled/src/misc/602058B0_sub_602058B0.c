/* sub_602058B0
 * address: 0x602058B0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602058B0(int a1)
{
  sub_601861EC((Actor *)a1);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 268));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 268));
  return 1;
}
