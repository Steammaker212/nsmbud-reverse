/* sub_602A3358
 * address: 0x602A3358   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A3358(int a1, int a2)
{
  FIELD_U8(a1, 6296) = 1;
  if ( !FIELD_U8(dword_60C9A1F0, 6554) || FIELD_U8(a1, 6297) )
    return sub_60285440(a1 + 6292, a2);
  else
    return -1;
}
