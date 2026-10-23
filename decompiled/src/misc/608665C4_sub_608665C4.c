/* sub_608665C4
 * address: 0x608665C4   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608665C4(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        int a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12)
{
  int v13; // r12
  unsigned int v14; // r10
  unsigned int result; // r0
  int v16; // r3
  unsigned int v17; // r8
  int v18; // lr
  bool v19; // cc
  int v20; // r1
  bool v21; // cc
  int v22; // r0
  int v23; // r5
  int v24; // r6
  int v25; // r11
  int v26; // r6
  int v27; // r0
  int v28; // r9
  int v29; // r5
  int v30; // r0
  unsigned int v31; // r1
  bool v32; // cf
  unsigned int v33; // r1

  v13 = a2;
  v14 = a12;
  result = a1[3];
  v16 = a5;
  v17 = a6;
  v18 = a7;
  v19 = (unsigned __int8)(result & 3) < a2;
  if ( (unsigned __int8)(result & 3) >= a2 )
    v19 = (int)((result >> 2) & 3) < a3;
  if ( v19 )
    goto LABEL_8;
  v20 = (result >> 4) & 3;
  v21 = v20 < a4;
  if ( v20 >= a4 )
    v21 = (int)((result >> 6) & 7) < a5;
  if ( v21
    || ((result >> 9) & 1) < a6
    || (int)((result >> 10) & 3) < a7
    || ((result >> 12) & 1) < a8
    || (int)((result >> 13) & 3) < a9
    || ((result >> 15) & 1) < a10 )
  {
    goto LABEL_8;
  }
  v31 = HIWORD(result) & 1;
  v32 = v31 >= a11;
  if ( v31 >= a11 )
  {
    v33 = (result >> 17) & 1;
    result = 1;
    v32 = v33 >= a12;
  }
  if ( !v32 )
  {
LABEL_8:
    v22 = a1[5];
    if ( v22 )
    {
      v23 = a3;
      v24 = v13;
      sub_60855BF0(v22);
      v18 = a7;
      v17 = a6;
      v16 = a5;
      v13 = v24;
      a3 = v23;
      v14 = a12;
      a1[5] = 0;
      a1[3] &= 0xFFFC0000;
      a1[4] &= 0xFFFC0000;
    }
    v25 = v16;
    v26 = a3;
    v27 = ((16 * a4) | (4 * (a8 & 1)) & 0xF7 | (8 * (a8 & 1))) + 4 * (v18 + v16) + 20 * (a9 + a3);
    if ( a11 )
      v27 += 16 * v16 + 28;
    v28 = v13;
    if ( v14 )
      v27 += 116;
    v29 = v18;
    v30 = sub_60855BC8(v27 + 8 * (v17 + v13 + a10));
    a1[5] = v30;
    if ( v30 )
    {
      sub_608676E0(a1, v28, v26, a4, v25, a6, v29, a8, a9, a10, a11, v14);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
