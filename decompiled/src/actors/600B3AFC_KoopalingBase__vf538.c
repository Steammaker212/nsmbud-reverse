/* KoopalingBase__vf538
 * address: 0x600B3AFC   size: 140   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf538(int a1)
{
  int result; // r0
  int v3; // r5
  _DWORD *v4; // r1
  _DWORD *v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r1

  v3 = a1 + 8116;
  result = FIELD_U32(a1, 8116);
  if ( result && *(char **)(result + 56) != "SE_VOC_NO_SOUND" )
  {
    v4 = *(_DWORD **)(a1 + 7096);
    v5 = (_DWORD *)v4[3];
    v6 = v4[2];
    v7 = v4[17];
    if ( v6 > v7 )
      v5 += v7;
    result = sub_60418548(*v5 + 4);
    if ( result == 1 )
      return sub_608134CC(a1 + 6332, *(_DWORD *)(*(_DWORD *)v3 + 56), FIELD_S16(a1, 6640), 0);
  }
  return result;
}
