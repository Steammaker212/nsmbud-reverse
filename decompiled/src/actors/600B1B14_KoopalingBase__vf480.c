/* KoopalingBase__vf480
 * address: 0x600B1B14   size: 80   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
double __fastcall KoopalingBase__vf480(_DWORD **a1)
{
  int v1; // r4
  void (__fastcall *v2)(int, int, _DWORD *); // r5
  int v3; // r0
  _DWORD v5[11]; // [sp+0h] [bp-40h] BYREF

  v1 = *a1[1774];
  v2 = *(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v1 + 108);
  v3 = ((int (__fastcall *)(_DWORD **))(*a1)[280])(a1);
  v2(v1, v3, v5);
  return COERCE_DOUBLE(__PAIR64__(v5[7], v5[3]));
}
