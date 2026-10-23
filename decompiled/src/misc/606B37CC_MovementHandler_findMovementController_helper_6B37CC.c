/* MovementHandler_findMovementController_helper_6B37CC
 * address: 0x606B37CC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MovementHandler_findMovementController_helper_6B37CC(_DWORD *a1, int a2)
{
  int v2; // r12
  int v3; // r4
  int v4; // r2
  int v5; // r3
  int result; // r0
  int v7; // lr
  int i; // r4
  int v9; // r5

  v2 = a1[7];
  if ( !v2 )
    return -1;
  v3 = a1[4];
  v4 = a1[6];
  v5 = a1[5];
  result = -1;
  v7 = v3 + 4 * v4;
  for ( i = 0; i != v2; ++i )
  {
    v9 = v5;
    if ( v4 + i < v5 )
      v9 = 0;
    if ( *(unsigned __int8 *)(*(_DWORD *)(v7 - 4 * v9 + 4 * i) + 20) == a2 )
      result = i;
  }
  return result;
}
