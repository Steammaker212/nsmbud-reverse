/* sub_608CC820
 * address: 0x608CC820   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CC820(int a1)
{
  int v2; // r6
  _DWORD *v3; // r0
  int v4; // r7
  int v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r6
  _DWORD *v9; // r0
  int v10; // r8
  _DWORD v12[5]; // [sp+4h] [bp-B4h] BYREF
  _DWORD v13[2]; // [sp+18h] [bp-A0h] BYREF
  int v14; // [sp+20h] [bp-98h]
  int v15; // [sp+24h] [bp-94h]
  int v16; // [sp+2Ch] [bp-8Ch]

  v2 = FIELD_U8(a1, 190);
  v3 = (_DWORD *)sub_608B4B98((int)v12, FIELD_U32(a1, 200), FIELD_S8(a1, 191));
  v4 = 0;
  if ( sub_608B4C78(v3, (int)v13) == 1 )
  {
    v5 = FIELD_U32(a1, 208);
    if ( v5 == 1 )
    {
      v6 = v15 * (__int64)FIELD_S32(a1, 212) / 1000;
    }
    else
    {
      v6 = 0;
      if ( !v5 )
        v6 = FIELD_U32(a1, 212);
    }
    v4 = 0;
    if ( v6 <= v16 )
    {
      v7 = v14;
      if ( v14 >= 2 )
        v7 = 2;
      v8 = sub_608C7D98(v7, v2 + 64, (int)sub_608CCBB4, a1);
      if ( v8 )
      {
        v9 = sub_608CBCA4(v12, FIELD_U32(a1, 196));
        if ( sub_608CBD20(v9, a1 + 248, FIELD_U32(a1, 204)) == 1 )
        {
          if ( (FIELD_U8(a1, 224) & 1) != 0 )
            v10 = FIELD_U32(a1, 220);
          else
            v10 = FIELD_U8(a1, 256);
          sub_608C5658(v8 + 16, FIELD_U8(a1, 252));
          sub_608C5670(v8 + 16, FIELD_U8(a1, 255));
          sub_608C5684(v8 + 16, FIELD_U8(a1, 253));
          sub_608C5700(v8 + 16, FIELD_U8(a1, 254));
          sub_608C5708(v8 + 16, v10);
          FIELD_U8(v8, 180) = FIELD_U8(a1, 189);
          *(_DWORD *)(FIELD_U32(v8, 364) + 552) = FIELD_U32(a1, 272);
          sub_608CA470(*(_DWORD **)(v8 + 364), FIELD_U32(a1, 32));
          sub_608C7828(v8, v13, -1, v6, FIELD_U8(a1, 228));
          v4 = 1;
          FIELD_U32(a1, 268) = v8;
          FIELD_U8(a1, 188) = 1;
        }
      }
    }
  }
  return v4;
}
