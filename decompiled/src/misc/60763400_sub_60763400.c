/* sub_60763400
 * address: 0x60763400   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60763400(int result)
{
  float v1; // s2
  float v2; // s4
  float v3; // s0
  float v4; // s4

  if ( FIELD_U32(AreaTask_intance, 1828) != 1 )
  {
    v1 = FIELD_F32(result, 108);
    v2 = FIELD_F32(result, 7068);
    v3 = FIELD_F32(dword_60CC6484, 120) - v2;
    v4 = FIELD_F32(dword_60CC6484, 112) + v2;
    if ( v1 < v4 )
    {
      FIELD_U32(result, 9648) = 1;
      FIELD_F32(result, 9656) = v1 - v4;
    }
    if ( v1 > v3 )
    {
      FIELD_F32(result, 9652) = FIELD_F32(result, 584) - v3;
      FIELD_U32(result, 9644) = 1;
    }
  }
  return result;
}
