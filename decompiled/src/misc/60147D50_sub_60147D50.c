/* sub_60147D50
 * address: 0x60147D50   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60147D50(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int v6; // r0
  char v7; // r12
  StageActor *owner; // r5

  v6 = Enemy__processCollision(a1, a2, a3, 2);
  if ( v6 )
  {
    if ( (v6 | 2) == 3 )
    {
      owner = FIELD_U32(a2, 0x40);
      if ( ((unsigned int)&dword_60C88164 & ~(1611955600 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C88164) )
      {
        dword_60C88160 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C88164);
      }
      if ( owner )
      {
        if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C88160) == 1 )
          JUMPOUT(0x60147BB0);
      }
    }
  }
  else
  {
    Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
  }
}
