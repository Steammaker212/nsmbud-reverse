/* sub_6076FBBC
 * address: 0x6076FBBC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076FBBC(int a1)
{
  if ( sub_60793CA8(*(_DWORD *)(FIELD_U32(a1, 648) + 4)) == 1 )
    return Player_changeState(a1, &stru_60CBF8AC, 1);
  else
    return sub_60773F4C(a1);
}
