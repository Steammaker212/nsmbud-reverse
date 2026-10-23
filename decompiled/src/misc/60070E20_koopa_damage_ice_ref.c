/* koopa_damage_ice_ref
 * address: 0x60070E20   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall koopa_damage_ice_ref(int a1, float *a2, int a3)
{
  int v6; // r9
  int v7; // r6
  _DWORD *result; // r0
  int v9; // r7
  int v10; // r1
  int v11; // t1
  int v12; // r0
  _DWORD v13[3]; // [sp+0h] [bp-48h]
  int (**v14)(); // [sp+Ch] [bp-3Ch] BYREF
  const char *v15; // [sp+10h] [bp-38h]
  int (**v16)(); // [sp+14h] [bp-34h]
  const char *v17; // [sp+18h] [bp-30h]
  int (**v18)(); // [sp+1Ch] [bp-2Ch]
  const char *v19; // [sp+20h] [bp-28h]

  v14 = &sead__SafeStringBase__vtable;
  v15 = "koopa_model";
  v6 = LoadResource(ResourceMgrRelated_instance, &v14);
  v14 = &sead__SafeStringBase__vtable;
  v15 = "koopa_damage";
  v16 = &sead__SafeStringBase__vtable;
  v17 = "koopa_damage";
  v18 = &sead__SafeStringBase__vtable;
  v19 = "koopa_damage_ice";
  v13[0] = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 780))(a1);
  v13[1] = 60;
  v13[2] = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 780))(a1);
  v7 = 0;
  result = (_DWORD *)(a1 + 7172);
  if ( FIELD_U32(a1, 7172) )
  {
    result = (_DWORD *)(a1 + 7200);
    if ( FIELD_U32(a1, 7200) )
    {
      result = (_DWORD *)(a1 + 7228);
      if ( FIELD_U32(a1, 7228) )
      {
        result = (_DWORD *)(a1 + 7256);
        if ( FIELD_U32(a1, 7256) )
        {
          result = (_DWORD *)(a1 + 7284);
          if ( FIELD_U32(a1, 7284) )
          {
            result = (_DWORD *)(a1 + 7312);
            if ( FIELD_U32(a1, 7312) )
            {
              result = (_DWORD *)(a1 + 7340);
              if ( FIELD_U32(a1, 7340) )
              {
                result = (_DWORD *)(a1 + 7368);
                if ( FIELD_U32(a1, 7368) )
                  return result;
                v7 = 7;
              }
              else
              {
                v7 = 6;
              }
            }
            else
            {
              v7 = 5;
            }
          }
          else
          {
            v7 = 4;
          }
        }
        else
        {
          v7 = 3;
        }
      }
      else
      {
        v7 = 2;
      }
    }
    else
    {
      v7 = 1;
    }
  }
  v9 = a1 + 28 * v7;
  FIELD_F32(v9, 7152) = *a2 - FIELD_F32(a1, 108);
  FIELD_F32(v9, 7156) = a2[1] - FIELD_F32(a1, 112);
  v10 = dword_60AF53E0[a3];
  FIELD_U32(v9, 7160) = v10;
  FIELD_U32(v9, 7164) = v10;
  FIELD_U32(v9, 7168) = 1065353216;
  *result = v13[a3];
  v11 = FIELD_U32(v9, 7148);
  v9 += 7148;
  ShuAnim_play(**(_DWORD ***)(v11 + 28), v6, (int)&(&v14)[2 * a3]);
  v12 = **(_DWORD **)(*(_DWORD *)v9 + 28);
  FIELD_U32(v12, 20) = 0;
  FIELD_U32(v12, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v9 + 28) + 24) = 1065353216;
  return (_DWORD *)sub_6007339C(a1, v7);
}
