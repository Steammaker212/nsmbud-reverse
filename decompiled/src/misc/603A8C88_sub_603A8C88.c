/* sub_603A8C88
 * address: 0x603A8C88   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A8C88(_DWORD *a1)
{
  int v2; // r7
  int *v3; // r8
  _DWORD *v4; // r6
  int *v5; // r0
  int v6; // r5
  _DWORD *v7; // r6
  int *v8; // r0
  int result; // r0
  int *v10; // r6
  int v11; // r7
  _DWORD *i; // r4
  int v13; // r5
  int *v14; // r0

  v3 = a1 + 5899;
  v2 = a1[5899];
  v4 = a1 + 1744;
  Animation_update(**(_DWORD **)(a1[1744] + 28));
  if ( v2 )
  {
    if ( v2 != 1 )
      goto LABEL_8;
    v5 = *(int **)(*v4 + 28);
    if ( *(_DWORD *)(*v4 + 24) > 1u )
      ++v5;
  }
  else
  {
    v5 = *(int **)(*v4 + 20);
  }
  Animation_update(*v5);
LABEL_8:
  v6 = *v3;
  v7 = a1 + 1942;
  Animation_update(**(_DWORD **)(a1[1942] + 28));
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_15;
    v8 = *(int **)(*v7 + 28);
    if ( *(_DWORD *)(*v7 + 24) > 1u )
      ++v8;
  }
  else
  {
    v8 = *(int **)(*v7 + 20);
  }
  Animation_update(*v8);
LABEL_15:
  v10 = a1 + 5892;
  result = a1[5892];
  if ( result >= 1 )
  {
    v11 = 0;
    for ( i = a1 + 2140; ; i += 196 )
    {
      v13 = *v3;
      Animation_update(**(_DWORD **)(*i + 28));
      if ( !v13 )
        break;
      if ( v13 == 1 )
      {
        v14 = *(int **)(*i + 28);
        if ( *(_DWORD *)(*i + 24) > 1u )
          ++v14;
        goto LABEL_23;
      }
LABEL_24:
      result = *v10;
      if ( ++v11 >= *v10 )
        return result;
    }
    v14 = *(int **)(*i + 20);
LABEL_23:
    Animation_update(*v14);
    goto LABEL_24;
  }
  return result;
}
