/* sub_6086A978
 * address: 0x6086A978   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6086A978(int a1, int a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r2

  v3 = a1 + 56;
  sub_6086A2A4(a1 + 56, *(_WORD *)(FIELD_U32(a2, 32) + 76));
  sub_6086A340(v3, *(unsigned __int16 **)(FIELD_U32(a1, 68) + 40));
  FIELD_U16(a1, 60) |= 1u;
  FIELD_U32(a1, 44) = 2139095040;
  v4 = FIELD_U32(a1, 40);
  if ( v4 >= 1 && v4 <= FIELD_U32(a1, 36) )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      ++v6;
      *(_DWORD *)(FIELD_U32(a1, 32) + v5) = 2139095040;
      v5 += 12;
    }
    while ( v6 < FIELD_U32(a1, 40) );
  }
  qmemcpy(
    *(void **)(a1 + 48),
    *(const void **)(FIELD_U32(a1, 68) + 56),
    (((unsigned int)FIELD_U16(a1, 64) + 31) >> 3) & 0x3FFC);
}
