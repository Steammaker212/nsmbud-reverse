/* sub_60390C4C
 * address: 0x60390C4C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60390C4C(_BYTE *a1, int a2)
{
  bool v3; // zf

  v3 = FIELD_U8(dword_60CC6D8C, 17) == 0;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    a2 = (unsigned __int8)a1[539];
    v3 = a2 == 0;
  }
  if ( !v3 )
    EventMgr_set(EventMgr__instance, (unsigned __int8)(a2 - 1), 0, 1, 0, 0, 0, 0);
  return Enemy__vf204(a1);
}
