/* BanzaiBill_vf54
 * address: 0x60323200   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BanzaiBill_vf54(Actor *a1)
{
  int result; // r0

  a1[79].id = 0;
  a1[91].field_20.next = 0;
  a1[91].field_20.previous = 0;
  result = Actor__getProfileId(a1);
  if ( result == 629 )
  {
    result = a1[91].childCount;
    FIELD_U32(a1 + (2) * 80, 0x4) = result;
  }
  return result;
}
