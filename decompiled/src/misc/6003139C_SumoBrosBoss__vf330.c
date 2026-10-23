/* SumoBrosBoss__vf330
 * address: 0x6003139C   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026814
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf330(_DWORD *a1, int a2)
{
  int result; // r0
  unsigned int v5; // r1
  int v6; // r0

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 728))(a1);
  if ( result == 1 )
  {
    if ( FIELD_U8(a2, 84) <= 3u )
      sub_60025AF4((int)a1, a2, (int)(a1 + 27), 5u);
    v5 = a1[1829];
    if ( v5 )
    {
      v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v5);
      if ( v6 )
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v6 + 192))(v6, &dword_60C7FD98);
    }
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C7F968);
  }
  return result;
}
