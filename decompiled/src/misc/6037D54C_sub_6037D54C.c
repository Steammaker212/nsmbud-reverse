/* sub_6037D54C
 * address: 0x6037D54C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037D54C(int a1)
{
  sub_602971C4(a1, 7);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6716);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 6720);
  FIELD_U32(a1, 116) = FIELD_U32(a1, 6724);
  FIELD_U8(a1, 6673) = 0;
  FIELD_U8(a1, 6848) = 0;
  return 6848;
}
