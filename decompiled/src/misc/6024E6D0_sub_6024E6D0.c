/* sub_6024E6D0
 * address: 0x6024E6D0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024E6D0(int a1)
{
  float v2; // s0
  int result; // r0

  sub_600035C0(a1);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  v2 = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  FIELD_F32(a1, 116) = v2;
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  nullsub_7();
  result = dword_60AF1F58[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 160) = result;
  return result;
}
