/* sub_60396694
 * address: 0x60396694   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60396694(int a1)
{
  int result; // r0

  sub_6039AF5C(a1, 0, 0.0);
  result = FIELD_U8(a1, 6320);
  if ( (result & 0xC) != 0 )
  {
    FIELD_U32(a1, 6316) = 0;
    FIELD_U32(a1, 88) = 0;
    FIELD_U32(a1, 120) = 0;
    return 6316;
  }
  return result;
}
