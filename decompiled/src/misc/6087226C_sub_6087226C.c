/* sub_6087226C
 * address: 0x6087226C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087226C(int result, char a2)
{
  int v2; // r12
  int v3; // r3
  int v4; // r2
  int v5; // r2
  int v6; // t1

  if ( FIELD_U8(result, 103) )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = FIELD_U32(result, 32);
      ++v3;
      v6 = *(_DWORD *)(v4 + v2);
      v5 = v4 + v2;
      v2 += 56;
      FIELD_U32(v5, 16) = v6 + 8 * FIELD_U16(v5, 52);
    }
    while ( v3 < FIELD_U8(result, 103) );
  }
  if ( (a2 & 1) == 0 )
    FIELD_U32(result, 80) = 0;
  return result;
}
