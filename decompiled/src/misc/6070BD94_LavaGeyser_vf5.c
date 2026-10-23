/* LavaGeyser_vf5
 * address: 0x6070BD94   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaGeyser_vf5(int a1)
{
  int v2; // r1
  float *v3; // r0
  unsigned int v4; // r2
  int v5; // r1
  float v6; // r3
  float v7; // s0
  float v8; // s2
  float v9; // s10
  float v10; // s4
  float v11; // s12
  float v12; // lr
  float v13; // s0
  float v14; // s10
  float v15; // s6
  float v16; // s2
  float v17; // s4
  float v18; // s10
  float v19; // s12

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 6344) = 1090519040;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + 8.0;
  FIELD_U32(a1, 116) = 1138819072;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 648))(a1);
  v2 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 7024) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 7028) = v2;
  FIELD_U32(a1, 7032) = 1170939904;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 652))(a1);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1098907648;
  FIELD_U32(a1, 500) = 1115684864;
  FIELD_U32(a1, 504) = 1115684864;
  FIELD_U32(a1, 508) = 1115684864;
  FIELD_U32(a1, 512) = 1124073472;
  FIELD_U32(a1, 516) = 1117782016;
  FIELD_U32(a1, 520) = 1117782016;
  FIELD_U32(a1, 524) = 1117782016;
  FIELD_U32(a1, 528) = 1117782016;
  FIELD_U32(a1, 6316) = 0;
  v3 = (float *)(a1 + 6316);
  v4 = FIELD_U32(a1, 20);
  v5 = v4 & 3;
  if ( v5 == 3 )
  {
    FIELD_U32(a1, 148) = 1042744240;
    v6 = FIELD_F32(a1, 6364);
    FIELD_F32(a1, 6320) = v6;
    v7 = FIELD_F32(a1, 6360);
    v8 = flt_60B09C80[(v4 >> 12) & 7];
    v9 = v7 * 0.4;
    v10 = 0.1631;
    v11 = v7;
    FIELD_F32(a1, 6324) = v7;
    *v3 = v7 * 0.4;
    while ( 1 )
    {
      if ( v9 >= v11 )
      {
        if ( v9 <= v11 )
          goto LABEL_12;
        v9 = v9 - v6;
        *v3 = v9;
        if ( v9 >= v11 )
          goto LABEL_12;
      }
      else
      {
        v9 = v9 + v6;
        *v3 = v9;
        if ( v9 <= v11 )
          goto LABEL_12;
      }
      v9 = v11;
      *v3 = v11;
LABEL_12:
      v10 = v9 + v10;
      if ( v10 >= (float)(v8 + -0.28) )
      {
        v11 = FIELD_F32(a1, 6376) * v7;
        FIELD_F32(a1, 6324) = v11;
      }
      if ( v10 >= v8 )
      {
        FIELD_F32(a1, 148) = v10;
        (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CBCB34);
        goto LABEL_30;
      }
    }
  }
  if ( v5 != 2 )
  {
    if ( v5 == 1 )
    {
      FIELD_U32(a1, 148) = 1042744240;
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CBCB10);
    }
    else
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBCA80);
    }
    goto LABEL_30;
  }
  FIELD_U32(a1, 148) = 1042744240;
  v12 = FIELD_F32(a1, 6364);
  FIELD_F32(a1, 6320) = v12;
  v13 = FIELD_F32(a1, 6360);
  v14 = flt_60B09C80[(v4 >> 12) & 7];
  v15 = v13 * 0.4;
  v16 = 0.1631;
  FIELD_F32(a1, 6324) = v13;
  v17 = v14 * 0.5;
  *v3 = v13 * 0.4;
  if ( (float)(v14 * 0.5) <= 0.1631 )
    goto LABEL_28;
  v18 = v14 + -0.28;
  v19 = v13;
  do
  {
    if ( v15 >= v19 )
    {
      if ( v15 > v19 )
      {
        v15 = v15 - v12;
        *v3 = v15;
        if ( v15 < v19 )
        {
LABEL_23:
          v15 = v19;
          *v3 = v19;
        }
      }
    }
    else
    {
      v15 = v15 + v12;
      *v3 = v15;
      if ( v15 > v19 )
        goto LABEL_23;
    }
    v16 = v15 + v16;
    if ( v16 >= v18 )
    {
      v19 = FIELD_F32(a1, 6376) * v13;
      FIELD_F32(a1, 6324) = v19;
    }
  }
  while ( v16 < v17 );
  FIELD_F32(a1, 148) = v16;
LABEL_28:
  FIELD_U8(a1, 6400) = 1;
  (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CBCB10);
LABEL_30:
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 632))(a1);
  return 1;
}
