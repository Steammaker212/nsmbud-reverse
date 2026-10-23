/* sub_601D54BC
 * address: 0x601D54BC   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601D54BC(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  int v4; // r1
  _DWORD *v5; // r5

  v3 = a1[255];
  v2 = a1 + 255;
  v5 = v2 + 3;
  v4 = v2[3];
  if ( (v3 != v4 || a1[256] != a1[259] || a1[257] != a1[260])
    && (a1[261] != v4 || a1[262] != a1[259] || a1[263] != a1[260]) )
  {
    sub_601E0040(v2);
    sub_601E0040(v5);
    sub_601E0040(a1 + 261);
    sub_601C41AC();
  }
}
