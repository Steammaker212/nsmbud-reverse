/* sub_6055A8F0
 * address: 0x6055A8F0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055A8F0(int a1)
{
  int result; // r0

  result = sub_60473DE4((_DWORD *)(a1 + 40), 0, &dword_60CADA64, 1);
  FIELD_U8(a1, 4041) = 1;
  FIELD_U8(a1, 4042) = 0;
  FIELD_U8(a1, 4038) = 0;
  return result;
}
