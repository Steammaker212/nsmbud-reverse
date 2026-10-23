/* GoombaBase__vf2C4
 * address: 0x6033DCA0   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6033B3A0 : Goomba
int __fastcall GoombaBase__vf2C4(int result)
{
  __int64 v1; // r2

  HIDWORD(v1) = 1077936128;
  LODWORD(v1) = dword_60AF1F68[FIELD_U32(result, 80)];
  FIELD_U32(result, 132) = v1;
  FIELD_U64(result, 120) = v1;
  FIELD_U8(result, 6707) = 1;
  FIELD_U8(result, 6702) = 0;
  return result;
}
