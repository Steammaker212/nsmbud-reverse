/* sub_608A45B4
 * address: 0x608A45B4   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A45B4(_DWORD *a1, int a2, int a3)
{
  int v5; // r1
  int v6; // r6
  int i; // r5
  int v8; // r0
  int v9; // r7
  bool v10; // zf
  int v11; // r1
  int v12; // r0
  int v13; // r2
  int v14; // r8
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // r1
  int v18; // r0
  int v19; // r2
  _DWORD *v20; // r0
  _DWORD *v21; // r0

  a1[2] = a2;
  a1[3] = FIELD_U32(a2, 40);
  v5 = FIELD_U32(a2, 48);
  a1[4] = v5;
  a1[5] = FIELD_U32(v5, 32);
  v6 = ((int (*)(void))sub_608A4798)();
  for ( i = 0; i != 5; ++i )
  {
    v8 = sub_608A4798(a1[3], off_60C5AB70[i]);
    v9 = v8;
    v10 = i == 4;
    if ( i == 4 )
      v10 = v8 == 0;
    if ( v10 )
    {
      v11 = FIELD_U8(a3, 20);
      if ( v11 == 255 || (v12 = a1[3], (v13 = FIELD_U32(v12, 24)) == 0) )
      {
LABEL_26:
        v16 = &a1[i];
        v9 = v6;
        v16[15] = FIELD_U8(v6, 14);
        v16[10] = FIELD_U32(v6, 8);
        goto LABEL_33;
      }
      v9 = sub_608A4798(v12, *(_DWORD *)(v13 + 16 * v11 + 32) + 2);
    }
    if ( !v9 )
      goto LABEL_26;
    v14 = FIELD_U32(v9, 8);
    if ( i == 4 )
    {
      v15 = sub_608A4798(a1[3], "_u1");
      if ( v15
        || (v17 = FIELD_U8(a3, 21), v17 != 255)
        && (v18 = a1[3], (v19 = FIELD_U32(v18, 24)) != 0)
        && (v15 = sub_608A4798(v18, *(_DWORD *)(v19 + 16 * v17 + 32) + 2)) != 0 )
      {
        if ( v14 == FIELD_U32(v15, 8) )
        {
          if ( v14 == 2305 )
            v14 = 2817;
          if ( v14 == 4609 )
            v14 = 5377;
          if ( v14 == 4613 )
            v14 = 5381;
          if ( v14 == 5893 )
            v14 = 6405;
          if ( v14 == 2306 )
            v14 = 2818;
          if ( v14 == 4610 )
            v14 = 5378;
        }
        else
        {
          debugPrintRelated3("%s.fmdb : A format of _u1 is different from _uo of the particle shape.\n");
        }
      }
    }
    v20 = &a1[i];
    v20[10] = v14;
    v20[15] = FIELD_U8(v9, 14);
LABEL_33:
    v21 = &a1[i];
    v21[20] = FIELD_U16(v9, 12);
  }
  sub_60835528(*(_DWORD *)(a1[5] + 16), (int)(a1 + 6));
  return 1;
}
