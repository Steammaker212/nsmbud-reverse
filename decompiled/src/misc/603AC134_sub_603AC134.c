/* sub_603AC134
 * address: 0x603AC134   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603AC134(int a1)
{
  int result; // r0
  _DWORD *v3; // r6
  float v4; // s0
  float v5; // s2
  float v6; // s4
  float v7; // s0
  int (__fastcall *v8)(int, int *); // r2
  int v9; // r0
  int *v10; // r1

  v3 = (_DWORD *)(a1 + 6920);
  result = FIELD_U32(a1, 6920);
  switch ( result )
  {
    case 2:
      if ( FIELD_U8(PlayerMgr_instance, 156) )
      {
        v8 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
      }
      else
      {
        if ( FIELD_U32(a1, 6656) )
          v9 = ((int (__fastcall *)(int))loc_603AE1DC)(a1);
        else
          v9 = ((int (__fastcall *)(int))loc_603AE00C)(a1);
        v8 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
        if ( v9 )
        {
          v10 = &dword_60C97B6C;
          return v8(a1, v10);
        }
      }
      v10 = &dword_60C97B4C;
      return v8(a1, v10);
    case 1:
      result = FIELD_U32(a1, 6900);
      if ( result <= 0 )
      {
        result = 2;
        *v3 = 2;
      }
      break;
    case 0:
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 6904, 0.0, 0.065, 1.0, 0.01);
      v4 = FIELD_F32(a1, 6904);
      if ( v4 == 0.0 )
      {
        FIELD_U32(a1, 6900) = 15;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        FIELD_U32(a1, 128) = 0;
        *v3 = 1;
      }
      v5 = v4 * FIELD_F32(a1, 6908);
      v6 = v4 * FIELD_F32(a1, 6912);
      v7 = v4 * FIELD_F32(a1, 6916);
      FIELD_F32(a1, 120) = v5;
      FIELD_F32(a1, 124) = v6;
      FIELD_F32(a1, 128) = v7;
      FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + v5;
      FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + v6;
      FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + v7;
      return a1 + 6916;
  }
  return result;
}
