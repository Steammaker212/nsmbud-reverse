/* sub_603EF5A4
 * address: 0x603EF5A4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603EF5A4(int a1)
{
  __int16 v2; // r0

  sub_603EF5E0();
  v2 = FIELD_U16(a1, 88) - 1;
  FIELD_U16(a1, 88) = v2;
  if ( v2 )
    return sub_603EF410(a1);
  FIELD_U8(a1, 16) = 1;
  return 1;
}
