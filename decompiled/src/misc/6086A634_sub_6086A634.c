/* sub_6086A634
 * address: 0x6086A634   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086A634(int a1, int a2)
{
  int result; // r0
  int v5; // r2

  FIELD_U32(a1, 68) = a2;
  FIELD_U32(a1, 80) = FIELD_U32(a2, 48);
  FIELD_U32(a1, 76) = FIELD_U16(a2, 98);
  FIELD_U16(a1, 60) &= ~1u;
  sub_6086A3F0(a1, FIELD_U32(a2, 92), (FIELD_U16(a2, 88) >> 2) & 1);
  FIELD_U16(a1, 64) = FIELD_U16(a2, 96);
  result = FIELD_U16(a2, 98);
  FIELD_U32(a1, 40) = result;
  FIELD_U32(a1, 44) = 2139095040;
  if ( result && FIELD_U32(a1, 36) >= result )
  {
    result = 0;
    v5 = 0;
    do
    {
      ++v5;
      *(_DWORD *)(FIELD_U32(a1, 32) + result) = 2139095040;
      result += 12;
    }
    while ( v5 < FIELD_U32(a1, 40) );
  }
  return result;
}
