/* SumoBroLightning_vf7
 * address: 0x60335470   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SumoBroLightning_vf7(MultiStateActor *a1)
{
  if ( (FIELD_U32(a1, 0x14) & 0x100) != 0 )
    FIELD_U32(a1, 0xB4) = 0;
  return CollisionActor__beforeExecute(&FIELD_U32(a1, 0x0));
}
