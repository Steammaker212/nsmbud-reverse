/* sub_6026AA50
 * address: 0x6026AA50   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026AA50(int result)
{
  float v1; // r1
  float v2; // r3
  int v3; // r2
  _WORD *v4; // r1

  v1 = FIELD_F32(result, 108);
  FIELD_F32(result, 6304) = v1;
  v2 = FIELD_F32(result, 112);
  FIELD_F32(result, 6308) = v2;
  FIELD_U32(result, 6312) = FIELD_U32(result, 116);
  v3 = dword_60CC6484;
  FIELD_F32(result, 6304) = v1 - FIELD_F32(dword_60CC6484, 112);
  FIELD_F32(result, 6308) = FIELD_F32(v3, 124) - v2;
  v4 = (_WORD *)(result + 6276);
  if ( FIELD_U32(result, 6316) == 1 )
  {
    *v4 = 25;
    return 25;
  }
  else
  {
    *v4 = 8;
    FIELD_U16(result, 6278) = 10;
  }
  return result;
}
