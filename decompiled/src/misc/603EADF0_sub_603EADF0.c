/* sub_603EADF0
 * address: 0x603EADF0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603EADF0(int a1, Actor *a2)
{
  int v3; // r4

  v3 = 1;
  if ( Actor__getProfileId(a2) != 84
    && Actor__getProfileId(a2) != 85
    && Actor__getProfileId(a2) != 86
    && Actor__getProfileId(a2) != 87
    && Actor__getProfileId(a2) != 444 )
  {
    return Actor__getProfileId(a2) == 443;
  }
  return v3;
}
