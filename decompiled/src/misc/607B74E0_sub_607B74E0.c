/* sub_607B74E0
 * address: 0x607B74E0   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B74E0(int a1, float a2, float a3)
{
  float v6; // s0
  int v7; // r0
  int v8; // r1
  int v9; // r2

  if ( sub_607869D0(a1 + 688) != 1 )
    return 0;
  v6 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 176))(a1);
  if ( sub_60155C38(a1 + 1328, (float *)(a1 + 108), 0, 0, v6 + 1.0) == 1 )
  {
    a2 = 0.0;
    v7 = FIELD_U32(a1, 108);
    v8 = FIELD_U32(a1, 112);
    v9 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 584) = v7;
    FIELD_U32(a1, 588) = v8;
    FIELD_U32(a1, 592) = v9;
    FIELD_U32(a1, 608) = v7;
    FIELD_U32(a1, 612) = v8;
    FIELD_U32(a1, 616) = v9;
  }
  sub_60763400(a1);
  ((void (__fastcall *)(int))loc_6077288C)(a1);
  FIELD_U32(a1, 1220) &= ~0x800000u;
  return SE_OBJ_BOUND_BLOCK_JUMP_HIGH_ref_2_helper(a1, a2, a3);
}
