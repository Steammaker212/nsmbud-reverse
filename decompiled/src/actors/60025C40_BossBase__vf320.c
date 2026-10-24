/* BossBase__vf320
 * address: 0x60025C40   size: 316   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
Actor **BossBase__vf320()
{
  char v0; // r12
  Actor **v1; // r5
  Actor **result; // r0
  Actor *v3; // r7
  int v4; // r0
  bool v5; // zf

  v1 = *(Actor ***)(ActorMgr__instance + 27172);
  for ( result = *(Actor ***)(ActorMgr__instance + 27180); v1 != result; result = *(Actor ***)(ActorMgr__instance + 27180) )
  {
    v3 = *v1;
    if ( ((unsigned int)&dword_60C7B364 & ~(1610767628 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v3 )
    {
      v4 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v3, 0x0))(v3, &StageActor_RTTI);
      v5 = v4 == 1;
      if ( v4 == 1 )
        v5 = FIELD_U8(v3, 0x13) == 0;
      if ( v5 && (FIELD_U32(v3 + (7) * 80, 0x8) & 0xB0) != 0 )
      {
        if ( Actor__getProfileId(v3) != 853 )
          (*(void (__fastcall **)(Actor *))(FIELD_U32(v3, 0x0) + 104))(v3);
        FIELD_U8(v3, 0x13) = 1;
      }
    }
    ++v1;
  }
  return result;
}
