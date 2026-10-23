/* sub_60427A10
 * address: 0x60427A10   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60427A10(int result, int a2, int a3)
{
  unsigned int v3; // r7
  _BYTE *v4; // r9
  int v5; // r0
  int v6; // r11
  int v7; // r8
  int v8; // r6
  int v9; // r10
  int v10; // r5
  int v11; // r4
  int v12; // r0
  int v13; // r0
  int v14; // r0
  _BYTE *v15; // r1
  int v17; // [sp+4h] [bp-3Ch]
  int v18; // [sp+8h] [bp-38h]
  int v19; // [sp+10h] [bp-30h]
  _DWORD v20[11]; // [sp+14h] [bp-2Ch] BYREF

  if ( FIELD_U8(result, 18064) )
  {
    v17 = FIELD_U16(a2, 64);
    if ( FIELD_U16(a2, 64) )
    {
      v3 = 0;
      v18 = a2;
      v19 = result + 6896;
      do
      {
        v4 = *(_BYTE **)(a2 + 244);
        if ( FIELD_U32(a2, 240) > v3 )
          v4 += 120 * v3;
        v4[109] = -1;
        v4[105] = -1;
        v4[101] = -1;
        v4[97] = -1;
        v4[108] = -1;
        v4[111] = -1;
        v4[110] = -1;
        v4[104] = -1;
        v4[107] = -1;
        v4[106] = -1;
        v4[100] = -1;
        v4[103] = -1;
        v4[102] = -1;
        v4[96] = -1;
        v4[99] = -1;
        v4[98] = -1;
        v5 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a2, 440) + 16) + 3016 * v3 + 24);
        if ( v5 )
        {
          v6 = FIELD_U32(v5, 260);
          if ( v6 >= 1 )
          {
            v7 = v5 + 16;
            v8 = 0;
            v9 = 0;
            v10 = FIELD_U32(v18, 76) + 72 * *(unsigned __int16 *)(*(_DWORD *)(FIELD_U32(v18, 72) + 56 * v3) + 94);
            do
            {
              v11 = *(unsigned __int8 *)(v7 + 16 * v9);
              v12 = sub_60918700(v10, v11);
              if ( v12 )
                v13 = FIELD_U32(v12, 96) + 2;
              else
                v13 = sub_60918718(v10, v11);
              v20[0] = &sead__SafeStringBase__vtable;
              v20[1] = v13;
              v14 = sub_6095C088(v19, v20);
              if ( v14 >= 0 )
              {
                v15 = &v4[4 * v8];
                *((_DWORD *)v15 + 24) = v14;
                *((_DWORD *)v15 + 26) = v9;
                if ( v8 > 0 )
                  break;
                ++v8;
              }
              ++v9;
            }
            while ( v9 < v6 );
          }
        }
        a2 = v18;
        ++v3;
      }
      while ( v3 != v17 );
    }
    result = a3;
    if ( a3 )
      return sub_60436664(a2);
  }
  return result;
}
