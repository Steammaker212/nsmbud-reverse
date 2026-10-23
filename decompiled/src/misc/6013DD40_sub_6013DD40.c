/* sub_6013DD40
 * address: 0x6013DD40   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013DD40(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r7
  int v8; // r6
  int result; // r0

  owner = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C7B37C & ~(1611914596 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( owner )
  {
    v8 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378);
    if ( v8 )
      v8 = (int)owner;
  }
  else
  {
    v8 = 0;
  }
  result = Enemy__processCollision(a1, a2, a3, 0);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, ActiveCollider *, ActiveCollider *))(*(_DWORD *)v8 + 1164))(v8, a2, a3);
  return result;
}
