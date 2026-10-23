/* sub_608013D0
 * address: 0x608013D0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608013D0(int *a1, float *a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r1
  int v10; // r5
  unsigned __int8 *v11; // r0
  __int16 *v12; // r0
  bool v13; // zf
  int v14; // r0
  int v15; // r1
  int v16; // r1
  float result; // s0
  float v18[3]; // [sp+4h] [bp-2Ch] BYREF
  int v19; // [sp+10h] [bp-20h]
  int v20; // [sp+14h] [bp-1Ch] BYREF

  v8 = a1[5];
  v9 = FIELD_U8(v8, 20);
  v10 = FIELD_U8(v8, 21);
  if ( !(v10 | v9) )
    goto LABEL_7;
  v11 = sub_60727908(a1[4], v9);
  if ( !v11 )
    goto LABEL_7;
  v12 = (__int16 *)(*(_DWORD *)(a1[4] + 60) + 20 * *((unsigned __int16 *)v11 + 1));
  v13 = v12 == 0;
  if ( v12 )
  {
    v12 += 10 * v10;
    v13 = v12 == 0;
  }
  if ( !v13 )
  {
    v16 = v12[1];
    result = (float)*v12;
    *a2 = result;
    a2[1] = -(float)v16;
  }
  else
  {
LABEL_7:
    v14 = a1[7];
    if ( v14 )
    {
      v18[0] = 3.4028e38;
      v18[1] = 3.4028e38;
      v18[2] = -3.4028e38;
      v19 = -8388609;
      result = sub_60800BCC(v14, &v20, v18);
      v15 = v19;
      *a2 = v18[0];
      *((_DWORD *)a2 + 1) = v15;
    }
    else
    {
      sub_608016E8(a1[8], a2, a3, a4);
    }
  }
  return result;
}
