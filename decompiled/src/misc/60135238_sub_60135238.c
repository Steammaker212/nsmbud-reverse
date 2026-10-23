/* sub_60135238
 * address: 0x60135238   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60135238(int a1)
{
  if ( *(_DWORD *)(FIELD_U32(a1, 6124) + 12) == 2 )
    StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C876D8);
  if ( *(_DWORD *)(FIELD_U32(a1, 6128) + 24) == 2 )
    StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C876D8);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
}
