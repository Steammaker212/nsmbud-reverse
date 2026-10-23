/* sub_606230E8
 * address: 0x606230E8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606230E8(int a1)
{
  sub_604183EC(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4);
  if ( FIELD_U8(a1, 6324) )
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB39C8);
  return sub_60621580(a1);
}
