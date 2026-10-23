/* sub_601C4960
 * address: 0x601C4960   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C4960(int a1, float *a2, int a3, int a4)
{
  float *v6; // r0
  float v7; // s0
  float *v8; // r0

  v6 = (float *)sub_601E0040(a3);
  *a2 = *v6;
  a2[1] = v6[1];
  a2[2] = v6[2];
  v7 = -60.0;
  v8 = a2 + 2;
  switch ( a4 )
  {
    case 2:
      goto LABEL_5;
    case 3:
      v7 = 60.0;
      goto LABEL_5;
    case 4:
      v7 = 60.0;
      goto LABEL_4;
    case 5:
LABEL_4:
      v8 = a2;
LABEL_5:
      *v8 = v7 + *v8;
      break;
    default:
      return 1;
  }
  return 1;
}
