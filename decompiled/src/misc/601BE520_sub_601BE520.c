/* sub_601BE520
 * address: 0x601BE520   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

double __fastcall sub_601BE520(int a1, int a2)
{
  float *v4; // r0
  float v5; // s18
  unsigned int v6; // s16

  v4 = (float *)sub_601E0040(a1 + 1160);
  v5 = *v4;
  v6 = *((_DWORD *)v4 + 1);
  switch ( FIELD_U32(a1, 1096) )
  {
    case 2:
    case 3:
      sub_601B6A5C();
      break;
    case 4:
      v5 = v5 + (float)((float)a2 * *((float *)sub_601B6A5C() + 25));
      break;
    case 5:
      v5 = v5 - (float)((float)a2 * *((float *)sub_601B6A5C() + 25));
      break;
    default:
      return COERCE_DOUBLE(__PAIR64__(v6, LODWORD(v5)));
  }
  return COERCE_DOUBLE(__PAIR64__(v6, LODWORD(v5)));
}
