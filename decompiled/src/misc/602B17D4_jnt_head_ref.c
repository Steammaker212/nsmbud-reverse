/* jnt_head_ref
 * address: 0x602B17D4   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jnt_head_ref(int result)
{
  int v1; // r1
  _DWORD *v2; // r5
  int v3; // r1
  int v4; // r4
  int (__fastcall *v5)(int, _DWORD *); // r2
  void (__fastcall *v6)(int, int, float *); // r6
  int v7; // r0
  _DWORD v8[2]; // [sp+0h] [bp-48h] BYREF
  float v9[3]; // [sp+8h] [bp-40h] BYREF
  float v10; // [sp+14h] [bp-34h]
  float v11; // [sp+18h] [bp-30h]
  float v12; // [sp+1Ch] [bp-2Ch]
  float v13; // [sp+20h] [bp-28h]
  float v14; // [sp+24h] [bp-24h]
  float v15; // [sp+28h] [bp-20h]
  float v16; // [sp+2Ch] [bp-1Ch]
  float v17; // [sp+30h] [bp-18h]
  float v18; // [sp+34h] [bp-14h]

  v2 = (_DWORD *)(result + 6816);
  v1 = FIELD_U32(result, 6816);
  if ( !v1 || (v3 = v1 - 1, (*v2 = v3) == 0) )
  {
    v4 = **(_DWORD **)(result + 6300);
    v5 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v4 + 84);
    v6 = *(void (__fastcall **)(int, int, float *))(*(_DWORD *)v4 + 108);
    v8[0] = &sead__SafeStringBase__vtable;
    v8[1] = "jnt_head";
    v7 = v5(v4, v8);
    v6(v4, v7, v9);
    v10 = v10 + (float)((float)((float)(v9[1] * 0.0) + (float)(v9[0] * 6.0)) + (float)(v9[2] * 0.0));
    v14 = v14 + (float)((float)((float)(v12 * 0.0) + (float)(v11 * 6.0)) + (float)(v13 * 0.0));
    v18 = v18 + (float)((float)((float)(v16 * 0.0) + (float)(v15 * 6.0)) + (float)(v17 * 0.0));
    sub_6071689C(TileMgr_instance, 1, 1, 0);
    *v2 = 64;
    return 64;
  }
  return result;
}
