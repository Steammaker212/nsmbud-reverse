/* sub_603772C4
 * address: 0x603772C4   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603772C4(_DWORD *a1)
{
  int result; // r0
  int v3; // r4
  _DWORD *v4; // r5
  unsigned int v5; // r5
  int Area; // r7
  int v7; // r4
  int v8; // r3
  int v9; // r8
  unsigned int v10; // r4
  int v11; // r0
  int v12; // r5
  unsigned int v13; // r0
  int v14; // r6
  int *v15; // r10
  int v16; // r3
  unsigned int v17; // r4
  int v18; // r5
  int v19; // r6
  int v20; // r7
  int i; // r4
  int v22; // [sp+0h] [bp-58h]
  int v23; // [sp+4h] [bp-54h]
  int v24; // [sp+8h] [bp-50h] BYREF
  int v25; // [sp+Ch] [bp-4Ch]
  unsigned int v26; // [sp+10h] [bp-48h]
  int v27; // [sp+14h] [bp-44h]
  int v28; // [sp+18h] [bp-40h]
  int v29; // [sp+1Ch] [bp-3Ch]

  result = FIELD_U8(dword_60CC6D78, 109032);
  if ( FIELD_U8(dword_60CC6D78, 109032) )
  {
    result = FIELD_U32(dword_60C99DD4, 764);
    if ( !result )
    {
      result = a1[31];
      v3 = a1[24];
      if ( result != FIELD_U8(LevelInfo_instance, 18) )
      {
        v23 = FIELD_U8(LevelInfo_instance, 18);
        if ( v3 >= 1 )
        {
          if ( (unsigned int)v3 >= 0xA )
            v3 = 10;
          v4 = a1 + 5;
          do
          {
            if ( *v4 )
            {
              operator_delete_8DE3FC((void *)(*v4 - 8));
              *(v4 - 1) = 0;
              *v4 = 0;
            }
            v4 += 2;
            --v3;
          }
          while ( v3 );
          a1[24] = 0;
        }
        v5 = 0;
        while ( 1 )
        {
          Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
          v7 = sub_60727908(Area, v5 + 90);
          if ( !v7 )
            break;
          v26 = v5 + 90;
          v24 = sub_60727950(Area, v5 + 90);
          v25 = FIELD_U16(v7, 4);
          sub_603778B4(a1, v5++, &v24, v8, v22, v23);
          v3 = a1[24] + 1;
          a1[24] = v3;
          if ( v5 >= 0xA )
            goto LABEL_18;
        }
        v3 = a1[24];
LABEL_18:
        if ( v3 >= 1 )
          a1[25] = 1;
        result = v23;
        a1[31] = v23;
      }
      if ( v3 >= 1 )
      {
        v9 = FIELD_U8(LevelInfo_instance, 19);
        v10 = FIELD_U8(LevelInfo_instance, 20);
        v11 = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
        v12 = 0;
        if ( v10 >= 0x40 )
          v10 = 0;
        v13 = v11 + 4 * v10;
        v14 = FIELD_U32(v13, 440);
        if ( v14 >= 1 )
        {
          v15 = *(int **)(v13 + 184);
          while ( *(_WORD *)v15 != 451 || sub_6082F314(v15[2]) != v9 )
          {
            ++v12;
            v15 += 6;
            if ( v12 >= v14 )
              goto LABEL_31;
          }
          v16 = v15[1];
          v17 = v15[2];
          v18 = v15[3];
          v19 = v15[4];
          v20 = v15[5];
          v24 = *v15;
          v25 = v16;
          v26 = v17;
          v27 = v18;
          v28 = v19;
          v29 = v20;
          sub_60377730(a1);
        }
LABEL_31:
        result = a1[24];
        if ( result >= 1 )
        {
          for ( i = 0; i < result; ++i )
          {
            if ( (float)(COERCE_FLOAT((sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000) + -1.0) < 0.25 )
              a1[30] |= 1 << i;
            result = a1[24];
          }
        }
      }
    }
  }
  return result;
}
