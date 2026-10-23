/* BossBase__vf15C
 * address: 0x600259B8   size: 252   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A71D8
// 
// Overridden by:
//   - 0x60072664 : FinalBowser
int __fastcall BossBase__vf15C(BossBase *a1)
{
  void (__fastcall *v2)(BossBase *, int); // r5
  int v3; // r0
  int v4; // r6
  int (__fastcall *v5)(BossBase *); // r1

  FIELD_U8(a1, 0x18A8) = 1;
  FIELD_U32(a1, 0x18A4) = (*(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x314))(a1);
  (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x300))(a1);
  v2 = *(void (__fastcall **)(BossBase *, int))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x2DC);
  v3 = (*(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x2FC))(a1);
  v2(a1, v3);
  v4 = FIELD_U32(a1, 0x189C);
  (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x3A0))(a1);
  if ( v4 <= 0 )
  {
    FIELD_U32(a1, 0x189C) = 0;
    (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x3D0))(a1);
    (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x354))(a1);
    (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x370))(a1);
    v5 = *(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x320);
  }
  else
  {
    (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x3CC))(a1);
    (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x350))(a1);
    v5 = *(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x36C);
  }
  return v5(a1);
}
