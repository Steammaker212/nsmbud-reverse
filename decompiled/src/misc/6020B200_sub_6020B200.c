/* sub_6020B200
 * address: 0x6020B200   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020B200(int a1)
{
  FIELD_U32(a1, 316) = sub_601E0240(*(_DWORD **)(a1 + 372), *(_DWORD **)(a1 + 376));
  FIELD_U32(a1, 524) = sub_608332B0(a1 + 80, FIELD_U32(a1, 376) + 72);
  FIELD_U32(a1, 200) = 0;
  FIELD_U32(a1, 536) = 0;
  return 0;
}
