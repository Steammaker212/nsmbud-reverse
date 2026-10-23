/* sub_6067E70C
 * address: 0x6067E70C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_6067E70C(int a1)
{
  LightMask__init((RevealMaskRelated *)(a1 + 4), 0, 2);
  sub_606067AC((_DWORD *)(a1 + 364));
  FIELD_U32(a1, 372) = 0;
  FIELD_U32(a1, 448) = &unk_60CB7FCC;
  return &unk_60CB7FCC;
}
