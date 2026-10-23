/* HammerBros__setThrowAnimation
 * address: 0x602CC650   size: 76   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x60265164
// 
// Overridden by: None
int __fastcall HammerBros__setThrowAnimation(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int result; // r0

  sub_60264900(a1, "throw", 0);
  v2 = *(_DWORD **)(a1 + 6300);
  v3 = v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  result = *(_DWORD *)v3;
  *(_DWORD *)(*(_DWORD *)v3 + 24) = 1065353216;
  return result;
}
