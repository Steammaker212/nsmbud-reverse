/* sub_6056E148
 * address: 0x6056E148   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056E148(int a1)
{
  float v2; // s0
  int result; // r0
  float v4; // s0
  __int64 v5; // r0

  v2 = FIELD_F32(a1, 124) + -0.64;
  FIELD_F32(a1, 124) = v2;
  if ( v2 < 0.0 )
  {
    FIELD_U8(a1, 6843) = 0;
    FIELD_U8(a1, 84) = -1;
  }
  if ( v2 <= -4.5 )
    FIELD_U32(a1, 124) = 1083179008;
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6980);
  result = a1 + 6984;
  v4 = FIELD_F32(a1, 6984);
  if ( v4 >= FIELD_F32(a1, 112) )
  {
    FIELD_F32(a1, 112) = v4;
    if ( !FIELD_U8(a1, 7416) )
    {
      HIDWORD(v5) = 1065353216;
      LODWORD(v5) = FIELD_U32(a1, 7396);
      FIELD_U64(a1, 144) = v5;
    }
    if ( FIELD_U32(a1, 6856) != 21 )
      sub_60564834((int *)a1);
    FIELD_U32(a1, 6880) = 0;
    FIELD_U32(a1, 6900) = 0;
    FIELD_U8(a1, 6846) = 0;
    FIELD_U32(a1, 6856) = 21;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAE728);
  }
  return result;
}
