/* sub_6085ED90
 * address: 0x6085ED90   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6085ED90(int a1, int a2)
{
  unsigned int v4; // r10
  float v6; // s16
  unsigned __int16 *v7; // r4
  unsigned int v8; // r11
  unsigned int v9; // r7
  unsigned __int16 *v10; // r6
  _BYTE v11[49]; // [sp+7h] [bp-31h] BYREF

  v4 = *(_DWORD *)(FIELD_U32(a1, 260) + 116);
  if ( (FIELD_U8(a1, 217) & 2) != 0 )
  {
    if ( v4 )
    {
      v6 = 0.0;
      v7 = *(unsigned __int16 **)(a1 + 172);
      v8 = 0;
      while ( 1 )
      {
        v9 = (*(int (__fastcall **)(int, _BYTE *, unsigned __int16 *))(*(_DWORD *)a2 + 36))(a2, v11, v7);
        if ( !v11[0] )
          break;
        v10 = v7;
        if ( !v9 )
          goto LABEL_16;
LABEL_13:
        if ( v8 )
          v6 = v6
             + (float)((float)(*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 188) + 64))(
                                FIELD_U32(a1, 188),
                                *v10)
                     + FIELD_F32(a1, 204));
        ++v8;
        v7 = (unsigned __int16 *)v9;
        if ( v8 >= v4 )
          goto LABEL_16;
      }
      while ( 1 )
      {
        v10 = (unsigned __int16 *)v9;
        if ( v9 <= (unsigned int)v7 || FIELD_U32(a1, 172) + 2 * (unsigned int)FIELD_U16(a1, 214) < v9 )
          break;
        v9 = (*(int (__fastcall **)(int, _BYTE *, unsigned int))(*(_DWORD *)a2 + 36))(a2, v11, v9);
        v7 = v10;
        if ( v11[0] )
        {
          if ( !v9 )
            break;
          goto LABEL_13;
        }
      }
LABEL_16:
      if ( v6 == 0.0 )
        return 0.0;
      else
        return *(float *)(FIELD_U32(a1, 264) + 4) / v6;
    }
    else
    {
      return 0.0;
    }
  }
  else if ( v4 == 1 )
  {
    return 0.0;
  }
  else
  {
    return *(float *)(FIELD_U32(a1, 264) + 4) / (float)(v4 - 1);
  }
}
