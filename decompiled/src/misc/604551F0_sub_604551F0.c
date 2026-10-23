/* sub_604551F0
 * address: 0x604551F0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604551F0(int a1, int a2, float a3)
{
  int v3; // r3
  unsigned int v4; // r0
  int result; // r0
  unsigned int v6; // s0

  FIELD_U8(a1, 310) = 1;
  v3 = FIELD_U16(a1, 308);
  v4 = v3 << 16;
  if ( (v3 & 0x8000) != 0 )
  {
    v4 = -65536 * v3;
    if ( v3 == 0x8000 )
      v4 = 0x80000000;
  }
  if ( a2 < 0 && a2 != 0x80000000 )
    a2 = -a2;
  if ( v4 <= a2 )
    return 0;
  v6 = (unsigned int)(float)((float)(v4 - a2) * a3);
  result = v6;
  if ( v3 << 16 <= 0 )
    return -v6;
  return result;
}
