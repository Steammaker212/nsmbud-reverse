/* sub_607C8004
 * address: 0x607C8004   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C8004(int a1)
{
  sub_607712D4(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
  ((void (__fastcall *)(int))loc_60771910)(a1);
  ((void (__fastcall *)(int))loc_60770F74)(a1);
  if ( !FIELD_U32(a1, 9944) )
    FIELD_U32(a1, 1224) |= 0x404u;
  if ( FIELD_F32(a1, 124) < 0.0 )
    FIELD_U32(a1, 1204) &= ~0x2000u;
  return sub_607AFD98(a1);
}
