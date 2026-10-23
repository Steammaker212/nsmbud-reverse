/* sub_604E5F54
 * address: 0x604E5F54   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E5F54(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 4536));
  ++FIELD_U32(a1, 4552);
  sub_604E5FE0(a1);
  SE_SYS_SCORE_COUNT_ref(a1);
  if ( FIELD_U8(a1, 20) )
  {
    ((void (__fastcall *)(int))loc_604E8C6C)(a1);
    sub_604E9478(a1);
  }
  sub_60473B58(*(_DWORD **)(a1 + 4), FIELD_U32(a1, 62852), 0);
  if ( FIELD_U32(a1, 4552) == 1 )
    sub_604E8B68(a1);
  FIELD_U32(a1, 4556) = 0;
  return 4556;
}
