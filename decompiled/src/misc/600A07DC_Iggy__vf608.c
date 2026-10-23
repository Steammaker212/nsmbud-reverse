/* Iggy__vf608
 * address: 0x600A07DC   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B5F28
// 
// Overridden by: None
int __fastcall Iggy__vf608(int a1)
{
  int result; // r0
  _DWORD *v2; // t1
  int *v3; // r2
  unsigned int v4; // r1
  int v5; // r1
  int v6; // r3
  unsigned int v7; // r1

  v2 = *(_DWORD **)(a1 + 7096);
  result = a1 + 7096;
  v3 = (int *)v2[3];
  v4 = v2[17];
  if ( v2[2] > v4 )
    v3 += v4;
  v5 = *v3;
  FIELD_U32(v5, 20) = 0;
  FIELD_U32(v5, 28) |= 2u;
  v6 = *(_DWORD *)(*(_DWORD *)result + 12);
  v7 = *(_DWORD *)(*(_DWORD *)result + 68);
  if ( *(_DWORD *)(*(_DWORD *)result + 8) > v7 )
    v6 += 4 * v7;
  *(_DWORD *)(*(_DWORD *)v6 + 24) = 0;
  *(_DWORD *)(result - 6940) = 0;
  *(_DWORD *)(result - 6932) = 0;
  return result;
}
