/* BlockCoinBase__executeState_BumpDown
 * address: 0x605B6790   size: 136   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BlockCoinBase__executeState_BumpDown(int a1, double a2, float a3, float a4, float32x2_t a5)
{
  float v6; // s0
  float v7; // s0

  a5.n64_u32[0] = 2.0;
  *(float *)&a2 = FIELD_F32(a1, 6812) + FIELD_F32(a1, 124);
  FIELD_U32(a1, 124) = vmin_f32(*(float32x2_t *)&a2, a5).n64_u32[0];
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 232))(a1, 2);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  v6 = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  FIELD_F32(a1, 116) = v6;
  v7 = CollisionMgr_process((_BYTE *)(a1 + 648), v6);
  return (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 216))(a1, v7);
}
