/* sub_60973D88
 * address: 0x60973D88   size: 824   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60973D88(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char v7; // r7
  int v8; // r5
  int v13; // r1
  int v14; // r0
  int v15; // r1
  int v16; // r3
  int v17; // r8
  int v18; // r7
  int v19; // r4
  int v20; // r2
  int v21; // r7
  int v22; // r4
  int v23; // r6
  int v24; // r2
  int v25; // r4
  int v26; // r2
  int v27; // r3
  int v28; // r2
  int v29; // r2
  unsigned int v30; // r3
  unsigned int v31; // r1
  unsigned __int16 v33[8]; // [sp+8h] [bp-48h] BYREF
  int v34; // [sp+18h] [bp-38h]
  int v35; // [sp+1Ch] [bp-34h]

  v7 = a7;
  v8 = a5;
  if ( a7 )
  {
    sub_60972394(v33);
    if ( a7 != 1 )
      v7 = 0;
    sub_609723AC((int)v33, a1, a2, a6, v7, 0);
    sub_60972434(v33, a3, a4, a5);
    sub_60972444(v33);
    return v35 + v34;
  }
  v14 = sub_60920D90(a2);
  v13 = 0;
  switch ( a1 )
  {
    case 0:
      v13 = v14 * a3;
      if ( a6 >= 2 )
        goto LABEL_15;
      return v13;
    case 1:
      v15 = a4 * a3;
      goto LABEL_11;
    case 2:
    case 4:
      v15 = a4 * a3 * a5;
      goto LABEL_11;
    case 3:
      v15 = a5 * a3;
LABEL_11:
      v13 = v15 * v14;
      if ( a6 < 2 )
        return v13;
      goto LABEL_15;
    case 8:
      v13 = 6 * a3 * a4 * v14;
      goto LABEL_14;
    default:
LABEL_14:
      if ( a6 < 2 )
        return v13;
LABEL_15:
      if ( a1 )
      {
        v16 = a6 - 1;
        v17 = a1 - 1;
        do
        {
          switch ( v17 )
          {
            case 0:
              v18 = 1;
              v19 = 1;
              if ( a3 >> 1 > 1 )
                v18 = a3 >> 1;
              if ( a4 >> 1 > 1 )
                v19 = a4 >> 1;
              a3 = v18;
              if ( v8 <= 1 )
                v8 = 1;
              a4 = v19;
              v20 = v19 * v14 * v18;
              break;
            case 1:
              v21 = 1;
              v22 = 1;
              if ( a4 >> 1 > 1 )
                v21 = a4 >> 1;
              v23 = 1;
              if ( v8 >> 1 > 1 )
                v23 = v8 >> 1;
              v24 = v23 * v14;
              v8 = v23;
              if ( a3 >> 1 > 1 )
                v22 = a3 >> 1;
              goto LABEL_46;
            case 2:
              v25 = 1;
              if ( a3 >> 1 > 1 )
                v25 = a3 >> 1;
              if ( v8 <= 1 )
                v8 = 1;
              a3 = v25;
              if ( a4 <= 1 )
                a4 = 1;
              v20 = v8 * v14 * v25;
              break;
            case 3:
              v22 = 1;
              v21 = 1;
              if ( a3 >> 1 > 1 )
                v22 = a3 >> 1;
              if ( a4 >> 1 > 1 )
                v21 = a4 >> 1;
              if ( v8 <= 1 )
                v8 = 1;
              v24 = v8 * v14;
LABEL_46:
              v26 = v24 * v21;
              goto LABEL_60;
            case 7:
              v22 = 1;
              v21 = 1;
              if ( a3 >> 1 > 1 )
                v22 = a3 >> 1;
              if ( a4 >> 1 > 1 )
                v21 = a4 >> 1;
              v26 = 6 * v14 * v21;
              if ( v8 <= 1 )
                v8 = 1;
LABEL_60:
              v20 = v26 * v22;
              a4 = v21;
              a3 = v22;
              break;
            default:
              v20 = 0;
              if ( v8 <= 1 )
                v8 = 1;
              if ( a4 <= 1 )
                a4 = 1;
              if ( a3 <= 1 )
                a3 = 1;
              break;
          }
          v13 += v20;
          --v16;
        }
        while ( v16 );
        return v13;
      }
      if ( (a6 & 1) != 0 )
      {
        v28 = 1;
        if ( a6 == 2 )
          return v13;
        goto LABEL_69;
      }
      v27 = 1;
      v28 = 2;
      if ( a3 >> 1 > 1 )
        v27 = a3 >> 1;
      v13 += v27 * v14;
      a3 = v27;
      if ( a6 != 2 )
      {
LABEL_69:
        v29 = a6 - v28;
        do
        {
          v30 = 1;
          if ( a3 >> 1 > 1 )
            v30 = a3 >> 1;
          a3 = 1;
          v31 = v13 + v30 * v14;
          if ( v30 >> 1 > 1 )
            a3 = v30 >> 1;
          v29 -= 2;
          v13 = v31 + a3 * v14;
        }
        while ( v29 );
      }
      return v13;
  }
}
