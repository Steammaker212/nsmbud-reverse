/* sub_6033BC60
 * address: 0x6033BC60   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6033BC60(ActiveCollider *a1, ActiveCollider *a2)
{
  char v2; // r12
  StageActor *owner; // r6

  owner = FIELD_U32(a1, 0x40);
  if ( ((unsigned int)&dword_60C830E0 & ~(1614003328 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C830E0) )
  {
    dword_60C830DC = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C830E0);
  }
  if ( owner && (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C830DC) == 1 )
    (*(void (__fastcall **)(StageActor *, ActiveCollider *))(FIELD_U32(owner, 0x0).vtable + 668))(owner, a2);
  return Enemy__collisionCallback(a1, a2);
}
