/* BanzaiBill_vf53
 * address: 0x60323254   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BanzaiBill_vf53(Actor *a1)
{
  int result; // r0

  result = Actor__getProfileId(a1);
  if ( result == 629 )
  {
    a1[2].heap = 0;
    return 0;
  }
  return result;
}
