/* sub_60269F70
 * address: 0x60269F70   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60269F70(int a1, int a2)
{
  int v3; // r5

  if ( FIELD_U8(a1, 4) )
    return 1;
  FIELD_U8(a1, 4) = 1;
  v3 = FIELD_U32(a2, 64);
  if ( !v3 )
    return 0;
  sub_602A3EFC(v3 + 6312, 24);
  if ( FIELD_U16(v3, 6964) || FIELD_U16(v3, 6966) )
    return 1;
  if ( FIELD_U8(v3, 6974) )
  {
    FIELD_U32(v3, 124) = 1079404134;
    FIELD_U8(v3, 6974) = 0;
    FIELD_U8(v3, 6973) = 0;
    FIELD_U32(v3, 6956) = 255;
    FIELD_U32(v3, 6960) = 0;
    FIELD_U32(v3, 6952) = 0;
  }
  else
  {
    FIELD_U32(v3, 124) = 0;
  }
  return 1;
}
