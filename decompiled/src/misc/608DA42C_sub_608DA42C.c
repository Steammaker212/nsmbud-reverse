/* sub_608DA42C
 * address: 0x608DA42C   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608DA42C(_DWORD *a1, int a2)
{
  _DWORD *v4; // r0
  int v5; // r0
  int v6; // r0

  a1[1] = 0;
  a1[2] = 0;
  *a1 = off_60C5BB08;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[8] = 0;
  a1[7] = a1 + 6;
  a1[6] = a1 + 6;
  a1[9] = -1;
  a1[12] = 0;
  v4 = a1 + 10;
  a1[11] = v4;
  a1[10] = v4;
  a1[13] = -1;
  v5 = operator_new(0x38u);
  a1[3] = sub_608A9234(v5);
  if ( a2 == 1 )
  {
    v6 = sub_608DE1A4(0xB0u);
    a1[5] = sub_608DA230(v6);
  }
  a1[9] = 156;
  a1[13] = 52;
  return a1;
}
