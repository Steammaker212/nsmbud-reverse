/* sub_603FC6B4
 * address: 0x603FC6B4   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603FC6B4(int a1, int a2, int a3)
{
  unsigned int v4; // r0
  int v5; // r1
  unsigned int result; // r0

  v4 = FIELD_U32(a1, 20) + (a2 << 12);
  v5 = 4091904;
  if ( v4 < 0x3E7000 )
    v5 = v4;
  FIELD_U32(a1, 20) = v5;
  result = v5 + 4095;
  if ( FIELD_U8(a1, 28) )
  {
    if ( result < 0x65000 )
      return result;
    sub_60816F60(dword_60CC6B68, 16);
    result = 0;
  }
  else
  {
    result >>= 12;
    if ( result > 0x64 )
      return result;
    sub_60816D48(dword_60CC6B68, 16, a3);
    result = 1;
  }
  FIELD_U8(a1, 28) = result;
  return result;
}
