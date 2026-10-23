/* sub_6083AA20
 * address: 0x6083AA20   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083AA20(int a1)
{
  int v1; // lr
  int *v2; // r12
  int v3; // r3
  int v4; // r1

  v1 = 56;
  v2 = &dword_60C2B438;
  while ( 1 )
  {
    v3 = v1;
    if ( !v1 )
      break;
    v1 /= 2;
    if ( v2[2 * (v3 / 2)] < a1 )
    {
      v2 += 2 * (v3 / 2) + 2;
      v1 = v3 - 1 - v1;
    }
  }
  v4 = 0;
  if ( v2 != (int *)off_60C2B5F8 && *v2 <= a1 )
    return v2[1];
  return v4;
}
