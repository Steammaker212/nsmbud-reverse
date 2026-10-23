/* sub_60988878
 * address: 0x60988878   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60988878(int result, int a2, int a3, _DWORD *a4, int *a5, unsigned int a6)
{
  __int16 v8; // r3
  int v9; // r2
  _WORD *v10; // r5
  __int16 v11; // [sp+4h] [bp-1Ch] BYREF
  _WORD v12[13]; // [sp+6h] [bp-1Ah] BYREF

  if ( *a4 + 11 < a6 )
  {
    v12[0] = 0;
    v11 = 0;
    (*(void (__fastcall **)(int, _WORD *, __int16 *, _DWORD))(*(_DWORD *)result + 140))(
      result,
      v12,
      &v11,
      FIELD_U8(a2, 8));
    result = v12[0];
    if ( v12[0] )
    {
      v8 = v11;
      v9 = 2 * *a4;
      *(_WORD *)(a3 + v9) = 14;
      v10 = (_WORD *)(a3 + v9);
      v10[1] = 0;
      v10[2] = 129;
      v10[3] = 2;
      v10[4] = v8;
      v10[5] = result;
      v10[6] = 14;
      v10[7] = 0;
      v10[8] = 129;
      v10[9] = 2;
      v10[10] = -1;
      *a4 += 11;
      result = *a5 + 1;
      *a5 = result;
    }
  }
  return result;
}
