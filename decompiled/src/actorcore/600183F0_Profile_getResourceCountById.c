/* Profile_getResourceCountById
 * address: 0x600183F0   size: 36   group: actorcore
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Profile_getResourceCountById(unsigned int a1)
{
  int result; // r0

  result = 0;
  if ( a1 <= 0x391 )
    return ProfileResourceCount[a1];
  return result;
}
