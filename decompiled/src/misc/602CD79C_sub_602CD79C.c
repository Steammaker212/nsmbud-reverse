/* sub_602CD79C
 * address: 0x602CD79C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CD79C(int a1)
{
  int v2; // r1
  bool v3; // zf
  __int16 v4; // r1
  int v5; // r4
  int v6; // r4
  int v7; // r4

  CollisionActor__handleGravity((CollisionActor *)a1);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v2 = FIELD_U16(a1, 6550);
  v3 = v2 == 0;
  if ( FIELD_U16(a1, 6550) )
  {
    v4 = v2 - 1;
    FIELD_U16(a1, 6550) = v4;
    v3 = v4 == 0;
  }
  if ( v3 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C919F8);
  sub_602D00A4(a1, 0.0);
  sub_602D1E50(a1 + 6316);
  v5 = FIELD_U32(a1, 6436);
  sub_602D1E50(v5);
  v6 = FIELD_U32(v5, 120);
  sub_602D1E50(v6);
  v7 = FIELD_U32(v6, 120);
  sub_602D1E50(v7);
  return sub_602D1E50(FIELD_U32(v7, 120));
}
