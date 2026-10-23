/* sub_602FCF24
 * address: 0x602FCF24   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FCF24(int a1, int a2)
{
  int result; // r0

  result = sub_602FEC74(a1, a2);
  *(_DWORD *)result = off_60BE827C;
  FIELD_U32(result, 13980) = 0;
  FIELD_U8(result, 6298) = 5;
  return result;
}
