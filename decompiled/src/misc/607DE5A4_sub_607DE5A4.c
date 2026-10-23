/* sub_607DE5A4
 * address: 0x607DE5A4   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DE5A4(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int *v7; // r2
  int v8; // r7
  int v9; // r8
  int v10; // r0
  int v11; // r0

  sub_608CDC24(a1, 2);
  v4 = sub_608DE334(0x1E0u, a2, 4);
  if ( v4 )
  {
    FIELD_U32(a1, 108) = 240;
    FIELD_U32(a1, 112) = v4;
  }
  v5 = sub_608DE334(0x80u, 0, 4);
  LOWORD(v8) = 0;
  LOWORD(v9) = 0;
  if ( v5 )
  {
    v6 = 8;
    v7 = (int *)(a1 + 116);
  }
  HIWORD(v8) = 17184;
  HIWORD(v9) = 17312;
  if ( v5 )
  {
    *v7 = v5;
    v7[1] = v6;
    v7[2] = 0;
    FIELD_U32(a1, 128) = 0;
  }
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = v8;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 144) = v9;
  v10 = sub_608DE334(0x1E0u, a2, 4);
  if ( v10 )
  {
    FIELD_U32(a1, 148) = 240;
    FIELD_U32(a1, 152) = v10;
  }
  v11 = sub_608DE334(0x80u, 0, 4);
  if ( v11 )
  {
    FIELD_U32(a1, 156) = v11;
    FIELD_U32(a1, 160) = 8;
    FIELD_U32(a1, 164) = 0;
    FIELD_U32(a1, 168) = 0;
  }
  FIELD_U32(a1, 172) = 0;
  FIELD_U32(a1, 176) = v8;
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 184) = v9;
  sub_607DDF84((_DWORD *)(a1 + 320), 0xBB80u, 0x1F40u);
  FIELD_U32(a1, 312) = sub_608AE244(a1) / 3u;
  FIELD_U32(a1, 188) = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 24))(a2);
  FIELD_U32(a1, 192) = (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a2 + 24))(a2, FIELD_U32(a1, 312), 4);
  FIELD_U32(a1, 196) = (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a2 + 24))(a2, FIELD_U32(a1, 312), 4);
  FIELD_U32(a1, 200) = (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a2 + 24))(a2, FIELD_U32(a1, 312), 4);
  FIELD_U32(a1, 300) = 0;
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 0;
  FIELD_U8(a1, 2872) = 1;
  return 1;
}
