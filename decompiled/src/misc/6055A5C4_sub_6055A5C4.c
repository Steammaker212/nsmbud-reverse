/* sub_6055A5C4
 * address: 0x6055A5C4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055A5C4(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 3700);
  if ( !result )
  {
    StateMgr__execute((StateMgr *)(a1 + 24));
    result = FIELD_U8(a1, 3701);
    if ( FIELD_U8(a1, 3701) )
      return sub_60473B58((_DWORD *)(a1 + 40), 0xEu, 0);
  }
  return result;
}
