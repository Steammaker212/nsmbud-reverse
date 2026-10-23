/* sub_601BB584
 * address: 0x601BB584   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601BB584(int a1)
{
  sub_601CF9C0(dword_60C8AEF0);
  FIELD_U8(a1, 280) = 1;
  sub_601BA0F8(a1, 3, 0.0, 0.0);
  FIELD_U32(a1, 1108) &= 0xFFFFFFFC;
  FIELD_U32(a1, 1096) = sub_601E0070(a1 + 1148, a1 + 1160);
  FIELD_U32(a1, 1040) = 0;
  return 0;
}
