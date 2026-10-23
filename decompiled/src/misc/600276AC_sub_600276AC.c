/* sub_600276AC
 * address: 0x600276AC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600276AC(int a1)
{
  FIELD_U32(dword_60C99D88, 32) = 0;
  sub_6077A268(dword_60CBFA90);
  FIELD_U8(dword_60C9CF0C, 1393) = 1;
  ++FIELD_U32(dword_60C99DE4, 16);
  FIELD_U32(a1, 6116) = 3600;
  FIELD_U32(a1, 6104) = 0;
  FIELD_U8(a1, 6100) = 0;
  return 6100;
}
