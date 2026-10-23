/* sub_60786A0C
 * address: 0x60786A0C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60786A0C(int a1)
{
  unsigned int v1; // r0
  int v2; // r1

  if ( !FIELD_U8(dword_60C9A1F0, 6553) && (FIELD_U16(a1, 12) & 0x1008) != 0 && (FIELD_U8(a1, 9) & 1) == 0
    || (FIELD_U32(a1, 8) & 0x1100) != 0x1100 )
  {
    return 0;
  }
  v1 = FIELD_U32(a1, 12);
  v2 = 1;
  if ( (v1 & 0x100) == 0 )
    return (v1 >> 12) & 1;
  return v2;
}
