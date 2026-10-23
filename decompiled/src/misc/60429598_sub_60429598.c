/* sub_60429598
 * address: 0x60429598   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60429598(int a1, unsigned int a2, _DWORD *a3, int *a4, _DWORD *a5)
{
  unsigned int v6; // r7
  int v9; // r6
  int *v10; // r5
  int v11; // t1
  int result; // r0
  int v13; // r3
  int v14; // r1
  int v15; // r3
  int v16; // r2

  v6 = a2;
  v9 = FIELD_U32(a1, 4);
  v10 = &dword_60C9C080[2 * a2];
  v11 = v10[14];
  v10 += 14;
  (*(void (__fastcall **)(int *))(v11 + 12))(v10);
  result = sub_604293E8(v9, (const char *)v10[1]);
  if ( result >= 0 && *(int *)(*(_DWORD *)(**(_DWORD **)(a1 + 4) + 88) + 32 * result + 20) >= 0 )
  {
    if ( v6 >= 8 )
      v6 = 0;
    v13 = a1 + 24 * v6;
    FIELD_U32(v13, 8) = 0;
    FIELD_U32(v13, 12) = *a3;
    FIELD_U32(v13, 16) = a3[1];
    FIELD_F32(v13, 20) = (float)((float)*a4 * 3.1416) / 2147500000.0;
    FIELD_U32(v13, 24) = *a5;
    FIELD_U32(v13, 28) = a5[1];
    v14 = FIELD_U32(a1, 4);
    v15 = *(_DWORD *)(*(_DWORD *)v14 + 88);
    v16 = v15 + 32 * result;
    if ( FIELD_S32(v16, 20) >= 0 )
    {
      *(_DWORD *)(FIELD_U32(v14, 8) + 4 * ((unsigned int)result >> 5)) |= 1 << (result & 0x1F);
      FIELD_U8(v14, 28) |= 1u;
      v15 = *(_DWORD *)(*(_DWORD *)v14 + 88);
    }
    result = FIELD_U16(v16, 24);
    if ( *(int *)(v15 + 32 * result + 20) >= 0 )
    {
      *(_DWORD *)(FIELD_U32(v14, 8) + 4 * ((unsigned __int16)result >> 5)) |= 1 << (result & 0x1F);
      result = FIELD_U8(v14, 28) | 1;
      FIELD_U8(v14, 28) = result;
    }
  }
  return result;
}
