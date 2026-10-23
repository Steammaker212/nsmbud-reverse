/* sub_607A6D30
 * address: 0x607A6D30   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_607A6D30(int a1)
{
  int v2; // r0
  int *v3; // r6
  float v4; // s2
  float v5; // s0
  float v6; // s2
  float v7; // s0
  float v8; // s2
  float v9; // s0
  int *v10; // r0
  float v11; // s16
  int v12; // r5
  float v13; // s18
  float v14; // s20
  float v15; // s0
  int *v16; // r0
  int v17; // r7
  int *v18; // r0

  v3 = (int *)(a1 + 9704);
  v2 = FIELD_U32(a1, 9704);
  switch ( v2 )
  {
    case 0:
      if ( !FIELD_U32(a1, 9712) )
      {
        sub_607A7010(a1);
        PlayerBase_dispatchVirtual3(a1 + 11356, 83, 0.0);
      }
      goto LABEL_33;
    case 1:
      v4 = FIELD_F32(a1, 124);
      if ( v4 <= 2.5 )
      {
        if ( v4 <= 0.5 )
        {
          v10 = dword_607A6FFC;
          if ( v4 > -0.5 )
            v10 = &dword_607A6FFC[1];
          v5 = *(float *)v10;
        }
        else
        {
          v5 = -0.25;
        }
      }
      else
      {
        v5 = -0.06;
      }
      FIELD_F32(a1, 100) = v5;
      FIELD_F32(a1, 112) = v4 + FIELD_F32(a1, 112);
      ((void (__fastcall *)(int))loc_60001018)(a1);
      if ( FIELD_U8(a1, 12012) )
      {
        if ( !FIELD_U32(a1, 9712) )
        {
          *v3 = 2;
          goto LABEL_35;
        }
      }
      else
      {
        v11 = FIELD_F32(a1, 112) + FIELD_F32(a1, 496);
        v12 = dword_60CC6484;
        v13 = FIELD_F32(dword_60CC6484, 108);
        v14 = FIELD_F32(dword_60CC6484, 124);
        if ( sub_607FCAA8(dword_60CC6484) == 3 )
          v15 = (float)(FIELD_F32(v12, 124) - FIELD_F32(v12, 108)) + -8.0;
        else
          v15 = (float)(v14 - v13) + -24.0;
        v17 = 2;
        if ( v11 < v15
          || sub_607FCAA8(v12) == 3
          && (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 496)) > (float)(FIELD_F32(v12, 124) + 64.0) )
        {
LABEL_28:
          *v3 = v17;
LABEL_35:
          if ( sub_60793CA8(FIELD_U32(a1, 11360)) == 1 )
            PlayerBase_dispatchVirtual3(a1 + 11356, 85, 0.0);
          return sub_60761440((_BYTE *)a1);
        }
      }
LABEL_33:
      v2 = *v3;
LABEL_34:
      if ( v2 > 0 )
        goto LABEL_35;
      return sub_60761440((_BYTE *)a1);
    case 2:
      v6 = FIELD_F32(a1, 124);
      if ( v6 <= 2.5 )
      {
        if ( v6 <= 0.5 )
        {
          v16 = dword_607A6FFC;
          if ( v6 > -0.5 )
            v16 = &dword_607A6FFC[1];
          v7 = *(float *)v16;
        }
        else
        {
          v7 = -0.25;
        }
      }
      else
      {
        v7 = -0.06;
      }
      FIELD_F32(a1, 100) = v7;
      FIELD_F32(a1, 112) = v6 + FIELD_F32(a1, 112);
      ((void (__fastcall *)(int))loc_60001018)(a1);
      sub_607A6720(a1);
      v17 = 3;
      goto LABEL_28;
    case 3:
      v8 = FIELD_F32(a1, 124);
      if ( v8 <= 2.5 )
      {
        if ( v8 <= 0.5 )
        {
          v18 = dword_607A6FFC;
          if ( v8 > -0.5 )
            v18 = &dword_607A6FFC[1];
          v9 = *(float *)v18;
        }
        else
        {
          v9 = -0.25;
        }
      }
      else
      {
        v9 = -0.06;
      }
      FIELD_F32(a1, 100) = v9;
      FIELD_F32(a1, 112) = v8 + FIELD_F32(a1, 112);
      ((void (__fastcall *)(int))loc_60001018)(a1);
      goto LABEL_33;
    default:
      goto LABEL_34;
  }
}
