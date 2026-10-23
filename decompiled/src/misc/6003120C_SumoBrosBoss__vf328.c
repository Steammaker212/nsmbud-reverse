/* SumoBrosBoss__vf328
 * address: 0x6003120C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600267F8
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf328(_DWORD *a1, int a2)
{
  unsigned int v3; // r1
  int v4; // r0

  if ( FIELD_U8(a2, 84) <= 3u )
    sub_60025AF4((int)a1, a2, (int)(a1 + 27), 5u);
  v3 = a1[1829];
  if ( v3 )
  {
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    if ( v4 )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v4 + 192))(v4, &dword_60C7FD98);
  }
  return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C7F948);
}
