/* KoopalingBase__vf52C
 * address: 0x600B3978   size: 244   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf52C(int result)
{
  int v1; // r1
  int *v2; // r5
  int v3; // r4
  __int16 *v4; // r6
  int v5; // r7
  _DWORD *v6; // r2
  unsigned int v7; // r0
  _DWORD *v8; // r2
  unsigned int v9; // r1

  v2 = (int *)(result + 8116);
  v1 = FIELD_U32(result, 8116);
  if ( v1 )
  {
    v3 = result + 6332;
    v4 = (__int16 *)(result + 6640);
    v5 = result + 7096;
    if ( *(char **)(v1 + 24) != "SE_VOC_NO_SOUND" )
    {
      v6 = *(_DWORD **)(*(_DWORD *)v5 + 12);
      v7 = *(_DWORD *)(*(_DWORD *)v5 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v7 )
        v6 += v7;
      if ( sub_60418548(*v6 + 4) )
        sub_608134CC(v3, *(_DWORD *)(*v2 + 24), *v4, 0);
    }
    result = *v2;
    if ( *(char **)(*v2 + 32) != "SE_VOC_NO_SOUND" )
    {
      v8 = *(_DWORD **)(*(_DWORD *)v5 + 12);
      v9 = *(_DWORD *)(*(_DWORD *)v5 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v9 )
        v8 += v9;
      result = sub_60418548(*v8 + 4);
      if ( result == 1 )
        return sub_608134CC(v3, *(_DWORD *)(*v2 + 32), *v4, 0);
    }
  }
  return result;
}
