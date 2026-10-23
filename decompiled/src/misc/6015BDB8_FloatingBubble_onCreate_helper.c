/* FloatingBubble_onCreate_helper
 * address: 0x6015BDB8   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall FloatingBubble_onCreate_helper(int a1, int a2, int a3)
{
  int result; // r0
  _DWORD v6[9]; // [sp+4h] [bp-24h] BYREF

  v6[0] = a2 + 108;
  v6[1] = a2 + 584;
  v6[2] = a2 + 86;
  v6[3] = a2 + 87;
  v6[4] = a2 + 84;
  result = sub_6015BE08(a1, v6, a3);
  FIELD_U32(a1, 144) = a2;
  return result;
}
