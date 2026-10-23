/* sub_6039F328
 * address: 0x6039F328   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039F328(int a1, int a2)
{
  _BYTE *v2; // r4

  v2 = (_BYTE *)(a1 + 6584);
  if ( !FIELD_U8(a1, 6584) )
    a2 = 1;
  sub_603A4974(a1, a2);
  *v2 = 1;
  return 1;
}
