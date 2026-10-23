/* sub_601463A8
 * address: 0x601463A8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601463A8(int result)
{
  char *v1; // r1
  char v2; // r2
  float v3; // s0
  float v4; // s4

  v1 = (char *)(result + 6420);
  if ( !FIELD_U8(result, 6420) )
  {
    v2 = 1;
    if ( (float)(FIELD_F32(result, 112) + 40.0) >= (float)(FIELD_F32(dword_60CC6484, 124)
                                                           - FIELD_F32(dword_60CC6484, 108)) )
    {
      v3 = FIELD_F32(dword_60CC6484, 112);
      v4 = FIELD_F32(result, 108);
      result = v4 <= (float)(v3 + FIELD_F32(dword_60CC6484, 104));
      v2 = (v4 >= v3) & result;
    }
    *v1 = v2;
  }
  return result;
}
