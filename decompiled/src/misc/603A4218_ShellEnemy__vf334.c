/* ShellEnemy__vf334
 * address: 0x603A4218   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall ShellEnemy__vf334(int result)
{
  float v1; // s0

  v1 = 3.0;
  FIELD_U32(result, 568) &= ~4u;
  if ( FIELD_U32(result, 6568) == 1 && (float)(FIELD_F32(result, 6576) - FIELD_F32(result, 112)) > 16.0 )
    v1 = 1.5;
  FIELD_U32(result, 120) = 0;
  FIELD_F32(result, 124) = v1;
  FIELD_U32(result, 128) = 0;
  return result;
}
