/* sub_607D15F0
 * address: 0x607D15F0   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D15F0(int a1)
{
  _DWORD *v2; // r5
  _BYTE *v3; // r7
  int v4; // r3
  int v5; // r2
  float v7[3]; // [sp+Ch] [bp-54h] BYREF
  float v8; // [sp+18h] [bp-48h]
  float v9; // [sp+1Ch] [bp-44h]
  float v10; // [sp+20h] [bp-40h]
  float v11; // [sp+24h] [bp-3Ch]
  float v12; // [sp+28h] [bp-38h]
  float v13; // [sp+2Ch] [bp-34h]
  float v14; // [sp+30h] [bp-30h]
  float v15; // [sp+34h] [bp-2Ch]
  float v16; // [sp+38h] [bp-28h]
  float v17; // [sp+3Ch] [bp-24h] BYREF
  float v18; // [sp+40h] [bp-20h]
  float v19; // [sp+44h] [bp-1Ch]

  v2 = (_DWORD *)(a1 + 11464);
  v3 = (_BYTE *)(a1 + 11468);
  if ( FIELD_S32(a1, 11464) < 5 && !*v3 )
    return 0;
  v17 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v18 = COERCE_FLOAT("spin");
  (*(void (__fastcall **)(_DWORD, float *, float *))(**(_DWORD **)(a1 + 11368) + 144))(
    FIELD_U32(a1, 11368),
    v7,
    &v17);
  v8 = v8 + (float)((float)((float)(v7[1] * 0.0) - (float)(v7[0] * 10.0)) + (float)(v7[2] * 0.0));
  v17 = v8;
  v12 = v12 + (float)((float)((float)(v10 * 0.0) - (float)(v9 * 10.0)) + (float)(v11 * 0.0));
  v18 = v12;
  v16 = v16 + (float)((float)((float)(v14 * 0.0) - (float)(v13 * 10.0)) + (float)(v15 * 0.0));
  v19 = v16;
  v4 = FIELD_U32(a1, 80) ^ 1;
  v5 = FIELD_U32(a1, 20) & 0xF;
  if ( *v3 )
  {
    SE_PLY_YOSHI_LAY_EGG_ref_2(dword_60CB061C, &v17, v5, v4, FIELD_S8(a1, 84), (unsigned __int8)*v3);
    *v3 = 0;
  }
  else
  {
    SE_PLY_YOSHI_LAY_EGG_ref(dword_60CB061C, &v17, v5, v4, FIELD_S8(a1, 84));
    *v2 = 0;
  }
  return 1;
}
