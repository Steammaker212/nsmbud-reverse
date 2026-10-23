/* sub_60595B90
 * address: 0x60595B90   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60595B90(int a1)
{
  int v1; // r5
  _DWORD *v2; // r6
  unsigned int v3; // r1
  int (__fastcall ***v4)(_DWORD, int *); // r4
  char v5; // r12

  v1 = 12;
  v2 = (_DWORD *)(a1 + 6148);
  do
  {
    v3 = v2[1];
    if ( v3 )
    {
      v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
      if ( ((unsigned int)&dword_60C7B410 & ~(1616469016 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
      {
        dword_60C7B40C = (int)&off_60BC00D4;
        _cxa_guard_release(&dword_60C7B410);
      }
      if ( v4 && (**v4)(v4, &dword_60C7B40C) == 1 && *v2 != 1 && sub_605E2144(v4, a1) == 1 )
        *v2 = 1;
    }
    --v1;
    v2 += 3;
  }
  while ( v1 );
}
