/* sub_6038740C
 * address: 0x6038740C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038740C(int a1)
{
  int v2; // r1
  int v3; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r2
  int v8; // r0

  v2 = FIELD_U32(a1, 56);
  v3 = FIELD_U32(a1, 32);
  v4 = FIELD_U32(v2, 124);
  if ( v3 == 1 )
  {
    v8 = FIELD_U32(a1, 44);
    if ( v8 >= 1 )
    {
      FIELD_U32(a1, 44) = v8 - 1;
      return 1;
    }
    if ( ((int (__fastcall *)(int, int))loc_603874A8)(a1, v4) == 1 )
      *(_BYTE *)(FIELD_U32(a1, 56) + 128) = 0;
    return 1;
  }
  if ( v3 )
    return 1;
  v5 = abs32(v4);
  FIELD_U8(a1, 52) = 0;
  v6 = 3 * v5;
  if ( v5 > 1 )
    v6 = (2 * v5) | 1;
  FIELD_U32(a1, 44) = v6;
  FIELD_U32(a1, 48) = 8;
  FIELD_U32(a1, 32) = 1;
  return 1;
}
