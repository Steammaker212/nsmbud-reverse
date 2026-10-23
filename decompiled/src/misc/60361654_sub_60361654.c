/* sub_60361654
 * address: 0x60361654   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60361654(int a1)
{
  int result; // r0
  float v3; // s0

  result = sub_606D4ABC(FIELD_U8(a1, 28));
  if ( result )
  {
    FIELD_U32(a1, 7032) = FIELD_U32(result, 8);
    FIELD_U8(a1, 7037) = FIELD_U8(result, 6321);
    sub_606AE1F0(result, 0);
    if ( FIELD_U8(a1, 7037) )
    {
      FIELD_F32(a1, 112) = v3 + FIELD_F32(a1, 6308);
      FIELD_F32(a1, 496) = FIELD_F32(a1, 7028) - v3;
    }
    else
    {
      FIELD_F32(a1, 108) = v3 + FIELD_F32(a1, 6304);
      FIELD_F32(a1, 492) = FIELD_F32(a1, 7024) - v3;
    }
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95878);
  }
  return result;
}
