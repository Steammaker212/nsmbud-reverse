/* sub_6084B75C
 * address: 0x6084B75C   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084B75C(int a1, int a2, int *a3)
{
  int result; // r0
  int v7; // r2
  _DWORD *v8; // r1
  int v9; // r3
  int v10; // r7
  _DWORD *v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r7
  __int64 v15; // [sp+8h] [bp-40h] BYREF
  int v16; // [sp+10h] [bp-38h]
  int v17; // [sp+14h] [bp-34h]
  __int64 v18; // [sp+18h] [bp-30h] BYREF
  int v19; // [sp+20h] [bp-28h]
  int v20; // [sp+24h] [bp-24h]

  result = a3[28];
  if ( result >= 1 )
  {
    result = a3[32];
    if ( (*(_BYTE *)result & 2) == 0 && FIELD_U32(a1, 132) >= a3[29] )
    {
      v20 = 0;
      v19 = 0;
      v17 = 0;
      v16 = 0;
      v18 = 0;
      v15 = 0;
      v7 = FIELD_U32(result, 28);
      v8 = (_DWORD *)(FIELD_U32(result, 8) + 16 * v7);
      LODWORD(v18) = *v8;
      v9 = v8[1];
      v10 = v8[2];
      v20 = v8[3];
      v19 = v10;
      HIDWORD(v18) = v9;
      v18 += *a3;
      v11 = (_DWORD *)(FIELD_U32(result, 8) + 16 * v7);
      LODWORD(v15) = *v11;
      v12 = v11[1];
      v13 = v11[2];
      v17 = v11[3];
      v16 = v13;
      HIDWORD(v15) = v12;
      v15 += a3[1];
      v14 = a3[2];
      if ( *((_BYTE *)a3 + 133) )
      {
        ((void (__fastcall *)(int, int, int *, unsigned int, __int64 *, __int64 *))sub_6084B8F0)(
          a1,
          a2,
          a3 + 3,
          v14 & 0xFFFFFFFE,
          &v18,
          &v15);
        v18 += (*(_DWORD *)(a3[32] + 16) + 127) & -*(_DWORD *)(a3[32] + 16);
        return sub_6084B8F0(a1, a2, a3 + 3, v14 | 1, &v18, &v15, v15, HIDWORD(v15), v16, v17);
      }
      else
      {
        return sub_6084B8F0(a1, a2, a3 + 3, a3[2], &v18, &v15, v15, HIDWORD(v15), v16, v17);
      }
    }
  }
  return result;
}
