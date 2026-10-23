/* CarryableEnemy__vf284
 * address: 0x6027286C   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
void __fastcall CarryableEnemy__vf284(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r7
  int v8; // r0

  owner = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C7B374 & ~(1613179024 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( owner
    && (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C7B370) == 1
    && owner[17].aCollider.field_110 != FIELD_U32(a1, 0x0)._._._.id )
  {
    v8 = Enemy__processCollision(a1, a2, a3, 0);
    switch ( v8 )
    {
      case 3:
        (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0)._._._.vtable + 632))(a1, FIELD_U32(a3, 0x40));
        break;
      case 2:
        (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0)._._._.vtable + 628))(a1, FIELD_U32(a3, 0x40));
        break;
      case 1:
        (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0)._._._.vtable + 624))(a1, FIELD_U32(a3, 0x40));
        break;
    }
  }
}
