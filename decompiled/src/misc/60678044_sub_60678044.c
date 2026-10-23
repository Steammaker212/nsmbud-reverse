/* sub_60678044
 * address: 0x60678044   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60678044(int a1)
{
  float v2; // s0
  int v3; // r1
  int v4; // r0

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 108);
  v4 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 6108) = 1132789760;
  FIELD_U32(a1, 6116) = v3;
  FIELD_F32(a1, 6120) = v2 + 8.0;
  FIELD_U32(a1, 6124) = v4;
  LightMask__update((LightMask *)(a1 + 6104));
  return 1;
}
