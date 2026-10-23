/* sub_6042D60C
 * address: 0x6042D60C   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042D60C(int a1, int a2, int a3)
{
  int v3; // r6
  int v6; // r7
  bool v7; // zf
  float v8; // r1
  float v9; // r2
  float v10; // r3
  unsigned int v11; // r2
  _DWORD *result; // r0
  _DWORD *v13; // r1
  _DWORD *v14; // r1
  _DWORD *v15; // r1
  _DWORD *v16; // r1
  int v17; // r7
  _DWORD *v18; // r1
  _DWORD *v19; // r1
  _DWORD *v20; // r1
  _DWORD *v21; // r1
  float v22; // [sp+0h] [bp-30h] BYREF
  float v23; // [sp+4h] [bp-2Ch]
  float v24; // [sp+8h] [bp-28h]
  float v25; // [sp+Ch] [bp-24h]
  _DWORD v26[7]; // [sp+14h] [bp-1Ch] BYREF

  v3 = a3;
  v6 = a1 + (a3 << 6);
  v7 = a3 == 3;
  v8 = FIELD_F32(v6, 804);
  v9 = FIELD_F32(v6, 808);
  v10 = FIELD_F32(v6, 812);
  v22 = FIELD_F32(v6, 800);
  v23 = v8;
  v24 = v9;
  v25 = v10;
  if ( v7 )
  {
    v22 = FIELD_F32(a1, 1376) * v22;
    v23 = FIELD_F32(a1, 1380) * v23;
    v24 = FIELD_F32(a1, 1384) * v24;
    v25 = FIELD_F32(a1, 1388) * v25;
  }
  v11 = *(_DWORD *)(*(_DWORD *)a1 + 608);
  result = *(_DWORD **)(*(_DWORD *)a1 + 612);
  v13 = *(_DWORD **)(*(_DWORD *)a1 + 612);
  if ( v11 > 0xC )
    v13 += 36;
  if ( *v13 != -1 )
  {
    sub_6091B890(v13, a2, 4, v6 + 768);
    v11 = *(_DWORD *)(*(_DWORD *)a1 + 608);
    result = *(_DWORD **)(*(_DWORD *)a1 + 612);
  }
  v14 = result;
  if ( v11 > 0xD )
    v14 = result + 39;
  if ( *v14 != -1 )
  {
    sub_6091B890(v14, a2, 4, v6 + 784);
    v11 = *(_DWORD *)(*(_DWORD *)a1 + 608);
    result = *(_DWORD **)(*(_DWORD *)a1 + 612);
  }
  v15 = result;
  if ( v11 > 0xE )
    v15 = result + 42;
  if ( *v15 != -1 )
  {
    sub_6091B890(v15, a2, 4, &v22);
    v11 = *(_DWORD *)(*(_DWORD *)a1 + 608);
    result = *(_DWORD **)(*(_DWORD *)a1 + 612);
  }
  v26[0] = FIELD_U32(v6, 816);
  v16 = result;
  if ( v11 > 0xF )
    v16 = result + 45;
  if ( *v16 != -1 )
  {
    sub_6091B890(v16, a2, 1, v26);
    v11 = *(_DWORD *)(*(_DWORD *)a1 + 608);
    result = *(_DWORD **)(*(_DWORD *)a1 + 612);
  }
  v17 = 0;
  v18 = result;
  v26[0] = 0;
  if ( v11 > 0x10 )
    v18 = result + 48;
  if ( *v18 != -1 )
  {
    sub_6091B890(v18, a2, 1, v26);
    v11 = *(_DWORD *)(*(_DWORD *)a1 + 608);
    result = *(_DWORD **)(*(_DWORD *)a1 + 612);
  }
  v19 = result;
  if ( v3 == 6 )
    v17 = 1;
  v26[0] = v17;
  if ( v11 > 0x14 )
    v19 = result + 60;
  if ( *v19 != -1 )
  {
    sub_6091B890(v19, a2, 1, v26);
    v11 = *(_DWORD *)(*(_DWORD *)a1 + 608);
    result = *(_DWORD **)(*(_DWORD *)a1 + 612);
  }
  v20 = result;
  if ( v3 != 1 )
    v3 = 0;
  v26[0] = v3;
  if ( v11 > 0x15 )
    v20 = result + 63;
  if ( *v20 != -1 )
  {
    sub_6091B890(v20, a2, 1, v26);
    v11 = *(_DWORD *)(*(_DWORD *)a1 + 608);
    result = *(_DWORD **)(*(_DWORD *)a1 + 612);
  }
  v26[0] = FIELD_U32(a1, 1392);
  v21 = result;
  if ( v11 > 0x13 )
    v21 = result + 57;
  if ( *v21 != -1 )
  {
    sub_6091B890(v21, a2, 1, v26);
    v11 = *(_DWORD *)(*(_DWORD *)a1 + 608);
    result = *(_DWORD **)(*(_DWORD *)a1 + 612);
  }
  v26[0] = 1;
  if ( v11 > 0x18 )
    result += 72;
  if ( *result != -1 )
    return (_DWORD *)sub_6091B890(result, a2, 1, v26);
  return result;
}
