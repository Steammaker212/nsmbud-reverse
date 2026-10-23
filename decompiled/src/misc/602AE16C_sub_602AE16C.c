/* sub_602AE16C
 * address: 0x602AE16C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602AE16C(unsigned int *a1, int a2)
{
  int (__fastcall ***v3)(_DWORD, int *); // r4
  char v4; // r12
  int v5; // r5

  sub_6000B690(a1, a2);
  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  if ( ((unsigned int)dword_60C90B98 & ~(1613423016 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C90B98) )
  {
    dword_60C90B94 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C90B98);
  }
  if ( v3 )
  {
    v5 = (**v3)(v3, &dword_60C90B94);
    if ( v5 )
      v5 = (int)v3;
  }
  else
  {
    v5 = 0;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 72))(v5);
  return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)v5 + 192))(v5, &stru_60C90950);
}
