/* Goomba__vf284
 * address: 0x6033A814   size: 24   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033CDB0
// 
// Overridden by: None
int __fastcall Goomba__vf284(int result)
{
  FIELD_U32(result, 120) = dword_60AFFAE4[FIELD_U32(result, 80)];
  return result;
}
