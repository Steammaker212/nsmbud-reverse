/* sub_600AE93C
 * address: 0x600AE93C   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600AE93C(int a1, int a2)
{
  int result; // r0
  unsigned int v5; // r1
  int v6; // r5
  char v7; // r12
  char v8; // r12

  result = 7088;
  v5 = FIELD_U32(a1, 7088);
  if ( v5 )
  {
    v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v5);
    if ( ((unsigned int)&dword_60C7B364 & ~(1611327880 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &StageActor_RTTI) == 1 )
    {
      if ( FIELD_U8(v6, 533) == 3 )
      {
        sub_600AEAC4(a1);
        if ( ((unsigned int)dword_60C7B430 & ~(1611328016 << v8) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
        {
          Enemy_RTTI = (int)&off_60BC00C8;
          _cxa_guard_release(dword_60C7B430);
        }
        if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &Enemy_RTTI) == 1 )
          SE_EMY_DOWN_ref_2A58B4(v6, a2);
      }
      else
      {
        FIELD_U8(v6, 19) = 1;
      }
    }
    FIELD_U32(a1, 7088) = 0;
    return 0;
  }
  return result;
}
