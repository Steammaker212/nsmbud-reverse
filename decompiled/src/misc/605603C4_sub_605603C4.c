/* sub_605603C4
 * address: 0x605603C4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605603C4(int a1)
{
  unsigned int v2; // r1

  if ( !FIELD_U8(a1, 13754) )
    return 10;
  v2 = FIELD_U32(a1, 13736);
  if ( v2 >= 0xA )
    v2 = 0;
  return *(_DWORD *)(a1 + 12 * v2 + 13596);
}
