/* sub_60652F0C
 * address: 0x60652F0C   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60652F0C(int a1, int a2)
{
  int v4; // r6
  int (__fastcall ****v5)(_DWORD, int *); // r7
  char v6; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r6
  int v8; // r0
  bool v9; // zf

  v4 = 1;
  if ( (FIELD_U8(a1, 20) & 1) != 0 )
  {
    v5 = (int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                 ActorMgr__instance,
                                                 a2,
                                                 FIELD_U32(ActorMgr__instance, 27172));
    if ( v5 != *(int (__fastcall *****)(_DWORD, int *))(ActorMgr__instance + 27180) )
    {
      do
      {
        v7 = *v5;
        if ( ((unsigned int)&dword_60C7B364 & ~(1617244084 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v7 )
        {
          v8 = (**v7)(v7, &StageActor_RTTI);
          if ( v8 )
            v8 = (int)v7;
          v9 = v8 == a1;
          if ( v8 != a1 )
            v9 = v8 == 0;
          if ( !v9 )
            return 0;
        }
        v5 = (int (__fastcall ****)(_DWORD, int *))sub_60008598(ActorMgr__instance, a2, (int)(v5 + 1));
      }
      while ( v5 != *(int (__fastcall *****)(_DWORD, int *))(ActorMgr__instance + 27180) );
      return 1;
    }
  }
  return v4;
}
