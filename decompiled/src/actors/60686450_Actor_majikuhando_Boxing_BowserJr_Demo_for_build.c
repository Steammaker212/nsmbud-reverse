/* Actor_majikuhando_Boxing_BowserJr_Demo_for_build
 * address: 0x60686450   size: 156   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_majikuhando_Boxing_BowserJr_Demo_for_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1E38u);
  sub_60680830(v2, a1);
  *(_DWORD *)v2 = off_60C17004;
  FIELD_U16(v2, 7684) = 0;
  FIELD_U8(v2, 7686) = 0;
  memset(v2 + 7600, 0, 60);
  FIELD_U8(v2, 7676) = 0;
  FIELD_U32(v2, 7672) = 0;
  FIELD_U16(v2, 7680) = 0;
  FIELD_U16(v2, 7678) = 0;
  FIELD_U8(v2, 7682) = 0;
  PlayerLookTarget_ctor((PlayerLookTarget *)(v2 + 7688), FIELD_U32(v2, 8));
  FIELD_U32(v2, 7716) = 2;
  return v2;
}
