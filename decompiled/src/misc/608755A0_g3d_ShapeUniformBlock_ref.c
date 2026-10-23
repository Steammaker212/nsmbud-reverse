/* g3d_ShapeUniformBlock_ref
 * address: 0x608755A0   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall g3d_ShapeUniformBlock_ref(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v4; // lr
  int v7; // r4
  int v8; // r1
  int v9; // r9
  int v10; // r6
  int v11; // r0
  int v12; // r4
  int v13; // r0
  int result; // r0
  int v15; // [sp+8h] [bp-50h]
  char v16; // [sp+10h] [bp-48h]
  int v18; // [sp+18h] [bp-40h]
  int v20; // [sp+20h] [bp-38h] BYREF
  int v21; // [sp+24h] [bp-34h]
  int v22; // [sp+28h] [bp-30h]
  int v23; // [sp+2Ch] [bp-2Ch]

  v4 = a1;
  v15 = FIELD_U8(a1, 10);
  if ( FIELD_U8(a1, 10) )
  {
    LOBYTE(v7) = FIELD_U8(a1, 11);
    v8 = 0;
    v16 = *(_BYTE *)(*(_DWORD *)a1 + 102);
    do
    {
      if ( (_BYTE)v7 )
      {
        v7 = (unsigned __int8)v7;
        v9 = 0;
        v18 = v8;
        do
        {
          v23 = 0;
          v22 = 0;
          v21 = 0;
          v20 = 0;
          sub_6083D5B0(&v20);
          v20 = 256;
          v21 = 16;
          v10 = FIELD_U32(a1, 20) + 72 * (v9 + v18 * v7);
          v11 = sub_608353A4(v10);
          sub_608353C0(v11, a2, &v20, a3, a4);
          sub_608A7D8C(v10, "g3d_ShapeUniformBlock");
          v12 = sub_608352A0(a2, (int)&v20);
          v13 = sub_608354C4(v10);
          *(_QWORD *)v13 = 1065353216;
          FIELD_U64(v13, 8) = 0;
          FIELD_U64(v13, 16) = 0x3F80000000000000LL;
          FIELD_U64(v13, 24) = 0;
          FIELD_U64(v13, 32) = 0;
          FIELD_U64(v13, 40) = 1065353216;
          FIELD_U8(v13, 48) = v16;
          v13 += 48;
          FIELD_U8(v13, 3) = 0;
          FIELD_U8(v13, 2) = 0;
          FIELD_U8(v13, 1) = 0;
          sub_608354E0(v10);
          nullsub_66();
          ++v9;
          a4 += (v12 + 255) & -v12;
          v7 = FIELD_U8(a1, 11);
        }
        while ( v9 < v7 );
        v8 = v18;
        v4 = a1;
      }
      else
      {
        LOBYTE(v7) = 0;
      }
      ++v8;
    }
    while ( v8 != v15 );
  }
  result = FIELD_U32(v4, 4) | 1;
  FIELD_U32(v4, 4) = result;
  return result;
}
