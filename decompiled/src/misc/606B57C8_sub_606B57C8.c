/* sub_606B57C8
 * address: 0x606B57C8   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B57C8(int result, int a2)
{
  int v2; // r4
  int v3; // r2
  int v4; // r1
  float v5; // s0

  v2 = result;
  if ( a2 )
    return result;
  if ( FIELD_U32(result, 6176) )
  {
    FIELD_U32(result, 124) = 0;
    FIELD_U32(result, 100) = 0;
    if ( FIELD_U32(result, 6168) )
      sub_606B67E8(result, 0, 8.0);
    result = 2;
    if ( FIELD_F32(v2, 6156) <= FIELD_F32(v2, 112) )
      result = 3;
    FIELD_U32(v2, 6184) = result;
    return result;
  }
  if ( FIELD_U8(result, 6182) && !FIELD_U32(result, 6256) )
  {
    v3 = 2;
    FIELD_U32(result, 6164) = 2;
    if ( FIELD_F32(result, 6156) <= FIELD_F32(result, 112) )
      v3 = 3;
    FIELD_U32(result, 6184) = v3;
    FIELD_U8(result, 6182) = 0;
  }
  result += 6184;
  v4 = FIELD_U32(v2, 6184);
  if ( v4 == 2 )
  {
    if ( FIELD_U32(v2, 6164) == 1 )
    {
      FIELD_U32(v2, 136) = 1056964608;
      FIELD_U32(v2, 100) = 1031798784;
    }
    v5 = FIELD_F32(v2, 6156);
    if ( v5 <= FIELD_F32(v2, 112) )
      goto LABEL_23;
  }
  else if ( v4 == 3 )
  {
    if ( FIELD_U32(v2, 6164) == 1 )
    {
      FIELD_U32(v2, 136) = -1090519040;
      FIELD_F32(v2, 100) = -0.0625;
    }
    v5 = FIELD_F32(v2, 6156);
    if ( v5 >= FIELD_F32(v2, 112) )
    {
LABEL_23:
      FIELD_F32(v2, 112) = v5;
      FIELD_U32(v2, 124) = 0;
      FIELD_U32(v2, 136) = 0;
      FIELD_U32(v2, 100) = 0;
      *(_DWORD *)result = 0;
    }
  }
  return result;
}
