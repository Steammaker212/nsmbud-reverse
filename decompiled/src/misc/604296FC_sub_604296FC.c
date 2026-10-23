/* sub_604296FC
 * address: 0x604296FC   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604296FC(int a1, int a2, _DWORD *a3, int *a4, _DWORD *a5)
{
  int v8; // r4
  int *v9; // r7
  int v10; // t1
  int result; // r0
  int v12; // r2
  int v13; // r3
  int v14; // r7

  v8 = FIELD_U32(a1, 4);
  v9 = &dword_60C9C080[2 * a2];
  v10 = v9[14];
  v9 += 14;
  (*(void (__fastcall **)(int *))(v10 + 12))(v9);
  result = sub_604293E8(v8, (const char *)v9[1]);
  if ( result >= 0 )
  {
    v12 = FIELD_U32(a1, 4);
    v13 = *(_DWORD *)(*(_DWORD *)v12 + 88) + 32 * result;
    if ( FIELD_S32(v13, 20) >= 0 )
    {
      *(_DWORD *)(FIELD_U32(v12, 8) + 4 * ((unsigned int)result >> 5)) |= 1 << (result & 0x1F);
      FIELD_U8(v12, 28) |= 1u;
      v14 = FIELD_U16(v13, 24);
      if ( *(int *)(*(_DWORD *)(*(_DWORD *)v12 + 88) + 32 * v14 + 20) >= 0 )
      {
        *(_DWORD *)(FIELD_U32(v12, 8) + 4 * ((unsigned __int16)v14 >> 5)) |= 1 << (v14 & 0x1F);
        FIELD_U8(v12, 28) |= 1u;
      }
      result = FIELD_U32(v12, 44) + FIELD_U16(v13, 18);
      FIELD_U32(result, 4) = *a3;
      FIELD_U32(result, 8) = a3[1];
      FIELD_F32(result, 12) = (float)((float)*a4 * 3.1416) / 2147500000.0;
      FIELD_U32(result, 16) = *a5;
      FIELD_U32(result, 20) = a5[1];
    }
  }
  return result;
}
