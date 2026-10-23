/* sub_60558728
 * address: 0x60558728   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60558728(_BYTE *a1)
{
  int v2; // r5
  bool v3; // zf
  _DWORD *v4; // r0
  float v5; // s6
  float v6; // s2
  float v7; // s12
  int v8; // r1
  int result; // r0
  __int64 v10; // [sp+0h] [bp-40h] BYREF
  float v11; // [sp+8h] [bp-38h]
  int v12; // [sp+Ch] [bp-34h]
  float v13; // [sp+10h] [bp-30h]
  float v14; // [sp+14h] [bp-2Ch]
  float v15; // [sp+18h] [bp-28h]
  int v16; // [sp+1Ch] [bp-24h]
  float v17; // [sp+20h] [bp-20h]
  float v18; // [sp+24h] [bp-1Ch]
  float v19; // [sp+28h] [bp-18h]
  int v20; // [sp+2Ch] [bp-14h]

  v2 = (int)(a1 + 40);
  v3 = a1[3689] == 0;
  v4 = a1 + 40;
  v5 = (float)(-0.00030118 * 0.0) + 1.0;
  v6 = (float)(0.024541 * 0.0) + 0.0;
  v7 = (float)(0.00030118 * 0.0) + -1.0;
  *(float *)&v10 = v5 * v5;
  v13 = v6 * v5;
  v17 = -v6;
  *((float *)&v10 + 1) = (float)((float)(v7 * v6) * v5) - (float)(v6 * v6);
  v14 = (float)(v6 * v5) + (float)(v6 * (float)(v7 * v6));
  v18 = v7 * v5;
  v11 = (float)(v7 * v6) + (float)(v6 * (float)(v6 * v5));
  v15 = (float)(v6 * (float)(v6 * v6)) - (float)(v7 * v5);
  v19 = v6 * v5;
  v12 = 0;
  v16 = 0;
  v8 = 1139474432;
  if ( v3 )
    v8 = 1137180672;
  v20 = v8;
  sub_60473B58(v4, 6u, &v10);
  result = (unsigned __int8)a1[3685];
  if ( a1[3685] )
  {
    if ( a1[3672] && (*(_BYTE *)(sub_6047482C(v2, 0) + 51) & 1) != 0 )
      a1[3672] = 0;
    if ( a1[3673] && (*(_BYTE *)(sub_6047482C(v2, 1u) + 51) & 1) != 0 )
      a1[3673] = 0;
    result = (unsigned __int8)a1[3672];
    if ( !a1[3672] )
    {
      result = (unsigned __int8)a1[3673];
      if ( !a1[3673] )
      {
        a1[3685] = 0;
        return 0;
      }
    }
  }
  return result;
}
