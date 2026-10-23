/* nn__g3d__SkeletalAnimObj__Bind
 * address: 0x60878460   size: 60   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__g3d__SkeletalAnimObj__Bind(int a1, int a2)
{
  int v3; // r5
  int v4; // r6

  v3 = FIELD_U32(a2, 32);
  FIELD_U32(a1, 80) &= ~0x20u;
  v4 = sub_60878088(a1, v3);
  sub_608782F4(a1, v3);
  return v4;
}
