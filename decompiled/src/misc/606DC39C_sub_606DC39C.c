/* sub_606DC39C
 * address: 0x606DC39C   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_606DC39C()
{
  char v0; // r12
  int *v1; // r8
  int v2; // r5
  int v3; // r7
  int ProfileId; // r0
  bool v5; // zf

  v1 = *(int **)(ActorMgr__instance + 27172);
  if ( v1 == *(int **)(ActorMgr__instance + 27180) )
    return 1;
  v2 = 0;
  while ( 1 )
  {
    v3 = *v1;
    if ( ((unsigned int)&dword_60C7B364 & ~(1617806492 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v3 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) == 1 )
      {
        ProfileId = Actor__getProfileId((Actor *)v3);
        if ( FIELD_U8(v3, 533) == 3 && ProfileId != 441 )
        {
          if ( !FIELD_U8(v3, 536) )
            break;
          v5 = ProfileId == 473;
          if ( ProfileId != 473 )
            v5 = ProfileId == 472;
          if ( v5 )
          {
            if ( ((unsigned int)dword_60C94408 & ~(1617806644 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C94408) )
            {
              dword_60C94404 = (int)&off_60BC04AC;
              _cxa_guard_release(dword_60C94408);
            }
            if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C94404) == 1 && sub_6040B414(v3) )
              break;
          }
        }
      }
    }
    if ( ++v1 == *(int **)(ActorMgr__instance + 27180) )
      return 1;
  }
  return v2;
}
