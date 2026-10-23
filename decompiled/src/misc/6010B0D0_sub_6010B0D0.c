/* sub_6010B0D0
 * address: 0x6010B0D0   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6010B0D0(float *a1)
{
  float v1; // s4
  float result; // s0
  float v3; // s2

  v1 = a1[27];
  result = FIELD_F32(dword_60CC6484, 116);
  v3 = (float)(result + a1[1872]) + -1.0;
  if ( v1 <= v3 )
  {
    if ( v1 < (float)((float)(result + a1[1873]) + 1.0) && a1[30] < 0.0 )
    {
      result = (float)(result + a1[1873]) + 1.0;
      a1[27] = result;
    }
  }
  else
  {
    result = a1[30];
    if ( result > 0.0 )
      a1[27] = v3;
  }
  return result;
}
