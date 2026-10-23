/* sub_601C4110
 * address: 0x601C4110   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C4110(float *a1, float *a2, int a3)
{
  float v3; // s0
  float v4; // s2
  float v5; // s0
  float v6; // s2
  int result; // r0

  switch ( a3 )
  {
    case 0:
      v3 = a2[1];
      v4 = a1[21];
      return v4 >= v3;
    case 1:
      v5 = a2[1];
      v6 = a1[21];
      goto LABEL_7;
    case 2:
      v3 = a2[2];
      v4 = a1[22];
      return v4 >= v3;
    case 3:
      v5 = a2[2];
      v6 = a1[22];
      goto LABEL_7;
    case 4:
      v5 = *a2;
      v6 = a1[20];
LABEL_7:
      result = 1;
      if ( v6 > v5 )
        return 0;
      return result;
    case 5:
      v3 = *a2;
      v4 = a1[20];
      return v4 >= v3;
    default:
      return 0;
  }
}
