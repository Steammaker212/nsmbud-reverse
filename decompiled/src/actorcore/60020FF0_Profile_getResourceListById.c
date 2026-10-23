/* Profile_getResourceListById
 * address: 0x60020FF0   size: 36   group: actorcore
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead__SafeString *__fastcall Profile_getResourceListById(unsigned int a1)
{
  int v1; // r1

  v1 = 0;
  if ( a1 <= 0x391 )
    return ResourceList[a1];
  return (sead__SafeString *)v1;
}
