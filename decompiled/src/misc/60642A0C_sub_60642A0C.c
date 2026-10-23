/* sub_60642A0C
 * address: 0x60642A0C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60642A0C(int a1, float a2, float a3)
{
  int v3; // r5
  float v7; // r0
  int v8; // r1
  float *v9; // r4
  int v10; // t1
  _BOOL4 result; // r0
  bool v12; // zf
  int v13; // r1
  int v14; // t1
  int v15; // r2
  float v16; // [sp+4h] [bp-34h] BYREF
  float v17; // [sp+8h] [bp-30h]
  int v18; // [sp+Ch] [bp-2Ch]
  int v19; // [sp+10h] [bp-28h] BYREF
  float v20; // [sp+14h] [bp-24h] BYREF

  v3 = 0;
  v20 = 0.0;
  v7 = FIELD_F32(a1, 112);
  v8 = FIELD_U32(a1, 116);
  v16 = a2;
  v17 = v7;
  v18 = v8;
  ((void (__fastcall *)(int *, float *, float *, _DWORD, float, float))checkLiquidCollisions)(
    &v19,
    &v20,
    &v16,
    FIELD_U8(a1, 86),
    a2,
    a3);
  if ( (unsigned int)(v19 - 3) <= 1
    && (float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108)) <= v20 )
  {
    v3 = 0;
    v14 = FIELD_U8(a1, 6100);
    v9 = (float *)(a1 + 6100);
    v13 = v14;
    result = v14 == 0;
    if ( *(v9 - 1494) <= 0.0 )
    {
      v3 = 1;
      if ( !v13 )
      {
        v16 = a2;
        v17 = v20;
        if ( a3 <= 48.0 )
          v15 = 16;
        else
          v15 = 14;
        TileMgr_splashRelated(TileMgr_instance, &v16, v15);
        result = 1;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v10 = FIELD_U8(a1, 6100);
    v9 = (float *)(a1 + 6100);
    result = v10 == 0;
  }
  v12 = !result;
  if ( !result )
    v12 = v3 == 0;
  if ( v12 )
  {
    result = 0;
LABEL_9:
    *(_BYTE *)v9 = result;
  }
  return result;
}
