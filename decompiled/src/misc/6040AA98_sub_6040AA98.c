/* sub_6040AA98
 * address: 0x6040AA98   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6040AA98()
{
  char v0; // r12
  int *v1; // r8
  int *v2; // r9
  int v3; // r5
  int v4; // r7
  int ProfileId; // r0
  bool v6; // zf

  v1 = *(int **)(ActorMgr__instance + 27172);
  v2 = *(int **)(ActorMgr__instance + 27180);
  if ( v1 == v2 )
    return 1;
  v3 = 0;
  while ( 1 )
  {
    v4 = *v1;
    if ( ((unsigned int)&dword_60C7B364 & ~(1614850956 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v4 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) == 1 )
      {
        ProfileId = Actor__getProfileId((Actor *)v4);
        if ( FIELD_U8(v4, 533) == 3 && ProfileId != 441 )
        {
          if ( !FIELD_U8(v4, 536) )
            break;
          v6 = ProfileId == 473;
          if ( ProfileId != 473 )
            v6 = ProfileId == 472;
          if ( v6 )
          {
            if ( ((unsigned int)dword_60C94408 & ~(1614851108 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C94408) )
            {
              dword_60C94404 = (int)&off_60BC04AC;
              _cxa_guard_release(dword_60C94408);
            }
            if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C94404) == 1 && sub_6040B414(v4) )
              break;
          }
        }
      }
    }
    if ( v2 == ++v1 )
      return 1;
  }
  return v3;
}
