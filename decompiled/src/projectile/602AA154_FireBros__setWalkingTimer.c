/* FireBros__setWalkingTimer
 * address: 0x602AA154   size: 56   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x60267574
// 
// Overridden by: None
int __fastcall FireBros__setWalkingTimer(int a1)
{
  int result; // r0

  result = ((0x6E * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 10;
  FIELD_U32(a1, 0x1990) = result;
  return result;
}
