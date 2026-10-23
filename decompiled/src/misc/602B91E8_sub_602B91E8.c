/* sub_602B91E8
 * address: 0x602B91E8   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B91E8(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = FIELD_U32(a1, 80);
  result = dword_60C91060;
  if ( v1 == 1 )
    return -dword_60C91060;
  return result;
}
