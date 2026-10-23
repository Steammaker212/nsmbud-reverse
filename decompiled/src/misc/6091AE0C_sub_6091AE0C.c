/* sub_6091AE0C
 * address: 0x6091AE0C   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091AE0C(int a1, int a2)
{
  int v2; // r12
  int v3; // r0
  unsigned int v4; // r3
  int v6; // r1
  int v7; // r2
  int result; // r0

  v7 = FIELD_U32(a1, 256);
  result = dword_60CCFC8C;
  if ( v7 != -1 )
  {
    v2 = FIELD_U32(dword_60CCFC8C, 40);
    if ( (v2 & 0x200000) == 0 )
      goto LABEL_7;
    v3 = FIELD_U32(dword_60CCFC8C, 216);
    v4 = v7 - FIELD_U16(dword_60CCFC8C, 220);
    if ( FIELD_U32(dword_60CCFC8C, 212) > v4 )
      v3 += 12 * v4;
    if ( (FIELD_U32(v3, 8) & 2) != 0 )
    {
LABEL_7:
      if ( (v2 & 0x1000000) != 0 )
        v6 = 1;
      else
        v6 = 2;
      return sub_60913708(a2, v6);
    }
    else
    {
      return sub_609137C4(a2, v7);
    }
  }
  return result;
}
