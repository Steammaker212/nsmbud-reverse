/* sub_606333C0
 * address: 0x606333C0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606333C0(int a1)
{
  unsigned int v2; // r1
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12
  int v5; // r6

  v2 = FIELD_U32(a1, 6100);
  if ( !v2 )
  {
LABEL_9:
    StateMgr__execute((StateMgr *)(a1 + 6084));
    return 1;
  }
  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
  if ( v3 )
  {
    if ( ((unsigned int)&dword_60CB10A0 & ~(1617114124 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CB10A0) )
    {
      dword_60CB109C = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60CB10A0);
    }
    v5 = (int)(v3 + 162);
    if ( !(**v3)(v3, &dword_60CB109C) )
      v5 = 648;
    FIELD_U32(a1, 6108) = *(_DWORD *)v5;
    goto LABEL_9;
  }
  return 0;
}
