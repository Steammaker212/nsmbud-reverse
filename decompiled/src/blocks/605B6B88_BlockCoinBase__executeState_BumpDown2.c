/* BlockCoinBase__executeState_BumpDown2
 * address: 0x605B6B88   size: 180   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BlockCoinBase__executeState_BumpDown2(int a1, double a2, float a3, float a4, float32x2_t a5)
{
  float v6; // s0

  a5.n64_u32[0] = 2.0;
  *(float *)&a2 = FIELD_F32(a1, 124) + 0.281;
  FIELD_U32(a1, 124) = vmin_f32(*(float32x2_t *)&a2, a5).n64_u32[0];
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 232))(a1, 2);
  v6 = FIELD_F32(a1, 124) + FIELD_F32(a1, 6796);
  FIELD_F32(a1, 6796) = v6;
  CollisionMgr_process((_BYTE *)(a1 + 648), v6);
  if ( FIELD_F32(a1, 6796) >= 0.0 )
  {
    FIELD_U32(a1, 6796) = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
    FIELD_U32(a1, 6900) = 0;
  }
  else if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U8(a1, 6868) = 1;
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 244))(a1);
}
