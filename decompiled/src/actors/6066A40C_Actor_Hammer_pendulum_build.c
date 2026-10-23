/* Actor_Hammer_pendulum_build
 * address: 0x6066A40C   size: 132   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Hammer_pendulum_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x1C28u);
  sub_606D23D8(v2, a1);
  *(_DWORD *)v2 = off_60C15204;
  FIELD_U32(v2, 6192) = 0;
  FIELD_U32(v2, 6196) = 0;
  FIELD_U32(v2, 6240) = off_60C15300;
  Actor_Hammer_pendulum_build_helper(v2 + 6248);
  FIELD_U16(v2, 7200) = 0;
  FIELD_U32(v2, 7192) = 0;
  FIELD_U32(v2, 7196) = 0;
  return v2;
}
