/* sub_602CD640
 * address: 0x602CD640   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CD640(int a1)
{
  int v2; // r0
  _WORD *v3; // r8
  bool v4; // zf
  __int16 v5; // r0
  __int16 v6; // r0
  int v7; // r6
  _DWORD *v8; // r5
  int v9; // r4
  int v10; // r4
  int v11; // r4

  CollisionActor__handleGravity((CollisionActor *)a1);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v3 = (_WORD *)(a1 + 6550);
  v2 = FIELD_U16(a1, 6550);
  v4 = v2 == 0;
  if ( FIELD_U16(a1, 6550) )
  {
    v5 = v2 - 1;
    *v3 = v5;
    v4 = v5 == 0;
  }
  if ( v4 )
  {
    v6 = FIELD_U16(a1, 6552) + 1;
    FIELD_U16(a1, 6552) = v6;
    if ( v6 < 6 )
    {
      if ( v6 >= 1 )
      {
        v7 = 0;
        v8 = (_DWORD *)(a1 + 6316);
        do
        {
          (*(void (__fastcall **)(_DWORD *))(*v8 + 36))(v8);
          v8 = (_DWORD *)v8[30];
          ++v7;
        }
        while ( v7 < FIELD_S16(a1, 6552) );
      }
      *v3 = 10;
    }
    else
    {
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C919D8);
    }
  }
  sub_602D00A4(a1, 0.0);
  sub_602D1E50(a1 + 6316);
  v9 = FIELD_U32(a1, 6436);
  sub_602D1E50(v9);
  v10 = FIELD_U32(v9, 120);
  sub_602D1E50(v10);
  v11 = FIELD_U32(v10, 120);
  sub_602D1E50(v11);
  return sub_602D1E50(FIELD_U32(v11, 120));
}
