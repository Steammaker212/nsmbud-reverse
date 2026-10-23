/* sub_608411E4
 * address: 0x608411E4   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608411E4(_BYTE *a1, int a2)
{
  int v4; // r7
  _BYTE *v5; // r6
  _BYTE *v6; // r5
  int result; // r0

  sub_6083EB04(a1 + 1224);
  sub_6083EB04(a1 + 1760);
  sub_6083EB04(a1 + 2296);
  sub_6083EB04(a1 + 2832);
  sub_6083EB04(a1 + 3368);
  sub_6083EB04(a1 + 3904);
  sub_6083EB04(a1 + 4440);
  sub_6083EB04(a1 + 4976);
  sub_6083EB04(a1 + 5512);
  sub_6083EB04(a1 + 6048);
  sub_6083EB04(a1 + 6584);
  sub_6083EB04(a1 + 7120);
  sub_6083EB04(a1 + 7656);
  sub_6084821C(a1 + 40, a2);
  sub_6084821C(a1 + 336, a2);
  sub_6084821C(a1 + 632, a2);
  sub_6084821C(a1 + 928, a2);
  v4 = 19;
  v5 = a1 + 8208;
  v6 = a1 + 13832;
  do
  {
    sub_6084821C(v5, a2);
    result = sub_6083EB04(v6);
    v5 += 296;
    --v4;
  }
  while ( v4 );
  return result;
}
