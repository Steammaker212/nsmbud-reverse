/* sub_608B7B18
 * address: 0x608B7B18   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B7B18(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r5
  int v5; // r7
  int v6; // r0
  int result; // r0
  _DWORD *v8; // r5
  int v9; // r6
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r6
  int v14; // t1
  int v15; // t1
  _DWORD *v16; // r5
  int v17; // t1

  FIELD_U8(a1, 39) = 1;
  v2 = FIELD_U8(a1, 458);
  if ( v2 )
  {
    v3 = sub_608C3C60(v2);
    sub_608C411C(v3, a1 + 176);
    FIELD_U8(a1, 458) = 0;
  }
  v4 = a1 + 244;
  v5 = 0;
  if ( FIELD_U8(a1, 37) )
    FIELD_U8(a1, 37) = 0;
  do
  {
    if ( *(_DWORD *)(v4 + 4 * v5) )
    {
      sub_608BB040();
      (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 232) + 12))(
        FIELD_U32(a1, 232),
        *(_DWORD *)(v4 + 4 * v5));
      *(_DWORD *)(v4 + 4 * v5) = 0;
    }
    ++v5;
  }
  while ( v5 != 16 );
  if ( FIELD_U8(a1, 36) )
  {
    v6 = sub_608D3D58();
    sub_608D3DDC(v6, a1 + 164);
    FIELD_U8(a1, 36) = 0;
  }
  sub_608B6C94(a1 + 408);
  sub_608B4A30(a1 + 344);
  sub_608B6C94(a1 + 420);
  sub_608B4A30(a1 + 360);
  sub_608B6C94(a1 + 432);
  sub_608B4A30(a1 + 376);
  sub_608B6C94(a1 + 444);
  sub_608B4A30(a1 + 392);
  result = FIELD_U8(a1, 457);
  if ( FIELD_U8(a1, 457) )
  {
    sub_608D3B00(a1);
    result = 0;
    FIELD_U8(a1, 457) = 0;
  }
  v8 = *(_DWORD **)(a1 + 488);
  if ( v8 )
  {
    v9 = FIELD_U32(a1, 484);
    if ( nn__os__TryWaitEvent(v8 + 3) == 1 && nn__os__TryWaitEvent(v8 + 41) )
    {
      v10 = v8[35];
      v8[63] = v10;
      v11 = sub_608C4DF4(v10);
      sub_608C4F14(v11, v8 + 38, 1);
      v14 = FIELD_U32(v9, 20);
      v13 = v9 + 20;
      v12 = v14;
    }
    else
    {
      v15 = FIELD_U32(v9, 28);
      v13 = v9 + 28;
      v12 = v15;
    }
    v17 = v8[218];
    v16 = v8 + 218;
    *v16 = v12;
    FIELD_U32(v17, 4) = v13;
    *(_DWORD *)(*(_DWORD *)v13 + 4) = v16;
    *(_DWORD *)v13 = v17;
    FIELD_U32(a1, 488) = 0;
    return 0;
  }
  return result;
}
