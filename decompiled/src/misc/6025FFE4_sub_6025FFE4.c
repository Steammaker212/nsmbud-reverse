/* sub_6025FFE4
 * address: 0x6025FFE4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6025FFE4(int a1, int a2)
{
  int v3; // r3
  int result; // r0
  bool v5; // zf
  int v6; // r1
  int v7; // r4
  int v8; // r1
  bool v9; // zf
  float v10; // r6
  Vec3 v11; // [sp+4h] [bp-1Ch] BYREF

  v3 = FIELD_U8(a1, 6469);
  result = 0;
  if ( !v3 )
  {
    v5 = (FIELD_U8(a1, 3202) & 2) == 0;
    if ( (FIELD_U8(a1, 3202) & 2) != 0 )
      v5 = (FIELD_U8(a1, 2872) & 8) == 0;
    if ( v5 && (a2 != 1 || (FIELD_U8(a1, 2880) & 1) == 0 && (FIELD_U8(a1, 2872) & 1) != 0) )
    {
      v6 = FIELD_U32(a1, 5956);
      result = 0;
      v7 = BYTE1(v6);
      if ( BYTE1(v6) <= 0xBu )
      {
        v8 = BYTE1(v6);
        v9 = v8 == 6;
        if ( v8 != 6 )
          v9 = v8 == 8;
        if ( !v9 )
        {
          v10 = FIELD_F32(a1, 112);
          v11.x = FIELD_F32(a1, 108);
          v11.y = v10;
          v11.z = sub_600024C4(a1);
          EffectData_create(dword_60AFD900[v7], &v11, 0, 0);
          return 1;
        }
      }
    }
  }
  return result;
}
