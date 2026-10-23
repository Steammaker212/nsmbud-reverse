/* sub_6083F540
 * address: 0x6083F540   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6083F540(int a1)
{
  _BOOL4 result; // r0
  int v3; // r2
  bool v4; // cc
  int v5; // r2
  bool v6; // cc
  int v7; // r2
  bool v8; // zf

  result = 0;
  v3 = FIELD_U32(a1, 8);
  v4 = v3 < 1;
  if ( v3 >= 1 )
    v4 = FIELD_U32(a1, 12) < 1;
  if ( !v4 )
  {
    v5 = FIELD_U32(a1, 16);
    v6 = v5 < 1;
    if ( v5 >= 1 )
      v6 = FIELD_U32(a1, 20) < 1;
    if ( !v6 && (unsigned int)(FIELD_U32(a1, 24) - 1) <= 0x12 && FIELD_F32(a1, 32) > 0.0 )
    {
      v7 = FIELD_U32(a1, 28);
      v8 = (v7 & 0xF) == 0;
      if ( (v7 & 0xF) != 0 )
        v8 = (v7 & 0x18) == 0;
      if ( !v8 )
        return (FIELD_U32(a1, 40) & FIELD_U32(a1, 36)) == 0;
    }
  }
  return result;
}
