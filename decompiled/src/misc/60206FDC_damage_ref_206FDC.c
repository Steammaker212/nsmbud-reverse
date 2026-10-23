/* damage_ref_206FDC
 * address: 0x60206FDC   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall damage_ref_206FDC(int a1)
{
  int v2; // r0
  int result; // r0
  float v4; // r0
  _DWORD *v5; // r0
  int v6; // r4
  float v7; // t1
  float v8; // r0
  _DWORD *v9; // r0
  int v10; // r1
  _DWORD *v11; // r0
  int v12; // r1
  int (**v13)(); // [sp+4h] [bp-34h] BYREF
  const char *v14; // [sp+8h] [bp-30h]
  int v15; // [sp+Ch] [bp-2Ch] BYREF
  int v16; // [sp+10h] [bp-28h]
  int v17; // [sp+14h] [bp-24h]
  Vec3 v18[2]; // [sp+18h] [bp-20h] BYREF

  v2 = FIELD_U32(a1, 356);
  if ( v2 )
  {
    result = v2 - 1;
    FIELD_U32(a1, 356) = result;
    if ( result )
      return result;
    v18[0].x = FIELD_F32(a1, 80);
    v4 = FIELD_F32(a1, 84);
    v18[0].z = FIELD_F32(a1, 88);
    v15 = 1065353216;
    v16 = 1065353216;
    v17 = 1065353216;
    v18[0].y = v4 + 40.0;
    EffectData_create(902, v18, 0, (int)&v15);
    if ( FIELD_U32(a1, 252) == 21 )
    {
      sub_601E4C88((_DWORD *)dword_60C8B13C, 159, (_DWORD *)(a1 + 80));
      v5 = (_DWORD *)dword_60C8B13C;
    }
    else
    {
      if ( FIELD_U32(a1, 240) != 6 )
      {
        sub_601E4C88((_DWORD *)dword_60C8B13C, 158, (_DWORD *)(a1 + 80));
        sub_601E4C88((_DWORD *)dword_60C8B13C, 144, (_DWORD *)(a1 + 80));
        FIELD_U32(a1, 348) = 0;
        v9 = *(_DWORD **)(a1 + 268);
        v10 = FIELD_U32(a1, 272);
        v13 = &sead__SafeStringBase__vtable;
        v14 = "damage";
        sub_60421938(v9, v10, (int)&v13);
LABEL_11:
        result = FIELD_U32(a1, 252);
        if ( result == 21 )
        {
          v11 = *(_DWORD **)(a1 + 268);
          v12 = FIELD_U32(a1, 272);
          v13 = &sead__SafeStringBase__vtable;
          v14 = "damage";
          return sub_60421938(v11, v12, (int)&v13);
        }
        return result;
      }
      sub_601E4C88((_DWORD *)dword_60C8B13C, 160, (_DWORD *)(a1 + 80));
      v5 = (_DWORD *)dword_60C8B13C;
    }
    sub_601E4C88(v5, 144, (_DWORD *)(a1 + 80));
    goto LABEL_11;
  }
  sub_601687DC(a1, (int)FIELD_F32(a1, 348), 0);
  result = sub_601860F8(a1);
  if ( result == 1 )
  {
    v7 = FIELD_F32(a1, 80);
    v6 = a1 + 80;
    v18[0].x = v7;
    v8 = FIELD_F32(v6, 4);
    v18[0].z = FIELD_F32(v6, 8);
    v18[0].y = v8;
    v15 = 1065353216;
    v16 = 1065353216;
    v17 = 1065353216;
    EffectData_create(903, v18, 0, (int)&v15);
    result = sub_601E4C88((_DWORD *)dword_60C8B13C, 145, (_DWORD *)v6);
    *(_BYTE *)(v6 - 61) = 1;
  }
  return result;
}
