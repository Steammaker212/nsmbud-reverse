/* sub_6021666C
 * address: 0x6021666C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021666C(int a1)
{
  ModelWrapper *v2; // r0
  ModelWrapper *v3; // r0

  sub_601861EC((Actor *)a1);
  v2 = *(ModelWrapper **)(a1 + 276);
  if ( v2 )
    ModelWrapper_updateAnims(v2);
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
  {
    v3 = *(ModelWrapper **)(a1 + 276);
    if ( v3 )
      ModelWrapper_updateModel(v3);
  }
  return 1;
}
