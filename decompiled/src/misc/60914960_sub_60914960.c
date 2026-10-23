/* sub_60914960
 * address: 0x60914960   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60914960(char a1)
{
  int v2; // r0
  int result; // r0
  unsigned int v4; // [sp+4h] [bp-14h] BYREF

  v2 = 20;
  if ( (a1 & 0x91) == 0 )
    v2 = 36;
  if ( (a1 & 0x33) != 0 )
    v2 = v2 & 0x30 | 2;
  v4 = v2;
  if ( (a1 & 4) != 0 )
    sub_60917168(dword_60CCFC8C, &v4);
  if ( (a1 & 8) != 0 )
    v4 = v4 & 0xFFFFFFF8 | 4;
  if ( (a1 & 0x40) != 0 )
    v4 = 265;
  result = v4;
  if ( (a1 & 4) != 0 )
    return v4 | 0x80;
  return result;
}
