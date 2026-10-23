/* sub_60999AFC
 * address: 0x60999AFC   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60999AFC(int a1, int a2)
{
  int result; // r0
  int v4; // r0

  result = FIELD_U32(a1, 24);
  if ( result < 0 )
  {
    FIELD_U32(a1, 24) = a2;
    v4 = FIELD_U32(a1, 4);
    if ( v4 )
      FIELD_U32(a1, 32) = sub_608354C4(v4 + 72 * a2);
    if ( (*(_BYTE *)a1 & 1) != 0 )
      __asm { ORR             PC, R0, R1,LSL R12 }
    FIELD_U32(a1, 36) = 0;
    result = FIELD_U32(a1, 12);
    FIELD_U32(a1, 40) = result;
  }
  return result;
}
