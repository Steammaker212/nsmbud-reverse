/* sub_6042DDD8
 * address: 0x6042DDD8   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042DDD8(int *a1, int a2, _DWORD *a3)
{
  char v3; // r12
  unsigned __int16 *v6; // r0
  float *v7; // r6
  unsigned int v8; // r3
  int v9; // r2
  unsigned int v10; // r3
  _DWORD *v11; // r0
  _DWORD *v12; // r1
  float v13; // r1
  float v14; // s0
  unsigned int v15; // r1
  _DWORD *v16; // r0
  unsigned int v17; // r2
  _DWORD *result; // r0
  _DWORD *v19; // r1
  float *v20; // r3
  float v21; // s2
  float v22; // s0
  unsigned int v23; // r3
  _DWORD *v24; // r1
  float v25[9]; // [sp+4h] [bp-24h] BYREF

  v6 = (unsigned __int16 *)a3[21];
  v7 = 0;
  v8 = *(__int16 *)dword_60CD09BC;
  if ( a3[20] > v8 )
    v6 += 2 * v8;
  if ( v6[1] >= 2u )
    v7 = *(float **)(a3[23] + 4 * *v6 + 4);
  if ( ((unsigned int)dword_60C9C284 & ~(1614995000 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C9C284) )
  {
    dword_60C9C280 = (int)&off_60BFA424;
    _cxa_guard_release(dword_60C9C284);
  }
  if ( v7 && (*(int (__fastcall **)(float *, int *))(*(_DWORD *)v7 + 36))(v7, &dword_60C9C280) == 1 )
  {
    v9 = *a1;
    v10 = *(_DWORD *)(*a1 + 608);
    v11 = *(_DWORD **)(*a1 + 612);
    v12 = v11;
    if ( v10 > 0x19 )
      v12 = v11 + 75;
    if ( *v12 != -1 )
    {
      sub_6091B890(v12, a2, 3, v7 + 58);
      v9 = *a1;
      v10 = *(_DWORD *)(*a1 + 608);
      v11 = *(_DWORD **)(*a1 + 612);
    }
    v13 = v7[46];
    if ( v10 > 0x1A )
      v11 += 78;
    v25[0] = v7[46];
    if ( *v11 == -1 )
    {
      v14 = v13;
    }
    else
    {
      sub_6091B890(v11, a2, 1, v25);
      v14 = v7[46];
      v9 = *a1;
    }
    v21 = v7[50];
    if ( v21 == v14 )
      v22 = 1.0;
    else
      v22 = 1.0 / (float)(v21 - v14);
    v23 = FIELD_U32(v9, 608);
    result = *(_DWORD **)(v9 + 612);
    v25[0] = v22;
    v24 = result;
    if ( v23 > 0x1B )
      v24 = result + 81;
    if ( *v24 != -1 )
    {
      sub_6091B890(v24, a2, 1, v25);
      v23 = *(_DWORD *)(*a1 + 608);
      result = *(_DWORD **)(*a1 + 612);
    }
    if ( v23 > 0x1C )
      result += 84;
    if ( *result != -1 )
    {
      v20 = v7 + 65;
      return (_DWORD *)sub_6091B890(result, a2, 3, v20);
    }
  }
  else
  {
    v15 = *(_DWORD *)(*a1 + 608);
    v16 = *(_DWORD **)(*a1 + 612);
    v25[0] = 1000000.0;
    if ( v15 > 0x1A )
      v16 += 78;
    if ( *v16 != -1 )
      sub_6091B890(v16, a2, 1, v25);
    v17 = *(_DWORD *)(*a1 + 608);
    result = *(_DWORD **)(*a1 + 612);
    v25[0] = 1000000.0;
    v19 = result;
    if ( v17 > 0x1B )
      v19 = result + 81;
    if ( *v19 != -1 )
    {
      sub_6091B890(v19, a2, 1, v25);
      v17 = *(_DWORD *)(*a1 + 608);
      result = *(_DWORD **)(*a1 + 612);
    }
    if ( v17 > 0x1C )
      result += 84;
    v25[0] = -0.0;
    v25[1] = -0.0;
    v25[2] = -1.0;
    if ( *result != -1 )
    {
      v20 = v25;
      return (_DWORD *)sub_6091B890(result, a2, 3, v20);
    }
  }
  return result;
}
