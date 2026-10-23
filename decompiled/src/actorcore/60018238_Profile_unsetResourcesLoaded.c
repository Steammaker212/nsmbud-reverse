/* Profile_unsetResourcesLoaded
 * address: 0x60018238   size: 20   group: actorcore
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Profile *__fastcall Profile_unsetResourcesLoaded(Profile *result)
{
  if ( FIELD_U8(result, 0x10) )
    FIELD_U8(result, 0x10) = 0;
  return result;
}
