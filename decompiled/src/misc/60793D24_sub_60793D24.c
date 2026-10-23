/* sub_60793D24
 * address: 0x60793D24   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60793D24(int a1, float a2)
{
  int v3; // r4
  int result; // r0

  v3 = **(_DWORD **)(FIELD_U32(a1, 24) + 12);
  sub_6041838C((ModelAnimation *)(v3 + 4));
  FIELD_F32(v3, 20) = a2;
  result = FIELD_U32(v3, 28) | 2;
  FIELD_U32(v3, 28) = result;
  return result;
}
