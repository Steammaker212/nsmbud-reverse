/* AreaTask_getWrappedXPos
 * address: 0x603F4900   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall AreaTask_getWrappedXPos(int result, float a2)
{
  float *v2; // r1
  float *v3; // r0
  float v4; // s2
  float v5; // s6

  if ( FIELD_U32(result, 1828) )
  {
    v2 = (float *)(result + 1820);
    v3 = (float *)(result + 1812);
    v4 = *v3;
    v5 = *v2 - *v3;
    while ( 1 )
    {
      if ( a2 < v4 )
        goto LABEL_3;
      if ( a2 < *v2 )
        return a2;
      if ( a2 < v4 )
LABEL_3:
        a2 = v5 + a2;
      else
        a2 = a2 - v5;
    }
  }
  return a2;
}
