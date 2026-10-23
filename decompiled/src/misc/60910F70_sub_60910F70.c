/* sub_60910F70
 * address: 0x60910F70   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60910F70(_QWORD *a1, _DWORD *a2)
{
  int v4; // r7
  unsigned int v5; // r4
  int v6; // r5
  int v7; // r6
  bool v8; // zf
  int v9; // r0
  unsigned int v10; // r8
  int v11; // r6
  int v12; // r0
  unsigned int v13; // r1
  unsigned __int64 v14; // kr00_8
  _DWORD *result; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // [sp+Ch] [bp-4Ch] BYREF
  int v20; // [sp+10h] [bp-48h] BYREF
  int v21; // [sp+14h] [bp-44h] BYREF
  int v22[4]; // [sp+18h] [bp-40h] BYREF
  _DWORD *v23; // [sp+28h] [bp-30h] BYREF
  int v24; // [sp+2Ch] [bp-2Ch] BYREF
  int v25; // [sp+30h] [bp-28h] BYREF

  v4 = 0;
  v5 = *a1 / 0x15180uLL;
  v6 = 1969;
  do
  {
    ++v6;
    v7 = v4;
    v8 = sub_609112F0(v6) == 0;
    v9 = 365;
    if ( !v8 )
      v9 = 366;
    v4 += v9;
  }
  while ( v9 + v7 <= v5 );
  v10 = v5 - v7;
  if ( v5 - v7 > 0x1E )
  {
    v12 = sub_609112F0(v6);
    v13 = 59;
    if ( v12 )
      v13 = 60;
    if ( v10 >= v13 )
    {
      v11 = v13 + 31;
      if ( v10 >= v13 + 31 )
      {
        if ( v10 >= v13 + 61 )
        {
          v11 = v13 + 61;
          if ( v10 >= v13 + 92 )
          {
            v11 = v13 + 92;
            if ( v10 >= v13 + 122 )
            {
              v11 = v13 + 122;
              if ( v10 >= v13 + 153 )
              {
                v11 = v13 + 153;
                if ( v10 >= v13 + 184 )
                {
                  v11 = v13 + 184;
                  if ( v10 >= v13 + 214 )
                  {
                    v11 = v13 + 214;
                    if ( v10 >= v13 + 245 )
                    {
                      v11 = v13 + 245;
                      if ( v10 >= v13 + 275 )
                        v11 = v13 + 275;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v11 = v13;
      }
    }
    else
    {
      v11 = 31;
    }
  }
  else
  {
    v11 = 0;
  }
  sub_60910C70(&v23, &dword_60CCFB3C, &dword_60CCFB40, &dword_60CCFB44);
  v14 = *a1 % 0x15180uLL;
  sub_60910C1C(&v23, v14 / 0xE10);
  sub_60910C24(&v24, v14 % 0xE10 / 0x3C);
  result = sub_60910C2C(&v25, v14 % 0x3C);
  if ( a2 )
  {
    sub_60910C08(&v21, v6);
    nullsub_114();
    v20 = v16;
    sub_60910C14(&v19, v10 + 1 - v11);
    sub_60910C34(v22, &v21, &v20, &v19);
    sub_60910CEC(a2, v22);
    result = v23;
    v17 = v24;
    v18 = v25;
    a2[4] = v23;
    a2[5] = v17;
    a2[6] = v18;
  }
  return result;
}
