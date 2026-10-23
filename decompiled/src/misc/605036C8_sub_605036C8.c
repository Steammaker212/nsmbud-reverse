/* sub_605036C8
 * address: 0x605036C8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605036C8(int result)
{
  int v1; // r1

  if ( !FIELD_U8(result, 731) )
  {
    v1 = FIELD_U32(result, 68);
    if ( !FIELD_U8(v1, 208) )
      FIELD_U32(result, 720) = FIELD_U32(result, 716);
    FIELD_U8(result, 730) = 1;
    FIELD_U8(result, 741) = 1;
    return sub_6040200C(dword_60C99E68, v1, FIELD_U32(result, 724));
  }
  return result;
}
