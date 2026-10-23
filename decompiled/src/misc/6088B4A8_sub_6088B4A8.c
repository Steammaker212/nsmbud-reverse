/* sub_6088B4A8
 * address: 0x6088B4A8   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6088B4A8(int a1, int a2, int a3, int a4)
{
  _DWORD *v8; // r0
  _DWORD *v9; // r4
  int v10; // r0
  int v11; // r0
  int v12; // r2
  int v13; // r3
  _DWORD *v14; // r0

  if ( SuperStripe_instance )
    debugPrintRelated2("SuperStripeSystem is already initialized.\n");
  v8 = (_DWORD *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 8))(a1, 36, 128);
  v9 = v8;
  if ( v8 )
  {
    v8[8] = 0;
    *v8 = off_60C5AA84;
    v8[1] = a2;
    v8[2] = a1;
    v8[3] = a3;
    v8[4] = a4;
    v8[5] = 144 * a4;
    v8[6] = 0;
    v8[7] = 0;
    v10 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v9[8] = v10;
    if ( (int)v9[4] >= 1 )
    {
      FIELD_U8(v10, 128) = 0;
      *(_DWORD *)(v9[8] + 96) = 0;
      *(_DWORD *)(v9[8] + 92) = 0;
      if ( (int)v9[4] >= 2 )
      {
        v11 = 1;
        v12 = 0;
        do
        {
          ++v11;
          *(_BYTE *)(v9[8] + v12 + 272) = 0;
          *(_DWORD *)(v9[8] + v12 + 240) = 0;
          v13 = v9[8] + v12;
          v12 += 144;
          FIELD_U32(v13, 236) = 0;
        }
        while ( v11 < v9[4] );
      }
    }
    v14 = (_DWORD *)v9[1];
    v14[502] = 0;
    v14[503] = &loc_6088AD8C;
    v14[504] = sub_6088B274;
    v14[505] = 0;
    v14[506] = sub_6088B2BC;
    v14[507] = sub_6088B2E4;
    v14[508] = sub_6088B34C;
    v14[509] = sub_6088B038;
    v14[510] = sub_6088B0E4;
    v14[511] = sub_6088B1E8;
    v14[512] = sub_60888FA4;
    SuperStripe_instance = (int)v9;
  }
  else
  {
    debugPrintRelated3("[SuperStripe] Memory Allocate Error!! : %d\n");
  }
}
