/* sub_6043FB1C
 * address: 0x6043FB1C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6043FB1C(_DWORD *a1)
{
  int v2; // r5

  v2 = 6;
  *a1 = off_60BFAB34;
  do
  {
    untitled_ref(&a1[v2]);
    v2 += 146;
  }
  while ( v2 != 9350 );
  sub_60921340(a1 + 9350);
  sub_60921340(a1 + 9374);
  sub_60921340(a1 + 9398);
  sub_60921340(a1 + 9422);
  sub_60921340(a1 + 9446);
  dword_60C9CC8C = 0;
  dword_60C9CC9C = 0;
  dword_60C9CCAC = 1065353216;
  dword_60C9CC84 = 1056964608;
  dword_60C9CC94 = 0;
  dword_60C9CCA4 = 0x80000000;
  dword_60C9CC88 = 0x80000000;
  dword_60C9CC98 = -1090519040;
  dword_60C9CCA8 = 0x80000000;
  dword_60C9CC90 = 1056964608;
  dword_60C9CCA0 = 1056964608;
  dword_60C9CCB0 = 0;
  return a1;
}
