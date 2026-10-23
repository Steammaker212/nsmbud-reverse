/* sub_6056E2A4
 * address: 0x6056E2A4   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056E2A4(int a1, double a2, float a3, float a4, float32x2_t a5)
{
  int v6; // r0
  _DWORD *v7; // r5
  int result; // r0
  float v9; // s0
  __int64 v10; // r0

  a5.n64_u32[0] = 4.5;
  *(float *)&a2 = FIELD_F32(a1, 124) + 0.64;
  FIELD_U32(a1, 124) = vmin_f32(*(float32x2_t *)&a2, a5).n64_u32[0];
  CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( FIELD_U32(a1, 7404) == 1 )
  {
    if ( FIELD_U8(a1, 7452) )
      FIELD_U32(a1, 7436) = 2;
    if ( FIELD_U8(a1, 7453) )
      FIELD_U32(a1, 7440) = 2;
    if ( FIELD_U8(a1, 7454) )
      FIELD_U32(a1, 7444) = 2;
    if ( FIELD_U8(a1, 7455) )
      FIELD_U32(a1, 7448) = 2;
  }
  sub_6056CFFC(a1);
  SE_OBJ_BOUND_BLOCK_JUMP_ref_2(a1);
  sub_6056DF3C(a1);
  v7 = (_DWORD *)(a1 + 7460);
  v6 = FIELD_U32(a1, 7460);
  if ( v6 == 2 )
  {
    sub_6056DC3C(a1, 0);
  }
  else
  {
    if ( v6 == 1 )
    {
LABEL_15:
      sub_6056DA0C(a1);
      *v7 = 2;
      goto LABEL_17;
    }
    if ( !v6 && FIELD_F32(a1, 124) >= 0.0 )
    {
      *v7 = 1;
      goto LABEL_15;
    }
  }
LABEL_17:
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6980);
  result = a1 + 6984;
  v9 = FIELD_F32(a1, 6984);
  if ( v9 <= FIELD_F32(a1, 112) )
  {
    FIELD_F32(a1, 112) = v9;
    if ( !FIELD_U8(a1, 7416) )
    {
      HIDWORD(v10) = 1065353216;
      LODWORD(v10) = FIELD_U32(a1, 7396);
      FIELD_U64(a1, 144) = v10;
    }
    if ( FIELD_U32(a1, 6856) != 21 )
      sub_60564834((int *)a1);
    FIELD_U32(a1, 6900) = 0;
    FIELD_U8(a1, 6846) = 0;
    FIELD_U32(a1, 6856) = 21;
    FIELD_U32(a1, 6880) = 0;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAE748);
  }
  return result;
}
