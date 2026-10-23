/* sub_60826C60
 * address: 0x60826C60   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60826C60(int a1, int a2, _BYTE *a3)
{
  char *v4; // r5
  unsigned int result; // r0

  v4 = (char *)(dword_60CC6D78 + 796);
  sub_603F7840(dword_60CC6D78 + 796, FIELD_U32(a1, 40) + 520 * a2 + 127);
  if ( a3 )
    sub_603F6EA0(v4, a3);
  result = sub_603F6B7C((int)v4);
  if ( result >= 0x63 )
    return 99;
  return result;
}
