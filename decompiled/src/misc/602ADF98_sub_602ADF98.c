/* sub_602ADF98
 * address: 0x602ADF98   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602ADF98(int a1)
{
  int (__fastcall ***v1)(_DWORD, int *); // r4
  char v2; // r12
  int v3; // r0

  v1 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( ((unsigned int)dword_60C90B98 & ~(1613422544 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C90B98) )
  {
    dword_60C90B94 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C90B98);
  }
  if ( v1 )
  {
    v3 = (**v1)(v1, &dword_60C90B94);
    if ( v3 )
      v3 = (int)v1;
  }
  else
  {
    v3 = 0;
  }
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60C90B30);
}
