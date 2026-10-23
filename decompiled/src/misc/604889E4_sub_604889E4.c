/* sub_604889E4
 * address: 0x604889E4   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604889E4(int a1)
{
  int v2; // r6
  int v3; // r5
  int v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r0

  sub_6054555C(a1 + 14248, 1);
  v2 = 0;
  v3 = a1 + 5848;
  v4 = dword_60C9FDDC;
  if ( (unsigned int)dword_60C9FDDC >= 7 )
    v4 = 0;
  v5 = a1 + 3768;
  sub_60502B04(v5, v3 + 4 * v4, 1);
  v6 = dword_60C9FDE0;
  if ( (unsigned int)dword_60C9FDE0 >= 7 )
    v6 = 0;
  sub_60502B04(v5, v3 + 4 * v6, 1);
  v7 = dword_60C9FDE4;
  if ( (unsigned int)dword_60C9FDE4 >= 7 )
    v7 = 0;
  sub_60502B04(v5, v3 + 4 * v7, 1);
  if ( (unsigned int)dword_60C9FDE8 < 7 )
    v2 = dword_60C9FDE8;
  return sub_60502B04(v5, v3 + 4 * v2, 1);
}
