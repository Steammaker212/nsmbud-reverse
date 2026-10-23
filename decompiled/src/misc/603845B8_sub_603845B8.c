/* sub_603845B8
 * address: 0x603845B8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603845B8(int a1, int (__fastcall ***a2)(_DWORD, int *))
{
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12
  int v5; // r0

  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( ((unsigned int)&dword_60C96AA0 & ~(1614300660 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C96AA0) )
  {
    dword_60C96A9C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C96AA0);
  }
  if ( v3 )
  {
    v5 = (**v3)(v3, &dword_60C96A9C);
    if ( v5 )
      v5 = (int)v3;
  }
  else
  {
    v5 = 0;
  }
  if ( FIELD_U8(v5, 6389) )
    return sub_603841C8((_DWORD *)v5, a2);
  else
    return 0;
}
