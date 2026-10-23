/* sub_6024FED4
 * address: 0x6024FED4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6024FED4(int a1)
{
  float v1; // s0
  float v2; // s2
  _BOOL4 result; // r0
  float v4; // s0
  float v5; // s2

  v1 = FIELD_F32(a1, 108);
  v2 = FIELD_F32(a1, 572);
  result = 0;
  v4 = v1 + v2;
  v5 = FIELD_F32(dword_60CC6484, 112);
  if ( v4 >= v5 )
    return v4 <= (float)(v5 + FIELD_F32(dword_60CC6484, 104));
  return result;
}
