/* sub_604DE124
 * address: 0x604DE124   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DE124(int a1)
{
  sub_60473DE4((_DWORD *)(a1 + 40), 0, &dword_60CA4FC4, 0);
  sub_6047E0EC(&dword_60CA4FD4, FIELD_U32(a1, 3588), 0);
  FIELD_U8(a1, 3597) = 1;
  FIELD_U8(a1, 3598) = 1;
  return 1;
}
