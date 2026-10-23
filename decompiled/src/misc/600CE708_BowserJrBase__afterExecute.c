/* BowserJrBase__afterExecute
 * address: 0x600CE708   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60024D88
// 
// Overridden by: None
int __fastcall BowserJrBase__afterExecute(BossBase *a1, int a2)
{
  int v4; // r1
  int v5; // r2
  _DWORD v7[16]; // [sp+0h] [bp-40h] BYREF

  if ( a2 == 2 )
  {
    (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 1008))(a1);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(**(_DWORD **)a1[1]._._._._._.id + 108))(
      *(_DWORD *)a1[1]._._._._._.id,
      30,
      v7);
    v4 = v7[7];
    v5 = v7[11];
    a1[1]._._._._._.childCount = v7[3];
    a1[1]._._._._._.field_2C = v4;
    a1[1]._._._._._.field_30 = v5;
  }
  return BossBase__afterExecute(a1, a2);
}
