/* sub_60999B6C
 * address: 0x60999B6C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60999B6C(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 24);
  if ( result >= 0 )
  {
    if ( FIELD_U32(a1, 4) )
      nullsub_66();
    FIELD_U32(a1, 32) = 0;
    FIELD_U32(a1, 24) = -1;
    if ( (*(_BYTE *)a1 & 1) != 0 )
      __asm { ORR             PC, R1, R0,LSL R12 }
    FIELD_U32(a1, 36) = 0;
    result = FIELD_U32(a1, 12);
    FIELD_U32(a1, 40) = result;
  }
  return result;
}
