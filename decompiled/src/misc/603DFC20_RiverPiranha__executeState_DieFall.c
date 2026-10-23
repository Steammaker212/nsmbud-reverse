/* RiverPiranha__executeState_DieFall
 * address: 0x603DFC20   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF8
// 
// Overridden by: None
int __fastcall RiverPiranha__executeState_DieFall(int result)
{
  int v1; // r1

  FIELD_U32(result, 156) += 50331648;
  FIELD_U32(result, 160) += dword_60AF2150[FIELD_U32(result, 80)];
  if ( (FIELD_U8(result, 20) & 1) == 0 )
  {
    if ( (v1 = FIELD_U32(result, 2872), (v1 & 0x440000) != 0) && (v1 & 0x10000000) == 0
      || (v1 & 0x880000) != 0 && (v1 & 0x20000000) == 0 )
    {
      FIELD_F32(result, 120) = -FIELD_F32(result, 120);
    }
  }
  if ( !FIELD_U16(result, 6276) )
    FIELD_U8(result, 19) = 1;
  return result;
}
