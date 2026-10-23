/* SumoBrosBoss__vf350
 * address: 0x600315E0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026880
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf350(unsigned int *a1)
{
  unsigned int *v2; // r5
  int v3; // r0

  v2 = a1 + 1829;
  (*(void (__fastcall **)(unsigned int *))(*a1 + 776))(a1);
  if ( *v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v2);
    if ( v3 )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60C7FD98);
  }
  return (*(int (__fastcall **)(unsigned int *, int *))(*a1 + 192))(a1, &dword_60C7F8C8);
}
