/* BowserJrBase__beforeExecute
 * address: 0x600CE4E4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60024CEC
// 
// Overridden by: None
int __fastcall BowserJrBase__beforeExecute(int a1)
{
  signed int v2; // r1
  int result; // r0
  int v4; // [sp+4h] [bp-1Ch] BYREF
  int v5; // [sp+8h] [bp-18h] BYREF
  int speed; // [sp+Ch] [bp-14h] BYREF

  v2 = BossBase__beforeExecute((BossBase *)a1);
  result = 0;
  if ( v2 == 1 )
  {
    if ( FIELD_S32(a1, 6300) >= 1 )
    {
      speed = 0x2000000;
      moveValueTo((int *)(a1 + 7116), (int *)(a1 + 7128), &speed);
      v5 = 50331648;
      moveValueTo((int *)(a1 + 7112), (int *)(a1 + 7124), &v5);
      v4 = 50331648;
      moveValueTo((int *)(a1 + 7108), (int *)(a1 + 7120), &v4);
    }
    FIELD_U8(a1, 7266) = 1;
    return 1;
  }
  return result;
}
