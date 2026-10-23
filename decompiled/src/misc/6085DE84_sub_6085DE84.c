/* sub_6085DE84
 * address: 0x6085DE84   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6085DE84(int a1, int a2)
{
  unsigned int result; // r0
  unsigned int v5; // r10
  float v6; // s0
  unsigned __int16 *v7; // r7
  float v8; // s16
  unsigned int v9; // r11
  float v10; // s18
  unsigned int v11; // r6
  unsigned __int16 *v12; // r4
  _BYTE v13[57]; // [sp+7h] [bp-39h] BYREF

  result = FIELD_U32(a1, 260);
  v5 = FIELD_U32(result, 116);
  if ( !v5 )
    return result;
  v6 = sub_6085ED90(a1, a2);
  v7 = *(unsigned __int16 **)(a1 + 172);
  v8 = v6;
  v9 = 0;
  v10 = **(float **)(a1 + 264);
  while ( (FIELD_U8(a1, 217) & 2) == 0 )
  {
    v10 = **(float **)(a1 + 264) + (float)(v8 * (float)v9);
LABEL_14:
    result = ((int (__fastcall *)(int, unsigned int, float))loc_6085E980)(
               a1,
               *(_DWORD *)(FIELD_U32(a1, 264) + 8) + 52 * v9++,
               v10);
    if ( v9 >= v5 )
      return result;
  }
  v11 = (*(int (__fastcall **)(int, _BYTE *, unsigned __int16 *))(*(_DWORD *)a2 + 36))(a2, v13, v7);
  result = v13[0];
  if ( v13[0] )
  {
    v12 = v7;
    if ( !v11 )
      return result;
LABEL_12:
    v7 = (unsigned __int16 *)v11;
    if ( v9 )
      v10 = v10
          + (float)(v8
                  * (float)((float)(*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 188) + 64))(
                                     FIELD_U32(a1, 188),
                                     *v12)
                          + FIELD_F32(a1, 204)));
    goto LABEL_14;
  }
  while ( 1 )
  {
    v12 = (unsigned __int16 *)v11;
    if ( v11 <= (unsigned int)v7 )
      return result;
    result = FIELD_U32(a1, 172) + 2 * FIELD_U16(a1, 214);
    if ( result < v11 )
      return result;
    v11 = (*(int (__fastcall **)(int, _BYTE *, unsigned int))(*(_DWORD *)a2 + 36))(a2, v13, v11);
    result = v13[0];
    v7 = v12;
    if ( v13[0] )
    {
      if ( !v11 )
        return result;
      goto LABEL_12;
    }
  }
}
