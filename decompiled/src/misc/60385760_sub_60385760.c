/* sub_60385760
 * address: 0x60385760   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60385760(int a1)
{
  int v2; // r6
  char v3; // r12
  int result; // r0
  int (__fastcall ***v5)(_DWORD, int *); // r7
  unsigned int v6; // r1

  v2 = sub_60008598(ActorMgr__instance, 392, FIELD_U32(ActorMgr__instance, 27172));
  result = FIELD_U32(ActorMgr__instance, 27180);
  if ( v2 != result )
  {
    while ( 1 )
    {
      v5 = *(int (__fastcall ****)(_DWORD, int *))v2;
      if ( *(_DWORD *)(*(_DWORD *)v2 + 56) == a1 )
      {
        if ( ((unsigned int)&dword_60C7B39C & ~(1614305296 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
        {
          dword_60C7B398 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C7B39C);
        }
        if ( v5 && (**v5)(v5, &dword_60C7B398) == 1 )
          break;
      }
      v2 = sub_60008598(ActorMgr__instance, 392, v2 + 4);
      result = FIELD_U32(ActorMgr__instance, 27180);
      if ( v2 == result )
        return result;
    }
    v6 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31;
    return sub_602EE7B8((int)v5, v6, 0xFFFFFFFF);
  }
  return result;
}
