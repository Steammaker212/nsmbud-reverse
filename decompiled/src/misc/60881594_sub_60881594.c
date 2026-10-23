/* sub_60881594
 * address: 0x60881594   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60881594(int a1, int a2, int a3, int a4, float a5)
{
  _DWORD *v9; // r1
  int v10; // r0
  int v11; // r0
  int result; // r0
  int v13; // r1
  int v14; // r11
  int v15; // r9
  int v16; // r5
  int v17; // r0
  int v18; // r2
  int v19; // r6
  int v20; // r8
  int v21; // r0
  int v22; // r0
  bool v23; // zf
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // [sp+4h] [bp-3Ch]
  int v28; // [sp+8h] [bp-38h]

  v9 = *(_DWORD **)(a1 + 328);
  if ( v9 )
  {
    v10 = FIELD_U32(a1, 332);
    if ( v10 >= 1 )
    {
      v11 = v10 - 1;
      FIELD_U32(a1, 332) = v11;
      if ( !v11 )
      {
        sub_608813D8((int *)a1, v9);
        FIELD_U32(a1, 328) = 0;
        FIELD_U32(a1, 332) = 0;
      }
    }
  }
  result = FIELD_U8(a1, 6);
  if ( FIELD_U8(a1, 6) )
  {
    memset((void *)(a1 + 348), 0, 60);
    FIELD_U32(a1, 512) = 0;
    FIELD_U32(a1, 48) = 0;
    FIELD_U32(a1, 52) = 0;
    FIELD_F32(a1, 64) = a5;
    v13 = FIELD_U32(a1, 320);
    if ( v13 )
    {
      v14 = 0;
      do
      {
        v15 = v13;
        v13 = FIELD_U32(v13, 120);
        if ( !FIELD_U8(a1, 10) || FIELD_U32(v15, 40) || FIELD_U32(a1, 536) )
        {
          v27 = v13;
          v16 = sub_60881844(a1, v15, a2, a3, a4);
          FIELD_U8(v15, 5) = v16;
          FIELD_U8(v15, 4) = 0;
          v17 = FIELD_U32(v15, 348);
          if ( FIELD_S32(v17, 84) >= 1 )
          {
            v18 = 0;
            do
            {
              v19 = *(_DWORD *)(v15 + 4 * v18 + 768);
              if ( v19 )
              {
                v28 = v18;
                do
                {
                  v20 = FIELD_U32(v19, 120);
                  v21 = sub_60881844(a1, v19, a2, a3, a4);
                  FIELD_U8(v19, 5) = v16;
                  if ( v21 == 1 )
                  {
                    sub_60881A7C(a1, v19);
                    sub_6088077C((_DWORD *)v19, *(_DWORD *)a1, 1);
                    sub_6088FC88(FIELD_U32(a1, 24), v19);
                  }
                  else
                  {
                    FIELD_U8(v15, 4) = 1;
                  }
                  v22 = FIELD_U8(v19, 1060);
                  v19 = v20;
                  v14 |= v22 != 0;
                }
                while ( v20 );
                v17 = FIELD_U32(v15, 348);
                v18 = v28;
              }
              ++v18;
            }
            while ( v18 < FIELD_U32(v17, 84) );
          }
          v23 = v16 == 1;
          if ( v16 == 1 )
            v23 = FIELD_U8(v15, 4) == 0;
          if ( v23 )
          {
            sub_60881A7C(a1, v15);
            sub_6088077C((_DWORD *)v15, *(_DWORD *)a1, 1);
            sub_6088FC88(FIELD_U32(a1, 24), v15);
          }
          v13 = v27;
        }
        else
        {
          FIELD_F32(v15, 68) = FIELD_F32(v15, 68) + a5;
          ++FIELD_U32(a1, 352);
        }
        v24 = FIELD_U8(v15, 1060);
        if ( FIELD_U8(v15, 1060) )
          v24 = 1;
        v14 |= v24;
      }
      while ( v13 );
      if ( (v14 & 1) != 0 )
        FIELD_U8(a1, 544) = 1;
    }
    result = FIELD_U8(a1, 10);
    if ( FIELD_U8(a1, 10) )
    {
      if ( a5 > 0.0 )
      {
        result = FIELD_U32(a1, 536);
        if ( result >= 1 )
        {
          if ( FIELD_S32(a1, 532) >= 1 )
          {
            v25 = 80;
            v26 = 0;
            do
            {
              ++v26;
              *(_DWORD *)(FIELD_U32(a1, 528) + v25) = 0;
              v25 += 96;
            }
            while ( v26 < FIELD_U32(a1, 532) );
          }
          result = 0;
          FIELD_U32(a1, 536) = 0;
        }
      }
    }
    if ( a5 > 0.0 )
    {
      FIELD_U32(a1, 20) = 0;
      return 0;
    }
  }
  return result;
}
