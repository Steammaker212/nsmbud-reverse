/* sub_6060D720
 * address: 0x6060D720   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060D720(int a1, unsigned int a2, float *a3)
{
  unsigned int v6; // r2
  int v7; // r1
  int v8; // r6
  int v9; // r0
  int v10; // r7
  float v11; // s0
  float v12; // s0
  int result; // r0
  _BYTE *v14; // r4
  int v15; // t1

  if ( (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << a2)) == 0 )
  {
    v7 = 0;
LABEL_13:
    v8 = 0;
    v10 = 0;
    goto LABEL_14;
  }
  v6 = 0;
  v7 = 0;
  if ( a2 < 4 )
    v6 = a2;
  v8 = *(_DWORD *)(PlayerMgr_instance + 4 * v6 + 32);
  if ( !v8 )
    goto LABEL_13;
  v9 = sub_607AE118(*(_DWORD *)(PlayerMgr_instance + 4 * v6 + 32), 0);
  v10 = 0;
  v7 = 1;
  if ( v9 == 1 )
  {
    v11 = FIELD_F32(v8, 108);
    if ( *a3 <= v11 && v11 <= a3[2] )
    {
      v12 = FIELD_F32(v8, 112);
      if ( a3[1] <= v12 && v12 <= a3[3] )
      {
        v7 = 1;
        v10 = 1;
      }
    }
  }
LABEL_14:
  if ( a2 < 4 )
    a1 += a2;
  v15 = FIELD_U8(a1, 6104);
  v14 = (_BYTE *)(a1 + 6104);
  result = v15;
  if ( v15 )
  {
    if ( v7 == 1 )
    {
      result = FIELD_U8(v8, 1211);
      if ( (result & 8) != 0 )
      {
        result = sub_603F0040(dword_60C99D6C, a2, 29, 0);
        *v14 = 0;
      }
    }
    if ( !v10 )
    {
      result = sub_603F01A0(dword_60C99D6C, a2, 29, 0);
      *v14 = 0;
    }
  }
  else if ( v10 == 1 )
  {
    sub_603EFEAC(dword_60C99D6C, a2, 29);
    *v14 = 1;
    return 1;
  }
  return result;
}
