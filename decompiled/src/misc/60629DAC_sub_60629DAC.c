/* sub_60629DAC
 * address: 0x60629DAC   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60629DAC(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  int v4; // r1
  int v5; // r7
  int v6; // r6
  float v7; // s0
  int (__fastcall *v8)(int, int, int); // r5
  int v9; // r1

  result = sub_605CC878(a1);
  v3 = (_DWORD *)result;
  if ( result )
  {
    v4 = FIELD_U32(a1, 6124);
    FIELD_U32(a1, 6124) = v4 | 2;
    v5 = FIELD_U32(result, 1216) & 0x2000;
    if ( !v5 )
    {
      FIELD_U32(a1, 6124) = v4 & 0xFFFFFFFD;
      FIELD_U32(a1, 328) = 0;
    }
    if ( (FIELD_U8(result, 1205) & 0x40) == 0 )
    {
      sub_6079D4B0(result, a1 + 108);
      if ( sub_6075EDF8(v3) == 1 )
      {
        FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 0.0;
        FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -4.9;
        FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + 0.0;
      }
      else if ( v3[330] == 9 )
      {
        FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 0.0;
        FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + 5.0;
        FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + 0.0;
        if ( v5 )
          FIELD_U32(a1, 108) = v3[27];
      }
    }
    v6 = v3[40];
    FIELD_U32(a1, 160) = sub_607BA5CC(v3) + v6;
    sub_605CC4D8(a1, v7);
    result = FIELD_U32(a1, 2872) & 0x10400;
    if ( result == 1024 )
    {
      v8 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 84);
      v9 = sub_605CC390(a1);
      return v8(a1, v9, 20);
    }
  }
  return result;
}
