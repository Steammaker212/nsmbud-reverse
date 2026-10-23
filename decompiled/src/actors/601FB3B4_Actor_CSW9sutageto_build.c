/* Actor_CSW9sutageto_build
 * address: 0x601FB3B4   size: 120   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CSW9sutageto_build(unsigned __int8 *a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r2

  v2 = operator_new(0x194u);
  sub_601A75F0((Actor *)v2, a1);
  *(_DWORD *)v2 = off_60BD814C;
  FIELD_U32(v2, 268) = 0;
  FIELD_U32(v2, 272) = 3;
  v3 = FIELD_U32(v2, 84);
  v4 = FIELD_U32(v2, 88);
  FIELD_U32(v2, 276) = FIELD_U32(v2, 80);
  FIELD_U32(v2, 280) = v3;
  FIELD_U32(v2, 284) = v4;
  FIELD_U32(v2, 288) = 0;
  FIELD_U32(v2, 292) = -1;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 296));
  FIELD_U32(v2, 296) = off_60BC1450;
  FIELD_U8(v2, 400) = 0;
  return v2;
}
