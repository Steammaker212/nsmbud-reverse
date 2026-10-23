/* sub_607868A0
 * address: 0x607868A0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607868A0(int a1)
{
  int v1; // r1

  v1 = 0;
  if ( !FIELD_U8(dword_60C9A1F0, 6520) )
    return (FIELD_U8(a1, 8) >> 1) & 1;
  return v1;
}
