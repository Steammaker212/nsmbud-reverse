/* sub_601B3ACC
 * address: 0x601B3ACC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_601B3ACC(int a1)
{
  int v2; // r0
  int v3; // r0
  unsigned int result; // r0

  if ( FIELD_U32(a1, 1144) == 4 )
  {
    FIELD_U32(a1, 1140) = 0;
    v2 = FIELD_U32(a1, 1148);
  }
  else
  {
    v2 = sub_601E1384();
    FIELD_U32(a1, 1148) = v2;
    FIELD_U32(a1, 1096) = 6;
  }
  FIELD_U8(a1, 280) = 0;
  FIELD_U32(a1, 1100) = v2;
  v3 = sub_601E1308(v2);
  FIELD_U32(a1, 180) = v3;
  FIELD_U32(a1, 1000) = v3;
  result = FIELD_U32(a1, 1120) & 0xFFFFFBFF;
  FIELD_U32(a1, 1120) = result;
  return result;
}
