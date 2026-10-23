/* SumoBrosBoss__vf2C8
 * address: 0x60030F1C   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600266E0
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf2C8(int a1)
{
  _DWORD *v2; // r1
  _DWORD **v3; // r6
  float v4; // s16
  unsigned int v5; // r3
  int v6; // r2
  int v7; // r7
  int v8; // r0
  int v9; // s0
  float v10; // s2
  int v11; // r0
  int (__fastcall *v12)(int, _DWORD *); // r2
  int v13; // r0
  int v14; // s2
  _DWORD v16[20]; // [sp+0h] [bp-50h] BYREF

  v3 = (_DWORD **)(a1 + 7096);
  v2 = *(_DWORD **)(a1 + 7096);
  v4 = FIELD_F32(a1, 112);
  v5 = v2[17];
  v6 = v2[3];
  if ( v2[2] > v5 )
    v6 += 4 * v5;
  v7 = FIELD_U32(a1, 116);
  v8 = FIELD_U8(a1, 7426);
  if ( (unsigned __int8)(v8 - 3) < 2u
    || (v9 = (int)*(v3 - 1747), v10 = *(float *)(*(_DWORD *)v6 + 20), v10 > 4.0) && v8 == 16 )
  {
    v11 = *v2;
    v12 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v2 + 84);
    v16[0] = &sead__SafeStringBase__vtable;
    v16[1] = "spine";
    v13 = v12(v11, v16);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v3 + 108))(**v3, v13, v16);
    v14 = 1117782016;
    v9 = v16[3];
  }
  else if ( (unsigned __int8)(v8 - 12) < 3u || v10 < 65.0 && v8 == 15 || v10 < 4.0 && v8 == 16 )
  {
    v14 = 1115684864;
  }
  else
  {
    v14 = 1117782016;
  }
  FIELD_U32(a1, 7028) = v9;
  FIELD_F32(a1, 7032) = v4 + -2.5;
  FIELD_U32(a1, 7036) = v7;
  FIELD_U32(a1, 7040) = 1119354880;
  FIELD_U32(a1, 7044) = v14;
  FIELD_U32(a1, 7048) = 1132462080;
  return 7048;
}
