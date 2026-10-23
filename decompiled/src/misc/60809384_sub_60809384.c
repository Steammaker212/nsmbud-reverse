/* sub_60809384
 * address: 0x60809384   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60809384(int result, int *a2, int a3)
{
  int v4; // r5
  bool v6; // zf
  int v7; // r7
  int v8; // r0
  int v9; // r0
  int v10; // r7
  int v11; // r0
  int v12; // r0
  int v13; // r2
  int v14; // r1
  int v15; // r0
  int v16; // r0
  int v17; // r2
  _DWORD v18[2]; // [sp+8h] [bp-50h] BYREF
  unsigned __int8 v19; // [sp+11h] [bp-47h]
  int v20; // [sp+24h] [bp-34h] BYREF
  float v21; // [sp+28h] [bp-30h] BYREF
  float v22; // [sp+2Ch] [bp-2Ch]
  float v23; // [sp+30h] [bp-28h] BYREF
  int v24; // [sp+34h] [bp-24h]
  float v25; // [sp+38h] [bp-20h]
  int v26; // [sp+3Ch] [bp-1Ch]

  v4 = result;
  v6 = a2 == 0;
  if ( a2 )
  {
    result = *a2;
    v6 = *a2 == 0;
  }
  if ( !v6 )
  {
    v7 = FIELD_U32(result, 220);
    v8 = sub_60805BA8(v4);
    v9 = sub_608DC930(FIELD_U32(v8, 456));
    sub_608A9E64(v9, v18, v7);
    v10 = v18[0];
    v23 = 1.0;
    v24 = 0;
    v25 = 1.0;
    v26 = 0;
    if ( *a2 && *(_DWORD *)(*a2 + 220) == 16778647 )
      v10 = v18[0] | 0x80;
    v21 = 1.0;
    v22 = 1.0;
    v11 = sub_60805BA8(SoundSystem_instance);
    v12 = sub_608DC930(FIELD_U32(v11, 456));
    if ( *a2 )
      v13 = *(_DWORD *)(*a2 + 220);
    else
      v13 = -1;
    sub_608A9AEC(v12, &v20, v13, 1);
    if ( (v20 & 0x7C0) != 0 )
      v22 = (float)((unsigned __int16)(v20 & 0x7C0) >> 6) / 10.0;
    if ( (v20 & 0xF800) != 0 )
      v21 = (float)((unsigned __int16)(v20 & 0xF800) >> 11) / 10.0;
    ((void (__fastcall *)(_DWORD, float *, int, int, float *))loc_6080E034)(FIELD_U32(v4, 156), &v23, a3, v10, &v21);
    if ( *a2 )
    {
      sub_608B032C(*a2, 0, v23);
      if ( *a2 )
      {
        sub_608B0388(v25);
        if ( *a2 )
          sub_608B03A8(*a2, v14);
      }
    }
    result = v24;
    if ( v24 < 0 )
    {
      v15 = sub_60805BA8(v4);
      v16 = sub_608DC930(FIELD_U32(v15, 456));
      if ( *a2 )
        v17 = *(_DWORD *)(*a2 + 220);
      else
        v17 = -1;
      sub_608A9BC0(v16, v18, v17);
      result = *a2;
      if ( *a2 )
        return sub_608AF2F4(result, v19 + v24);
    }
  }
  return result;
}
