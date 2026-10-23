/* SE_PLY_CH_YOSHI_FUMU_ref
 * address: 0x605E0220   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_CH_YOSHI_FUMU_ref(int a1)
{
  int *v2; // r1
  _DWORD *v3; // r3
  int v4; // r0
  int result; // r0
  float v6; // s0

  v2 = (int *)(a1 + 6260);
  v3 = (_DWORD *)(a1 + 6264);
  v4 = FIELD_U32(a1, 6260) | 0x10000002;
  *v3 |= 1u;
  *v2 = v4;
  sub_605D79D0(a1, (StateBase *)&unk_60CB1788, 0);
  sub_605DEEC4((_DWORD *)a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 424))(a1);
  FIELD_U32(a1, 6804) = 0;
  CollisionMgr_vf14(a1 + 648);
  result = FIELD_U32(a1, 8020);
  if ( result == 1 )
  {
    sub_605EAB48(a1 + 6064, 0.0);
    v6 = (float)byte_60B0594C[(float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 584)) < 0.0];
    FIELD_U32(a1, 80) = (float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 584)) >= 0.0;
    FIELD_F32(a1, 120) = v6 * 1.25;
    FIELD_U32(a1, 636) = 0;
    FIELD_U32(a1, 124) = 1081081856;
    FIELD_U32(a1, 128) = 0;
    sub_605D8938(a1, "SE_PLY_CH_YOSHI_FUMU", 0);
    FIELD_U32(a1, 6240) |= 0x200u;
    JUMPOUT(0x605EAF44);
  }
  if ( !result )
  {
    result = 1;
    FIELD_U8(a1, 19) = 1;
  }
  return result;
}
