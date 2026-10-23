/* sub_60550938
 * address: 0x60550938   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60550938(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r5

  ((void (*)(void))loc_605509B4)();
  v2 = FIELD_U32(a1, 12);
  v3 = FIELD_U32(a1, 32);
  if ( FIELD_U8(v2, 65) != v3 )
    FIELD_U8(v2, 65) = v3;
  v4 = FIELD_U16(dword_60C99DD4, 1382);
  if ( v4 != FIELD_U16(a1, 42) )
  {
    sub_6047DEC8((_DWORD *)(a1 + 84), FIELD_U32(a1, 4), 1, FIELD_U16(dword_60C99DD4, 1382));
    FIELD_U16(a1, 42) = v4;
  }
  return sub_60473B58((_DWORD *)(a1 + 84), 0xEu, 0);
}
