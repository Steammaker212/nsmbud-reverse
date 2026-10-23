/* sub_606E8220
 * address: 0x606E8220   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E8220(int result)
{
  int v1; // r4
  unsigned int v2; // r1
  int v3; // r2
  int v4; // r1
  float v5; // s2
  bool v6; // zf
  unsigned int v7; // [sp+8h] [bp-20h] BYREF
  float v8; // [sp+Ch] [bp-1Ch] BYREF
  float v9; // [sp+10h] [bp-18h]

  v1 = result;
  if ( FIELD_U8(result, 28) )
  {
    v2 = FIELD_U32(result, 692);
    if ( v2 )
      goto LABEL_3;
    v4 = FIELD_U8(result, 28);
    v7 = 4;
    result = sub_606D4384((signed int *)&v7, v4);
    if ( result )
    {
      if ( v7 <= 3 )
      {
        result = sub_606D45B8((_DWORD *)(v1 + 692), &v8, (int *)result, v7);
        v5 = FIELD_F32(v1, 112) - v9;
        FIELD_F32(v1, 696) = FIELD_F32(v1, 108) - v8;
        FIELD_F32(v1, 700) = v5;
        v2 = FIELD_U32(v1, 692);
        v6 = v2 == 0;
        if ( v2 )
        {
          result = FIELD_U8(v1, 28);
          v6 = result == 0;
        }
        if ( !v6 )
        {
LABEL_3:
          v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
          result = 0;
          if ( v3 )
          {
            v7 = 0;
            sub_606D465C((int)&v8, &v7, v3, (float *)(v1 + 696), 0);
            FIELD_F32(v1, 108) = v8;
            FIELD_F32(v1, 112) = v9;
            result = v7;
            FIELD_U32(v1, 164) = v7;
          }
          else
          {
            FIELD_U32(v1, 692) = 0;
          }
        }
      }
    }
  }
  return result;
}
