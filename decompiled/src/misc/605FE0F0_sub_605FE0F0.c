/* sub_605FE0F0
 * address: 0x605FE0F0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605FE0F0(int a1)
{
  __int16 v1; // r2

  v1 = FIELD_U16(a1, 26) & 0xF0;
  if ( (FIELD_U16(a1, 26) & 0xF0) == 0 )
    v1 = 32;
  FIELD_F32(a1, 6104) = (float)(FIELD_U16(a1, 26) & 0xF0);
  FIELD_U16(a1, 6116) = v1;
  FIELD_U8(a1, 6120) = FIELD_U8(a1, 28);
  FIELD_U32(a1, 516) = 1132462080;
  FIELD_U32(a1, 520) = 1132462080;
  FIELD_U32(a1, 524) = 1143209984;
  FIELD_U32(a1, 528) = 1143209984;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB26B8);
  return 1;
}
