/* CarryableEnemy__vf280
 * address: 0x60272760   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall CarryableEnemy__vf280(Enemy *a1, ActiveCollider *a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r6
  int v8; // r7
  int result; // r0

  v7 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
  if ( ((unsigned int)&dword_60C7B374 & ~(1613178756 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  v8 = (int)(v7 + 303);
  if ( !(**v7)(v7, &dword_60C7B370) )
    v8 = 1212;
  if ( (*(_BYTE *)v8 & 0x40) != 0 && Enemy__processCollision(a1, a2, (ActiveCollider *)a3, 0) == 3 )
    return (*(int (__fastcall **)(Enemy *, _DWORD))(FIELD_U32(a1, 0x0)._._._.vtable + 632))(a1, v7);
  result = sub_60271EF4((int)a1, FIELD_U32(a3, 64));
  if ( !result )
    return (*(int (__fastcall **)(Enemy *, ActiveCollider *, int))(FIELD_U32(a1, 0x0)._._._.vtable + 648))(a1, a2, a3);
  return result;
}
