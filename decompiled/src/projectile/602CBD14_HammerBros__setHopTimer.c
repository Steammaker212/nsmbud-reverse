/* HammerBros__setHopTimer
 * address: 0x602CBD14   size: 60   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x60267598
// 
// Overridden by: None
int __fastcall HammerBros__setHopTimer(int a1)
{
  int result; // r0

  result = dword_60AF2624[sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 30];
  FIELD_U32(a1, 6548) = result;
  return result;
}
