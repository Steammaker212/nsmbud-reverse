/* sub_602C7388
 * address: 0x602C7388   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C7388(int result)
{
  unsigned int v1; // r2
  int v2; // r1
  float v3; // s0
  float v4; // s2
  float v5; // s0

  v1 = (unsigned __int8)FIELD_U32(result, 20) >> 6;
  v2 = FIELD_U32(result, 20) & 3;
  FIELD_U32(result, 28100) = v1;
  if ( v1 > 1 )
  {
    v5 = flt_60B091EC[v2];
    FIELD_U32(result, 120) = 0;
    FIELD_U32(result, 132) = 0;
    v4 = -v5;
  }
  else
  {
    v3 = flt_60B091EC[v2];
    FIELD_F32(result, 120) = v3;
    if ( FIELD_U32(result, 80) == 1 )
    {
      v3 = -v3;
      FIELD_F32(result, 120) = v3;
    }
    FIELD_F32(result, 132) = v3;
    v4 = -4.0;
  }
  FIELD_F32(result, 136) = v4;
  FIELD_U32(result, 124) = 0;
  FIELD_U32(result, 128) = 0;
  return result;
}
