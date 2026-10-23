/* sub_607DD164
 * address: 0x607DD164   size: 844   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DD164(int a1)
{
  int result; // r0
  float v3; // s0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r2
  int v14; // r3
  int v15; // r5
  int v16; // r2
  int v17; // r3
  int v18; // r5
  float v19; // s0
  float v20; // s1
  int v21; // r5
  int v22; // r0
  int v23; // [sp+0h] [bp-20h] BYREF
  int v24; // [sp+4h] [bp-1Ch]
  int v25; // [sp+8h] [bp-18h]
  int v26; // [sp+Ch] [bp-14h]

  result = FIELD_U32(a1, 16) - 1;
  switch ( result )
  {
    case 0:
      v3 = FIELD_F32(a1, 64);
      if ( v3 > 0.0 )
      {
        result = FIELD_U32(a1, 20) + 16616;
        v3 = v3 - *(float *)result;
        FIELD_F32(a1, 64) = v3;
      }
      if ( v3 <= 0.0 )
      {
        result = 2;
        goto LABEL_57;
      }
      return result;
    case 2:
      v4 = FIELD_U32(a1, 24);
      if ( v4 )
      {
        if ( v4 != 1 || !FIELD_U32(a1, 468) )
          goto LABEL_37;
      }
      else if ( !FIELD_U32(a1, 464) )
      {
LABEL_37:
        sub_607DAC10(FIELD_U32(a1, 72));
        goto LABEL_49;
      }
      if ( FIELD_U32(a1, 24) == 1 )
      {
        v7 = FIELD_U32(a1, 468);
        if ( FIELD_U8(a1, 52) )
        {
          v23 = 0;
          v24 = 1126170624;
          v25 = 0;
          v26 = 1134559232;
        }
        else
        {
          v13 = FIELD_U32(a1, 40);
          v14 = FIELD_U32(a1, 44);
          v15 = FIELD_U32(a1, 48);
          v23 = FIELD_U32(a1, 36);
          v24 = v13;
          v25 = v14;
          v26 = v15;
        }
        nn__hid__VibrationWriter__Write(v7, &v23);
      }
      goto LABEL_37;
    case 3:
      v5 = FIELD_U32(a1, 24);
      if ( v5 )
      {
        if ( v5 != 1 || !FIELD_U32(a1, 468) )
          goto LABEL_40;
      }
      else if ( !FIELD_U32(a1, 464) )
      {
        goto LABEL_40;
      }
      if ( FIELD_U32(a1, 24) == 1 )
      {
        v8 = FIELD_U32(a1, 468);
        if ( FIELD_U8(a1, 52) )
        {
          v23 = 0;
          v24 = 1126170624;
          v25 = 0;
          v26 = 1134559232;
        }
        else
        {
          v16 = FIELD_U32(a1, 40);
          v17 = FIELD_U32(a1, 44);
          v18 = FIELD_U32(a1, 48);
          v23 = FIELD_U32(a1, 36);
          v24 = v16;
          v25 = v17;
          v26 = v18;
        }
        nn__hid__VibrationWriter__Write(v8, &v23);
      }
LABEL_40:
      v19 = FIELD_F32(a1, 64);
      if ( v19 > 0.0 )
      {
        v19 = v19 - *(float *)(FIELD_U32(a1, 20) + 16616);
        FIELD_F32(a1, 64) = v19;
      }
      if ( v19 <= 0.0 )
      {
        v20 = FIELD_F32(a1, 68);
        if ( v20 > 0.0 )
        {
          v22 = FIELD_U32(a1, 72);
          v21 = 5;
          if ( v22 )
            sub_607DAC90(v22, 0.0, v20);
        }
        else
        {
          v21 = 6;
          if ( !FIELD_U32(a1, 24) )
            nn__hid__VibrationPlayer__Stop(*(nn__hid__VibrationPlayer **)(a1 + 464));
        }
        FIELD_U32(a1, 16) = v21;
      }
      goto LABEL_49;
    case 4:
      if ( FIELD_U8(a1, 52) )
        goto LABEL_15;
      v6 = FIELD_U32(a1, 24);
      if ( v6 )
      {
        if ( v6 != 1 || !FIELD_U32(a1, 468) )
          goto LABEL_15;
      }
      else if ( !FIELD_U32(a1, 464) )
      {
        goto LABEL_15;
      }
      if ( FIELD_U32(a1, 24) == 1 )
      {
        v9 = FIELD_U32(a1, 468);
        v10 = FIELD_U32(a1, 40);
        v11 = FIELD_U32(a1, 44);
        v12 = FIELD_U32(a1, 48);
        v23 = FIELD_U32(a1, 36);
        v24 = v10;
        v25 = v11;
        v26 = v12;
        nn__hid__VibrationWriter__Write(v9, &v23);
      }
LABEL_15:
      result = FIELD_U32(a1, 72);
      if ( !result )
        return result;
      if ( FIELD_F32(a1, 68) > 0.0 && FIELD_F32(result, 4) == FIELD_F32(result, 8) )
        goto LABEL_54;
      sub_607DAC10(result);
      result = FIELD_U8(a1, 52);
      if ( !FIELD_U8(a1, 52) )
      {
LABEL_49:
        result = FIELD_U32(a1, 20) + 16616;
        FIELD_F32(a1, 60) = *(float *)result + FIELD_F32(a1, 60);
        if ( FIELD_F32(a1, 56) > 0.0 )
        {
          if ( FIELD_S32(a1, 16) < 5 || (result = FIELD_U32(a1, 16), result >= 7) )
          {
            if ( FIELD_S32(a1, 16) > 2 )
            {
              FIELD_U32(a1, 64) = 0;
              FIELD_U32(a1, 68) = 0;
            }
LABEL_54:
            if ( !FIELD_U32(a1, 24) )
              nn__hid__VibrationPlayer__Stop(*(nn__hid__VibrationPlayer **)(a1 + 464));
            result = 6;
LABEL_57:
            FIELD_U32(a1, 16) = result;
          }
        }
      }
      return result;
    default:
      return result;
  }
}
