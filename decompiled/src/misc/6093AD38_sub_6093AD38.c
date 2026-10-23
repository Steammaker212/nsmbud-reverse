/* sub_6093AD38
 * address: 0x6093AD38   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6093AD38(int a1, _DWORD *a2, int *a3, int a4, int a5, int a6, int a7)
{
  int v10; // r7
  unsigned int v11; // r2
  _DWORD *v12; // r0
  _DWORD *v13; // r1
  int v14; // r3
  int v15; // r7
  int v17; // [sp+Ch] [bp-1034h]
  int v18; // [sp+10h] [bp-1030h]
  int v19; // [sp+14h] [bp-102Ch]
  _DWORD v20[2]; // [sp+18h] [bp-1028h] BYREF
  int v21; // [sp+20h] [bp-1020h]
  int v22; // [sp+24h] [bp-101Ch]
  int v23; // [sp+28h] [bp-1018h]
  int v24; // [sp+2Ch] [bp-1014h]
  int v25; // [sp+30h] [bp-1010h]
  int v26; // [sp+34h] [bp-100Ch]

  v10 = 0;
  if ( FIELD_U32(dword_60CD0B60, 20) >= 0x38u )
    v10 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 220);
  v11 = FIELD_U32(v10, 608);
  v12 = *(_DWORD **)(v10 + 612);
  v13 = v12;
  if ( v11 > 3 )
    v13 = v12 + 9;
  if ( *v13 != -1 )
  {
    sub_6091B890(v13, a1, 4, a4);
    v11 = FIELD_U32(v10, 608);
    v12 = *(_DWORD **)(v10 + 612);
  }
  v15 = a2[2];
  if ( v11 > 4 )
    v12 += 12;
  v14 = a2[1];
  v17 = *a3;
  v18 = a3[1];
  v19 = a3[2];
  if ( *v12 != -1 )
  {
    v20[0] = *a2;
    v20[1] = v14;
    v21 = v15;
    v22 = 0;
    v23 = v17;
    v24 = v18;
    v25 = v19;
    v26 = 0;
    sub_6091B890(v12, a1, 8, (int)v20);
  }
  sub_60919C54(v20);
  v21 = 1;
  sub_60915B7C(dword_60CCFC8C, a1);
  dword_60CC7870(FIELD_U32(a1, 192), v21, 0, 2);
  return sub_60919C90(v20);
}
