/* sub_605F0638
 * address: 0x605F0638   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605F0638(unsigned int result, int a2, int a3)
{
  int v3; // r5
  int v4; // r4
  float v5; // s16
  float v6; // s4
  float v7; // s2
  float v8; // s4
  float v9; // [sp+8h] [bp-28h] BYREF
  float v10; // [sp+Ch] [bp-24h]
  int v11; // [sp+10h] [bp-20h]

  if ( a3 == 1 )
  {
    v3 = FIELD_U32(result, 144);
    v4 = (*(int (__fastcall **)(int, unsigned int, int))(*(_DWORD *)a2 + 32))(a2, result, 1);
    result = (unsigned __int8)(FIELD_U8(v4, 533) - 1);
    if ( result <= 1 )
    {
      result = sub_60769D94(v4, 2);
      if ( result == 1 )
      {
        result = FIELD_U8(v3, 6896);
        if ( FIELD_U8(v3, 6896) )
        {
          v5 = FIELD_F32(v3, 112);
          result = sub_6076A170(v4, &v9);
          v6 = FIELD_F32(v4, 112);
          v7 = v6 + v10;
          if ( (float)(v6 + v10) <= (float)(v5 + 16.0) )
          {
            v8 = v6 + v9;
            if ( v8 >= (float)(v5 + -16.0) && v8 <= v5 && v7 >= (float)(v5 + -16.0) )
            {
              result = FIELD_U8(v4, 84);
              FIELD_U8(v3, 6858) = result;
              if ( result <= 3 )
              {
                v11 = FIELD_U32(v3, 6824);
                v10 = FIELD_F32(v3, 6820);
                v9 = FIELD_F32(v3, 6816);
                v9 = v9 + -16.0;
                result = *(_DWORD *)(PlayerMgr_instance + 4 * (char)result + 32);
                if ( result )
                  return sub_6076A68C(result, v3 + 6144, &v9, FIELD_U8(v3, 6857), 2);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
