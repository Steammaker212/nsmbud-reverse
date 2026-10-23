/* sub_602F3D20
 * address: 0x602F3D20   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602F3D20(unsigned __int8 *a1)
{
  unsigned int v1; // r7
  unsigned int *v2; // r4
  int v3; // r5
  char v4; // r12

  v1 = *a1;
  if ( v1 >= 0xC )
    v1 = 12;
  if ( v1 )
  {
    v2 = (unsigned int *)(a1 + 4);
    do
    {
      if ( *v2 )
      {
        v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v2);
        if ( ((unsigned int)&dword_60C7B39C & ~(1613708732 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
        {
          dword_60C7B398 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C7B39C);
        }
        if ( v3 )
        {
          if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B398) == 1 )
            StateMgr__changeState((StateMgr *)(v3 + 6084), (StateBase *)&dword_60C926E4);
        }
      }
      ++v2;
      --v1;
    }
    while ( v1 );
  }
}
