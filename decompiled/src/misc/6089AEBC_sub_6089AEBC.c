/* sub_6089AEBC
 * address: 0x6089AEBC   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089AEBC(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  _DWORD *v9; // r0
  int v10; // r1
  int v11; // r1
  int v12; // r4
  int v13; // r7
  int v14; // r0
  int v15; // r1
  int v16; // r7
  int v17; // r4
  int v18; // r0
  int v19; // r1
  int v20; // r5
  int v21; // r4
  int v22; // r1
  int v23; // r4
  _DWORD *v24; // r7
  int v25; // r1
  int v26; // r4
  _QWORD v28[5]; // [sp+8h] [bp-28h] BYREF

  v9 = *(_DWORD **)(a3 + 348);
  v10 = v9[10] & v9[11];
  v28[0] = *((_QWORD *)v9 + 5);
  if ( v10 != -1 )
  {
    v11 = a4[60];
    v12 = v9[16];
    v13 = a4[59];
    if ( v11 != -1 )
      sub_608362C8(a2, v11, 0, v28, (_DWORD *)(v12 + 40));
    if ( v13 != -1 )
      sub_608362C8(a2, v13, 4, v28, (_DWORD *)(v12 + 40));
  }
  v14 = FIELD_U32(a3, 348);
  v28[0] = FIELD_U64(v14, 48);
  if ( v28[0] != -1 )
  {
    v15 = a4[62];
    v16 = FIELD_U32(v14, 68);
    v17 = a4[61];
    if ( v15 != -1 )
      sub_608362C8(a2, v15, 0, v28, (_DWORD *)(v16 + 40));
    if ( v17 != -1 )
      sub_608362C8(a2, v17, 4, v28, (_DWORD *)(v16 + 40));
  }
  v18 = FIELD_U32(a3, 348);
  v28[0] = FIELD_U64(v18, 56);
  if ( v28[0] != -1 )
  {
    v19 = a4[64];
    v20 = FIELD_U32(v18, 72);
    v21 = a4[63];
    if ( v19 != -1 )
      sub_608362C8(a2, v19, 0, v28, (_DWORD *)(v20 + 40));
    if ( v21 != -1 )
      sub_608362C8(a2, v21, 4, v28, (_DWORD *)(v20 + 40));
  }
  if ( FIELD_U64(a5, 16) != -1 )
  {
    v22 = a4[66];
    v23 = a4[65];
    if ( v22 != -1 )
      sub_608362C8(a2, v22, 0, (_DWORD *)(a5 + 16), (_DWORD *)(FIELD_U32(a1, 8) + 40));
    if ( v23 != -1 )
      sub_608362C8(a2, v23, 4, (_DWORD *)(a5 + 16), (_DWORD *)(FIELD_U32(a1, 8) + 40));
  }
  v24 = (_DWORD *)(a5 + 24);
  if ( FIELD_U64(a5, 24) != -1 )
  {
    v25 = a4[68];
    v26 = a4[67];
    if ( v25 != -1 )
      sub_608362C8(a2, v25, 0, v24, (_DWORD *)(FIELD_U32(a1, 8) + 40));
    if ( v26 != -1 )
      sub_608362C8(a2, v26, 4, v24, (_DWORD *)(FIELD_U32(a1, 8) + 40));
  }
  return 1;
}
