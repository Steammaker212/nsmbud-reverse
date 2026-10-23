/* sub_608ECD00
 * address: 0x608ECD00   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ECD00(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r0
  float v5; // s0
  int v6; // r0
  int v7; // r1
  void (__fastcall *v8)(int, int *); // r2
  int v9; // [sp+4h] [bp-Ch] BYREF

  result = FIELD_U32(a1, 496);
  switch ( result )
  {
    case 3:
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 88))(a1);
      v6 = FIELD_U32(a1, 480);
      v7 = FIELD_U32(a1, 484) - v6;
      if ( v7 )
        FIELD_F32(a1, 488) = 1.0 - (float)((float)(FIELD_U32(a1, 472) - v6) / (float)v7);
      break;
    case 2:
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 88))(a1);
      FIELD_U32(a1, 488) = 1065353216;
      break;
    case 1:
      v3 = FIELD_U32(a1, 476);
      v4 = FIELD_U32(a1, 472);
      if ( v3 < 1 )
        v5 = 0.0;
      else
        v5 = (float)v4 / (float)(v3 + 1);
      FIELD_F32(a1, 488) = v5;
      if ( !v4 )
      {
        v8 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 92);
        v9 = 2;
        v8(a1, &v9);
      }
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 88))(a1);
      break;
    default:
      return result;
  }
  result = FIELD_U32(a1, 472) + 1;
  FIELD_U32(a1, 472) = result;
  return result;
}
