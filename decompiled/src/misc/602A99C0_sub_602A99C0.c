/* sub_602A99C0
 * address: 0x602A99C0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602A99C0(_DWORD *a1)
{
  _DWORD *v1; // r1
  int v2; // r2
  int v3; // r2
  int v4; // r1

  v1 = (_DWORD *)a1[1];
  v2 = *(unsigned __int8 *)(v1[16] + 533);
  if ( v2 == 2 )
  {
    v4 = 2;
    return *(float *)(*a1 + 4 * v4 + 240);
  }
  if ( v2 == 1 )
  {
    v3 = v1[34];
    v4 = v1[35] == 11;
    if ( v3 == 15 )
      v4 = 15;
    return *(float *)(*a1 + 4 * v4 + 240);
  }
  return 0.0;
}
