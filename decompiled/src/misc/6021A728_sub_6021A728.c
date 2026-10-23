/* sub_6021A728
 * address: 0x6021A728   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021A728(int result, int a2)
{
  float v2; // s0
  float v3; // s2
  float v4; // s4
  float v5; // s0

  v2 = 0.0;
  FIELD_U32(result, 792) = 0;
  v3 = FIELD_F32(result, 780);
  v4 = FIELD_F32(result, 776);
  if ( (float)(v3 + 0.0) >= v4 )
  {
    v2 = v4 - v3;
    FIELD_F32(result, 792) = v4 - v3;
    FIELD_U8(result, 1454) = 1;
  }
  v5 = v3 + v2;
  FIELD_F32(result, 796) = v5;
  if ( a2 == 1 )
    return sub_60818138(dword_60CC6B68, (int)v5, COERCE_FLOAT((int)v5));
  return result;
}
