/* sub_6023D250
 * address: 0x6023D250   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6023D250(int a1)
{
  char v1; // r12
  int v2; // r10
  int v3; // r5
  int v4; // r4
  _WORD *v5; // r6
  __int16 v6; // r0
  int v7; // r0
  int (__fastcall ***v8)(_DWORD, int *); // r7

  v2 = 0;
  v3 = a1 + 12748;
  v4 = a1 + 12732;
  v5 = (_WORD *)(a1 + 12720);
  do
  {
    if ( *v5 )
    {
      v6 = *v5 - 1;
      *v5 = v6;
      if ( v6 == 1 )
      {
        v7 = 0;
        if ( (unsigned __int8)v2 < 4u )
          v7 = v2;
        v8 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v7 + 48);
        if ( ((unsigned int)&dword_60C7B374 & ~(1612960540 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( v8 && (**v8)(v8, &dword_60C7B370) == 1 && !sub_607A81AC(v8) )
        {
          *v5 = 2;
        }
        else
        {
          *(_DWORD *)(v4 + 4 * v2) = 0;
          *(_BYTE *)(v3 + v2) = 0;
        }
      }
    }
    ++v2;
    ++v5;
  }
  while ( v2 != 4 );
}
