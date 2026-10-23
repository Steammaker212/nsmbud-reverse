/* sub_602C4C10
 * address: 0x602C4C10   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602C4C10(int a1)
{
  int v2; // r1
  int v3; // r0
  float v4; // s22
  float v5; // s0
  int v6; // r1
  int v7; // r2
  int v8; // r1
  int v9; // r2
  int v10; // [sp+4h] [bp-4Ch] BYREF
  int v11[18]; // [sp+8h] [bp-48h] BYREF

  StageActor__cullCheck((StageActor *)a1, 0);
  if ( FIELD_U8(a1, 6327) || FIELD_U8(a1, 6328) )
  {
    v2 = dword_60C91574;
    if ( FIELD_U32(a1, 6284) != 1 )
      v2 = -dword_60C91574;
    goto LABEL_5;
  }
  if ( FIELD_U8(a1, 6326) )
  {
    v3 = FIELD_U8(a1, 6333);
    if ( v3 == 2 )
    {
      v2 = dword_60C91574;
      if ( FIELD_U32(a1, 6284) != 1 )
        v2 = -dword_60C91574;
LABEL_5:
      v11[0] = v2;
      v10 = FIELD_U32(a1, 164);
      sub_608322C0(&v10, v11, &dword_60C91578, &dword_60C9157C);
      FIELD_U32(a1, 164) = v10;
      JUMPOUT(0x6000100C);
    }
    if ( v3 == 1 )
    {
      v4 = ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(
             a1 + 108,
             FIELD_F32(a1, 6308),
             0.125,
             4.0,
             2.0);
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(
        a1 + 112,
        FIELD_F32(a1, 6312),
        0.125,
        4.0,
        2.0);
      if ( fabsf(v4) <= 1.0 && fabsf(v5) <= 1.0 )
        FIELD_U8(a1, 6333) = 2;
    }
    v6 = FIELD_U32(a1, 112);
    v7 = FIELD_U32(a1, 116);
    v11[0] = FIELD_U32(a1, 108);
    v11[1] = v6;
    v11[2] = v7;
    v8 = FIELD_U32(a1, 160);
    v9 = FIELD_U32(a1, 164);
    v11[3] = FIELD_U32(a1, 156);
    v11[4] = v8;
    v11[5] = v9;
    sub_6024A70C(a1 + 6408, v11);
    sub_6024A758(a1 + 6408, 12);
    sub_602C44A4(a1);
  }
}
