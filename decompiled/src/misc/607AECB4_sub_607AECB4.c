/* sub_607AECB4
 * address: 0x607AECB4   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607AECB4(_DWORD *a1)
{
  int v2; // r1
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12

  a1[2485] = 0;
  PlayerBase_dispatchVirtual3((int)(a1 + 2839), 75, 0.0);
  a1[302] |= 0x100000u;
  v2 = a1[307];
  a1[306] |= 4u;
  a1[303] |= 0x40u;
  a1[307] = v2 | 0x24400;
  sub_6078667C(a1 + 172, 6);
  a1[22] = 0;
  a1[23] = 0;
  a1[25] = 0;
  a1[31] = 0;
  a1[24] = -1061158912;
  a1[3169] = 0x10000000;
  a1[2486] = 10;
  sub_607957D4((int)a1, 2);
  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[2852]);
  if ( ((unsigned int)&dword_60C7B410 & ~(1618668944 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
  {
    dword_60C7B40C = (int)&off_60BC00D4;
    _cxa_guard_release(&dword_60C7B410);
  }
  if ( v3 )
  {
    if ( (**v3)(v3, &dword_60C7B40C) == 1 )
    {
      sub_605DCF34((int)v3, (int)a1);
      sub_6079EA38(a1);
    }
  }
}
