/* sub_60913E24
 * address: 0x60913E24   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913E24(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r4

  v6 = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 4) = 0;
  FIELD_U8(a1, 20) &= ~1u;
  FIELD_U16(a1, 22) = 0;
  if ( !a2 )
    return 1;
  if ( sub_60915628(dword_60CCFC84, a1, a3, a2, a4, a5) == 1 )
  {
    FIELD_U16(a1, 22) = a5;
    return 1;
  }
  return v6;
}
