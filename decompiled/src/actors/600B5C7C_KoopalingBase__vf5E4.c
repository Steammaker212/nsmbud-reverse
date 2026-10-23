/* KoopalingBase__vf5E4
 * address: 0x600B5C7C   size: 88   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x600A0598 : Iggy
int __fastcall KoopalingBase__vf5E4(int a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // t1
  int *v3; // r2
  unsigned int v4; // r1
  int v5; // r1
  _DWORD *v6; // r0
  int *v7; // r1
  unsigned int v8; // r3
  unsigned int v9; // r0
  int result; // r0

  v2 = *(_DWORD **)(a1 + 7096);
  v1 = (_DWORD *)(a1 + 7096);
  v3 = (int *)v2[3];
  v4 = v2[17];
  if ( v2[2] > v4 )
    v3 += v4;
  v5 = *v3;
  FIELD_U32(v5, 20) = 0;
  FIELD_U32(v5, 28) |= 2u;
  v6 = (_DWORD *)*v1;
  v7 = (int *)v6[3];
  v8 = v6[2];
  v9 = v6[17];
  if ( v8 > v9 )
    v7 += v9;
  result = *v7;
  *(_DWORD *)(*v7 + 24) = 0;
  return result;
}
