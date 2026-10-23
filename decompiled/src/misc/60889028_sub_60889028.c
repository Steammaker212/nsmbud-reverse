/* sub_60889028
 * address: 0x60889028   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60889028(int a1, int a2, int a3, int a4)
{
  _DWORD *v8; // r0
  _DWORD *v9; // r4
  int v10; // r0
  int v11; // r1
  bool v12; // cc
  _DWORD *v13; // r0

  if ( dword_60CC801C )
    debugPrintRelated2("StripeSystem is already initialized.\n");
  v8 = (_DWORD *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 8))(a1, 36, 128);
  v9 = v8;
  if ( v8 )
  {
    v8[8] = 0;
    *v8 = off_60C5AA6C;
    v8[1] = a2;
    v8[2] = a1;
    v8[3] = a3;
    v8[4] = a4;
    v8[5] = a4 << 7;
    v8[6] = 0;
    v8[7] = 0;
    v10 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v9[8] = v10;
    if ( (int)v9[4] >= 1 )
    {
      FIELD_U32(v10, 80) = 0;
      *(_DWORD *)(v9[8] + 92) = 0;
      *(_BYTE *)(v9[8] + 116) = 0;
      *(_DWORD *)(v9[8] + 96) = 0;
      if ( (int)v9[4] >= 2 )
      {
        v11 = 0;
        do
        {
          *(_DWORD *)(v9[8] + (v11 << 7) + 208) = 0;
          *(_DWORD *)(v9[8] + (v11 << 7) + 220) = 0;
          *(_BYTE *)(v9[8] + (v11 << 7) + 244) = 0;
          *(_DWORD *)(v9[8] + (v11 << 7) + 224) = 0;
          v12 = v11 + 2 < v9[4];
          ++v11;
        }
        while ( v12 );
      }
    }
    v13 = (_DWORD *)v9[1];
    v13[491] = 0;
    v13[492] = &loc_608888F0;
    v13[493] = sub_60888DF0;
    v13[494] = 0;
    v13[495] = sub_60888E38;
    v13[496] = sub_60888E60;
    v13[497] = sub_60888EC8;
    v13[498] = sub_60888BC8;
    v13[499] = sub_60888C64;
    v13[500] = sub_60888D64;
    v13[501] = sub_60888FA4;
    dword_60CC801C = (int)v9;
  }
  else
  {
    debugPrintRelated3("[Stripe] Memory Allocate Error!! : %d\n");
  }
}
