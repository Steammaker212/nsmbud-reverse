/* sub_6052AD9C
 * address: 0x6052AD9C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052AD9C(int a1)
{
  *(_DWORD *)a1 = off_60C000A0;
  FIELD_U8(a1, 3552) = 0;
  sub_60475AE8((_DWORD *)(a1 + 4));
  return a1;
}
