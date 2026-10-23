/* sub_601C1174
 * address: 0x601C1174   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C1174(_DWORD *a1, int a2)
{
  int result; // r0
  _DWORD *v4; // r0

  if ( (a1[66] & 0xFFFFFFFE) == 6 )
  {
    result = a1[277];
    if ( (result & 0x80000) == 0 )
    {
      a1[277] = result | 0x80000;
      v4 = (_DWORD *)sub_601E0040(a1 + 271);
      a1[20] = *v4;
      a1[21] = v4[1];
      a1[22] = v4[2];
      return sub_601C503C(a1);
    }
  }
  else
  {
    sub_601C59E4(a1, a2);
    a1[32] = 0;
    a1[33] = 0;
    a1[34] = 0;
    a1[71] += 20 * sub_601C5EEC(a1);
    sub_601BA0F8((int)a1, 7, 0.0, 0.0);
    result = a1[277] | 0x80;
    a1[277] = result;
  }
  return result;
}
