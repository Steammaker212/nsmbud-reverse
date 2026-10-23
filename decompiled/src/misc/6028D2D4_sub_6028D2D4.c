/* sub_6028D2D4
 * address: 0x6028D2D4   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6028D2D4(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int v6; // r0
  char v7; // r12
  StageActor *v8; // r7
  StageActor *owner; // r1

  v6 = Enemy__processCollision(a1, a2, a3, 0);
  if ( v6 == 1 )
  {
    owner = FIELD_U32(a3, 0x40);
    if ( owner )
      Enemy_killYoshi(a1, owner);
  }
  else if ( !v6 )
  {
    v8 = FIELD_U32(a3, 0x40);
    if ( ((unsigned int)&dword_60C7B408 & ~(1613288208 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
    {
      dword_60C7B404 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B408);
    }
    if ( v8
      && (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v8, 0x0).vtable)(v8, &dword_60C7B404) == 1
      && !(*(int (__fastcall **)(StageActor *))(FIELD_U32(v8, 0x0).vtable + 1156))(v8) )
    {
      Enemy__collisionYoshi(a1, a2, a3);
    }
  }
}
