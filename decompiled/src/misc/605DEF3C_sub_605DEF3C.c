/* sub_605DEF3C
 * address: 0x605DEF3C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DEF3C(int a1)
{
  sub_605D8994((_DWORD *)a1);
  if ( (FIELD_U8(a1, 6265) & 0x20) == 0 && Actor__getProfileId((Actor *)a1) != 453 )
    sub_605D9454(a1, 0, 0.0, 3.0);
  return 1;
}
