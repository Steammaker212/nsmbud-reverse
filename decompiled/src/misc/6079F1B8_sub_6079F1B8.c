/* sub_6079F1B8
 * address: 0x6079F1B8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079F1B8(int a1, int a2)
{
  int v3; // r0
  float v4; // r0
  int result; // r0

  FIELD_U32(a1, 6964) = FIELD_U32(a1, 112);
  v3 = FIELD_U32(a2, 80);
  FIELD_U32(a1, 80) = v3;
  v4 = flt_60B0A898[v3];
  FIELD_F32(a1, 88) = v4;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)(v4 * 5.0);
  Player_changeState(a1, (StateBase *)&unk_60CC4C04, 1);
  result = FIELD_U32(a1, 1216) | 0x200000;
  FIELD_U32(a1, 1216) = result;
  return result;
}
