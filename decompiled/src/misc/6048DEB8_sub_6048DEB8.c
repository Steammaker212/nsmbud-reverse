/* sub_6048DEB8
 * address: 0x6048DEB8   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048DEB8(_DWORD *a1)
{
  unsigned int v2; // r0
  unsigned int *v3; // r5
  int result; // r0
  int v5; // r1
  int v6; // r0
  bool v7; // zf
  unsigned int v8; // r0
  _DWORD *v9; // r5
  _DWORD *v10; // r0
  int v11; // r2
  int v12; // r2
  char v13; // r6
  int v14; // r2
  int v15; // r2
  char v16; // r6
  int v17; // r1
  int v18; // r0
  char v19; // r2
  _DWORD v20[2]; // [sp+4h] [bp-24h] BYREF
  int v21; // [sp+Ch] [bp-1Ch]

  v3 = a1 + 11947;
  v2 = a1[11947];
  if ( v2 >= 4 )
    v2 = 0;
  result = *(unsigned __int8 *)(sub_6047482C(a1[v2 + 3450], 2u) + 51);
  if ( (result & 1) != 0 )
  {
    v5 = 0;
    v6 = a1[11946];
    if ( v6 == 3 )
      v5 = 2;
    v7 = v6 == 4;
    v8 = *v3;
    if ( v7 )
      v5 = 1;
    if ( v8 >= 4 )
      v8 = 0;
    v9 = (_DWORD *)a1[v8 + 3450];
    v21 = v5;
    v10 = v9 + 905;
    v11 = dword_60C9FDD0[0];
    if ( dword_60C9FDD0[0] >= 3u )
      v11 = 0;
    v12 = v10[v11];
    v13 = FIELD_U8(v12, 64) & 0xFE;
    if ( !v21 )
      v13 |= 1u;
    FIELD_U8(v12, 64) = v13;
    v14 = dword_60C9FDD4;
    if ( (unsigned int)dword_60C9FDD4 >= 3 )
      v14 = 0;
    v15 = v10[v14];
    v16 = FIELD_U8(v15, 64) & 0xFE;
    if ( v21 == 1 )
      v16 |= 1u;
    FIELD_U8(v15, 64) = v16;
    v17 = dword_60C9FDD8;
    if ( (unsigned int)dword_60C9FDD8 >= 3 )
      v17 = 0;
    v18 = v10[v17];
    v19 = FIELD_U8(v18, 64) & 0xFE;
    if ( v21 == 2 )
      v19 |= 1u;
    FIELD_U8(v18, 64) = v19;
    v20[0] = &sead__SafeStringBase__vtable;
    v20[1] = sub_60492F00(4);
    sub_60473DE4(v9, 2u, v20, 0);
    sub_60473B58(a1 + 9, 0xEu, 0);
    a1[11949] = 2;
    return 47796;
  }
  return result;
}
