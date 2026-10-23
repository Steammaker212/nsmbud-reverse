/* sub_6079C0D0
 * address: 0x6079C0D0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079C0D0(int a1)
{
  int result; // r0

  sub_60775620(a1);
  result = FIELD_U32(a1, 9940);
  if ( result == 4 )
    return SE_PLY_THROW_ICEBALL_ref(a1, 0);
  if ( result == 7 )
    return sub_6079EA38(a1);
  return result;
}
