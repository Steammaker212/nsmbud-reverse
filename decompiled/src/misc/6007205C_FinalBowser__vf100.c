/* FinalBowser__vf100
 * address: 0x6007205C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2B8C
// 
// Overridden by: None
signed int __fastcall FinalBowser__vf100(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r6
  StageActor *v8; // r7
  int ProfileId; // r0
  bool v10; // zf

  owner = FIELD_U32(a2, 0x40);
  v8 = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C81738 & ~(1611079812 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( !owner || (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C81734) != 1 )
    return 0;
  if ( v8 )
  {
    ProfileId = Actor__getProfileId(&FIELD_U32(v8, 0x0));
    v10 = ProfileId == 392;
    if ( ProfileId == 392 )
      v10 = (FIELD_U32(v8, 0x14) & 0x100) == 0;
    if ( v10 && (LOBYTE(v8[11].aCollider.trapezoidOffsetBottomLeft) & 1) != 0 )
    {
      sub_602EE7B8(v8, FIELD_U32(v8, 0x50), FIELD_U8(v8, 0x54));
      FIELD_U8(a3, 0x6E) |= 2u;
    }
  }
  return Enemy__vf100(a1, a2, a3);
}
