/* FinalBowser__beginState_DieFall
 * address: 0x60078964   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF0
// 
// Overridden by: None
int __fastcall FinalBowser__beginState_DieFall(int result)
{
  FIELD_U32(result, 120) = 0;
  FIELD_U32(result, 124) = -1065353216;
  FIELD_U32(result, 128) = 0;
  FIELD_U16(result, 6276) = 180;
  FIELD_U32(result, 26104) = 1;
  return result;
}
