/* sub_607CCDD4
 * address: 0x607CCDD4   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CCDD4(int a1)
{
  int v2; // r4
  int (__fastcall ***v3)(_DWORD, int *); // r7
  char v4; // r12
  int v5; // r0

  v2 = 0;
  if ( sub_60766AA0(a1) )
  {
    v3 = (int (__fastcall ***)(_DWORD, int *))sub_607CFB50(a1);
    if ( ((unsigned int)&dword_60C7B374 & ~(1618791948 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v3 && (**v3)(v3, &dword_60C7B370) == 1 )
    {
      sub_60799350();
      sub_607CFC14(a1);
    }
    if ( FIELD_U32(a1, 11360) )
    {
      if ( sub_607D6C28(a1) )
      {
        sub_60799350();
        if ( v5 == 1 )
        {
          Player_changeState(a1, (StateBase *)&dword_60CC5614, 0);
          return 1;
        }
      }
    }
  }
  return v2;
}
