/* sub_6061C700
 * address: 0x6061C700   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061C700(int a1)
{
  float v2; // r0
  int result; // r0

  sub_607D82A0(a1 + 6808);
  v2 = FIELD_F32(a1, 6852);
  FIELD_F32(a1, 108) = v2;
  FIELD_U32(a1, 112) = FIELD_U32(a1, 6856);
  FIELD_U32(a1, 116) = FIELD_U32(a1, 6860);
  if ( FIELD_U8(a1, 6913) )
    FIELD_F32(a1, 108) = v2 - FIELD_F32(a1, 6864);
  sub_6061C4A0(a1);
  result = FIELD_U8(a1, 21);
  if ( (result & 1) == 0 )
  {
    result = a1 + 6872;
    if ( (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 6872)) <= FIELD_F32(dword_60CC6484, 28) )
    {
      FIELD_U8(a1, 19) = 1;
      return 1;
    }
  }
  return result;
}
