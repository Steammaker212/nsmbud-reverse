/* sub_608CF768
 * address: 0x608CF768   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF768(int a1)
{
  *(_DWORD *)a1 = &off_60C5B59C;
  FIELD_U32(a1, 4) = 0;
  FIELD_U8(a1, 8) = 0;
  FIELD_U32(a1, 16) = 0;
  sub_608CFDC0(a1 + 20);
  FIELD_U32(a1, 52) = &off_60C5B608;
  FIELD_U32(a1, 56) = a1;
  FIELD_U32(a1, 60) = 0;
  return a1;
}
