/* KoopalingBase__vf470
 * address: 0x600A13AC   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
bool __fastcall KoopalingBase__vf470(int a1)
{
  int speed; // [sp+4h] [bp-Ch] BYREF

  speed = 50331648;
  return moveValueTo((int *)(a1 + 7168), (int *)(a1 + 7172), &speed);
}
