/* BossBase__collisionGroundPound
 * address: 0x6002517C   size: 456   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6454
// 
// Overridden by: None
signed int __fastcall BossBase__collisionGroundPound(BossBase *a1, int a2, int a3)
{
  int v5; // r1
  char v6; // r12
  signed int result; // r0
  int (__fastcall ***v8)(_DWORD, int *); // r5
  void (__fastcall *v9)(BossBase *, int); // r6
  int v10; // r0
  int v11; // r7
  int vtable; // r0

  v5 = (*(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x374))(a1);
  result = 0;
  if ( !v5 )
  {
    v8 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1610764732 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v8 && (**v8)(v8, &dword_60C7B378) == 1 )
      (*(void (__fastcall **)(BossBase *, int (__fastcall ***)(_DWORD, int *)))(FIELD_U32(a1, 0x0) + 372))(a1, v8);
    v9 = *(void (__fastcall **)(BossBase *, int))(FIELD_U32(a1, 0x0) + 0x2DC);
    v10 = (*(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x2E8))(a1);
    v9(a1, v10);
    FIELD_U32(a1, 0x18A4) = (*(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x314))(a1);
    (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x300))(a1);
    v11 = FIELD_U32(a1, 0x189C);
    (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x394))(a1);
    vtable = FIELD_U32(a1, 0x0);
    if ( v11 <= 0 )
    {
      (*(void (__fastcall **)(BossBase *))(vtable + 0x390))(a1);
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x3A8))(a1);
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x3D4))(a1);
      FIELD_U32(a1, 0x189C) = 0;
      (*(void (__fastcall **)(BossBase *, int (__fastcall ***)(_DWORD, int *)))(FIELD_U32(a1, 0x0) + 0x33C))(a1, v8);
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x370))(a1);
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x320))(a1);
    }
    else
    {
      (*(void (__fastcall **)(BossBase *))(vtable + 0x3A4))(a1);
      (*(void (__fastcall **)(BossBase *, int (__fastcall ***)(_DWORD, int *)))(FIELD_U32(a1, 0x0) + 0x338))(a1, v8);
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x36C))(a1);
    }
    return 1;
  }
  return result;
}
