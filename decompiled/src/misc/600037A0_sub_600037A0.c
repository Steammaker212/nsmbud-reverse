/* sub_600037A0
 * address: 0x600037A0   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600037A0(int result)
{
  _DWORD *v1; // r1
  float *v2; // r2
  float v3; // s0
  float v4; // s2

  v1 = (_DWORD *)(result + 6060);
  if ( FIELD_U32(result, 6060) == 1 )
  {
    v2 = (float *)(result + 6000);
    if ( (FIELD_U8(result, 2872) & 1) != 0 )
    {
      result = 0;
      *v2 = 0.0;
LABEL_12:
      *v1 = 0;
      return result;
    }
    v3 = *v2;
    result += 6004;
    v4 = *(float *)result;
    if ( *v2 >= 0.0 )
    {
      if ( *v2 <= 0.0 || (v3 = v3 - v4, v3 >= 0.0) )
      {
LABEL_10:
        *v2 = v3;
        if ( v3 != 0.0 )
          return result;
        goto LABEL_11;
      }
    }
    else
    {
      v3 = v3 + v4;
      if ( v3 <= 0.0 )
        goto LABEL_10;
    }
    *v2 = 0.0;
LABEL_11:
    result = 0;
    goto LABEL_12;
  }
  return result;
}
