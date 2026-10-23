/* sub_605E73FC
 * address: 0x605E73FC   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605E73FC(int a1)
{
  int v2; // r4
  int v3; // r9
  int v4; // r5
  int *v5; // r7
  int v6; // r7
  int v7; // r4
  int v8; // r10
  int i; // r9
  int v10; // r2
  int v11; // r3
  int v12; // [sp+4h] [bp-7Ch] BYREF
  _DWORD v13[4]; // [sp+8h] [bp-78h] BYREF
  _DWORD v14[3]; // [sp+18h] [bp-68h] BYREF
  char v15; // [sp+24h] [bp-5Ch]
  char v16; // [sp+25h] [bp-5Bh]
  int v17; // [sp+2Ch] [bp-54h]
  int v18; // [sp+30h] [bp-50h]
  int v19; // [sp+34h] [bp-4Ch]
  int v20; // [sp+38h] [bp-48h]
  int v21; // [sp+3Ch] [bp-44h]
  int v22; // [sp+40h] [bp-40h]
  int v23; // [sp+48h] [bp-38h]
  int v24; // [sp+50h] [bp-30h]
  int v25; // [sp+54h] [bp-2Ch]

  if ( PlayerMgr_instance )
  {
    v2 = dword_60CB1BE4;
    if ( dword_60CB1BE4 )
    {
      v3 = 0;
      v4 = sub_6078A030(PlayerMgr_instance);
      v12 = 0;
      if ( (FIELD_U8(a1, 20) & 0xF0) != 0 )
      {
        v5 = (int *)(a1 + 6248);
        sub_605E91CC(v2, FIELD_U32(a1, 6248), &v12);
        v3 = v4 - v12;
        v4 = v12;
      }
      else
      {
        v12 = v4;
        v5 = (int *)(a1 + 6248);
      }
      if ( v4 >= 1 )
      {
        v6 = *v5;
        v7 = 0;
        do
        {
          sub_605E8BD4(v6, a1 + 108, v7, v7, v4);
          v4 = v12;
          ++v7;
        }
        while ( v7 < v12 );
      }
      if ( v3 >= 1 )
      {
        v8 = v3 - 1;
        for ( i = 0; ; ++i )
        {
          v10 = FIELD_U32(a1, 112);
          v11 = FIELD_U32(a1, 116);
          v13[0] = FIELD_U32(a1, 108);
          v13[1] = v10;
          v13[2] = v11;
          v14[0] = v13;
          v15 = FIELD_U8(a1, 86);
          v16 = 0;
          v14[2] = 1;
          v17 = 2;
          v18 = 0;
          v19 = FIELD_U8(a1, 87);
          v20 = 0;
          v21 = 2;
          v22 = 0;
          v23 = 4;
          v24 = 0;
          v25 = (v4 + i) & 1;
          sub_60466800(dword_60C9D3E4, (int)v14, 0, v4 + i);
          if ( v8 == i )
            break;
          v4 = v12;
        }
      }
    }
  }
}
