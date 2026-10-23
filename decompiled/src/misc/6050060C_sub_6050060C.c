/* sub_6050060C
 * address: 0x6050060C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050060C(int a1)
{
  FIELD_U16(a1, 7748) = 0;
  FIELD_U8(a1, 7750) = 0;
  sub_60502548(a1 + 3588);
  FIELD_U16(a1, 4640) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3628));
  FIELD_U32(a1, 7744) = -1;
  return 7744;
}
