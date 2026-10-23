/* sub_60161340
 * address: 0x60161340   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60161340(int a1, _DWORD *a2, int a3)
{
  float *v6; // r0
  float v7; // s0
  int result; // r0
  int v9; // r12
  int v10; // r2
  int v11; // r1
  int v12; // r0
  float v13[8]; // [sp+10h] [bp-20h] BYREF

  v6 = *(float **)(a1 + 152);
  v7 = (float)(v6[1] + FIELD_F32(a1, 176)) + FIELD_F32(a1, 192);
  v13[0] = (float)(*v6 + FIELD_F32(a1, 172)) + FIELD_F32(a1, 188);
  v13[1] = v7;
  result = (*(int (__fastcall **)(_DWORD *))(*a2 + 28))(a2);
  v9 = result;
  v10 = FIELD_U8(result, 84);
  if ( v10 != 255 )
  {
    v11 = FIELD_U32(a1, 144);
    v12 = a2[2 * a3 + 632];
    if ( !v11 )
    {
      if ( (v12 & 8) != 0 )
      {
        sub_60584938(dword_60CAF15C, v9, v13, (char)v10, **(unsigned __int8 **)(a1 + 160));
      }
      else if ( (v12 & 4) != 0 )
      {
        sub_60584A10(dword_60CAF15C, v9, v13, (char)v10, *(_DWORD *)(a2[1336] + 40), *(_DWORD *)(a2[1336] + 44));
      }
      goto LABEL_12;
    }
    if ( (v12 & 8) != 0 )
    {
      SE_OBJ_GET_COIN_ref_2(dword_60CAF15C, v9, v13, (char)v10, *(_DWORD *)(a2[1336] + 40), *(_DWORD *)(a2[1336] + 44));
LABEL_12:
      FIELD_U8(a1, 220) = 1;
      result = FIELD_U32(a1, 140) | 1;
      FIELD_U32(a1, 140) = result;
      return result;
    }
    if ( (v12 & 4) == 0 )
      goto LABEL_12;
    result = sub_60584834(dword_60CAF15C, v11, v9, a2[1336] + 40);
    if ( result )
      goto LABEL_12;
  }
  return result;
}
