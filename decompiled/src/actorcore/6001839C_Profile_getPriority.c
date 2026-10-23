/* Profile_getPriority
 * address: 0x6001839C   size: 40   group: actorcore
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Profile_getPriority(unsigned int a1)
{
  int v1; // r1

  v1 = -1;
  if ( a1 <= 0x391 )
    return ProfilePriorities[a1];
  return v1;
}
