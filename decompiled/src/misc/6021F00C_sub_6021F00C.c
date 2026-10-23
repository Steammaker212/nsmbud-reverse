/* sub_6021F00C
 * address: 0x6021F00C   size: 960   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6021F00C(int a1, unsigned int a2, unsigned int a3)
{
  int *v5; // r0
  int v6; // r7
  int v7; // r6
  _BOOL4 v8; // r5
  int v9; // r1
  int v10; // r9
  int v11; // r4
  _BOOL4 v12; // r0
  int v13; // r10
  int v14; // r0
  unsigned __int8 v15; // r1
  unsigned int v16; // r2
  bool v17; // cc
  char v18; // r1
  unsigned int v19; // r0
  unsigned int v20; // r1
  unsigned int v21; // r10
  int v22; // r6
  int v23; // r0
  int v24; // r1
  int v25; // r7
  int v26; // r3
  int v27; // r1
  _BYTE *result; // r0
  int v29; // r7
  unsigned int v30; // r0
  int v31; // [sp+4h] [bp-6Ch]
  ActorBuildInfo v32; // [sp+8h] [bp-68h] BYREF
  int v33; // [sp+34h] [bp-3Ch] BYREF
  int v34; // [sp+38h] [bp-38h]
  int v35; // [sp+3Ch] [bp-34h]
  int v36; // [sp+40h] [bp-30h]
  int v37; // [sp+44h] [bp-2Ch]
  int v38; // [sp+48h] [bp-28h]

  v5 = (int *)sub_60186FEC(dword_60CC6D78 + 984, a2, a3);
  v33 = *v5;
  v34 = v5[1];
  v35 = v5[2];
  v6 = v5[3];
  v7 = v5[4];
  v38 = v5[5];
  v37 = v7;
  v36 = v6;
  v8 = v35 == -1 || v34 == -1 || v33 == -1;
  v9 = sub_6021EE50(a2, a3);
  v10 = v6;
  if ( !v8 )
  {
    v11 = v9;
    v12 = sub_601EAA9C(dword_60C8B144, -1);
    v9 = v11;
    v8 = 0;
    v10 = v36;
    if ( v12 )
    {
      v10 = v36;
      if ( v36 >= 1 )
        v10 = --v36;
    }
  }
  v31 = v9;
  if ( v9 == 908 )
  {
    if ( v35 != -1 && v34 != -1 && v33 != -1 )
    {
      v13 = 0;
      if ( v6 && !v10 )
      {
        v13 = 0;
        v14 = dword_60CC6D78;
        v15 = FIELD_U8(dword_60CC6D78, 2084) + 1;
        v16 = v15;
        v17 = v15 > 9u;
        if ( v15 > 9u )
          v15 = 0;
        FIELD_U8(dword_60CC6D78, 2084) = v15;
        v18 = 5;
        if ( v17 )
          v18 = 6;
        if ( v16 > 9 )
          v13 = 1;
        FIELD_U8(v14, 2088) = v18;
      }
    }
    else
    {
      v13 = 0;
      FIELD_U8(dword_60CC6D78, 2088) = 5;
    }
  }
  else if ( v35 != -1 && v34 != -1 && v33 != -1 )
  {
    v13 = 0;
    if ( v6 && !v10 )
      sub_6021F50C(dword_60C8D4EC, &v33, a2, a3);
  }
  else
  {
    v19 = a3;
    v20 = a2;
    if ( a3 != 1 )
      v19 = 0;
    if ( a2 != 1 )
      v20 = 0;
    v21 = v20 & v19;
    v22 = sub_60187054(dword_60CC6D78 + 984, a2, v20 & v19);
    v23 = 4;
    v24 = a3;
    if ( a3 )
      v24 = 3;
    else
      v23 = 1;
    if ( a2 == 1 )
    {
      v25 = v22;
      do
      {
        v26 = v24;
        if ( v25 <= v23 )
          v26 = v25 + 1;
        v25 = v26;
      }
      while ( dword_60AFD3B0[v26 + 6] == -1 );
    }
    else
    {
      v27 = v22;
      do
      {
        v26 = v27 + 1;
        if ( v27 > 4 )
          v26 = 0;
        v27 = v26;
      }
      while ( dword_60AFD3B0[6 * a2 + v26] == -1 );
    }
    sub_60187030(dword_60CC6D78 + 984, a2, v21, v26);
    v13 = 0;
    v38 = dword_60AFD3B0[6 * a2 + v22];
  }
  sub_60186FC0(dword_60CC6D78 + 984, a2, a3, (int)&v33);
  result = 0;
  if ( v10 == 0 || v8 )
  {
    v29 = 0;
    if ( v31 == 908 )
      v29 = v13 | (FIELD_U8(dword_60CC6D78, 2088) == 6);
    memset(&v32.settings2, 0, 40);
    v32.settings1 = v29;
    v30 = sub_6021EE50(a2, a3);
    v32.profile = Profile__get(v30);
    memset(&v32.position, 0, 16);
    v32.eventId2 = a2;
    v32.field_20 = a2 == 4;
    v32.linkId = a3;
    return ActorMgr__create((void *)ActorMgr__instance, &v32, 0);
  }
  return result;
}
