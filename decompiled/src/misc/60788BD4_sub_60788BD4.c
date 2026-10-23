/* sub_60788BD4
 * address: 0x60788BD4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60788BD4(int a1, int a2, int a3, int a4, int a5)
{
  if ( sub_608FBB8C(FIELD_U8(a1, 64)) >= 2 )
    return ((int (__fastcall *)(int, int, int, int, int, int))loc_60788A10)(a1, a2, a3, a4, a5, 34);
  else
    return 0;
}
