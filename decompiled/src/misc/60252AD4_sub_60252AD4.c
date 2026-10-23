/* sub_60252AD4
 * address: 0x60252AD4   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60252AD4(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r5

  owner = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613048568 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( owner && (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378) == 1 )
  {
    if ( Enemy__processCollision(a1, a2, a3, 0) )
    {
      Enemy_killYoshi(a1, owner);
    }
    else
    {
      LOBYTE(a1[1]._._._._.parent) = FIELD_U8(owner, 0x54);
      (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C8DF34);
    }
  }
}
