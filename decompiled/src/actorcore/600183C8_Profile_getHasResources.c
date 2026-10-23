/* Profile_getHasResources
 * address: 0x600183C8   size: 36   group: actorcore
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Profile_getHasResources(unsigned int a1)
{
  char v1; // r1

  v1 = 0;
  if ( a1 <= 0x391 )
    return (char)ProfileHasResourceList[a1];
  return v1;
}
