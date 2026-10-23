/* sub_6076EEFC
 * address: 0x6076EEFC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076EEFC(int a1)
{
  _BYTE *v2; // r5
  int result; // r0

  v2 = (_BYTE *)(a1 + 11000);
  if ( FIELD_U8(a1, 11000) )
  {
    sub_60236074(a1 + 10868);
    *v2 = 0;
  }
  result = FIELD_U8(a1, 11001);
  if ( FIELD_U8(a1, 11001) )
  {
    sub_60236074(a1 + 10932);
    FIELD_U8(a1, 11001) = 0;
    return 0;
  }
  return result;
}
