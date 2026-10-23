/* sub_60071080
 * address: 0x60071080   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60071080(ActiveCollider *a1, ActiveCollider *a2)
{
  char v2; // r12
  StageActor *owner; // r6
  float x; // s0

  owner = FIELD_U32(a1, 0x40);
  if ( ((unsigned int)&dword_60C81738 & ~(1611075744 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( owner )
  {
    if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C81734) == 1 )
    {
      x = FIELD_U32(owner, 0x6C).x;
      if ( (float)(x + 240.0) >= FIELD_F32(dword_60CC6484, 112)
        && (float)(x + -240.0) <= FIELD_F32(dword_60CC6484, 120) )
      {
        Enemy__collisionCallback(a1, a2);
      }
    }
  }
}
