/* sub_601E0954
 * address: 0x601E0954   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E0954(int *a1, int a2)
{
  int v2; // r1
  int v3; // r1
  int v4; // r1
  int result; // r0

  a1[1] = 0;
  switch ( a2 )
  {
    case 0:
      v2 = 0;
      *a1 = 0;
      goto LABEL_3;
    case 1:
      v3 = 1;
      goto LABEL_11;
    case 2:
      v3 = 2;
      goto LABEL_11;
    case 3:
      v3 = 3;
      goto LABEL_11;
    case 4:
      v3 = 4;
      goto LABEL_11;
    case 5:
      v3 = 5;
      goto LABEL_11;
    case 6:
      v3 = 6;
LABEL_11:
      *a1 = v3;
      goto LABEL_16;
    case 7:
      v4 = 7;
      goto LABEL_15;
    case 8:
      v4 = 8;
LABEL_15:
      *a1 = v4;
      a1[1] = 1;
LABEL_16:
      v2 = 0;
      goto LABEL_3;
    case 9:
      *a1 = 0;
      v2 = 1;
LABEL_3:
      result = sub_601D9F00(a1, v2);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
