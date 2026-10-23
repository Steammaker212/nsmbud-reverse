/* sub_60901DBC
 * address: 0x60901DBC   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60901DBC(int a1, int a2)
{
  _DWORD *v3; // r4
  int v4; // r0
  int v5; // r6
  _BYTE *v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r6
  int v11; // r0
  unsigned int v12; // r6
  _DWORD v14[2]; // [sp+0h] [bp-40h] BYREF
  int v15; // [sp+8h] [bp-38h]
  int v16; // [sp+Ch] [bp-34h]
  int v17; // [sp+10h] [bp-30h]
  int v18; // [sp+14h] [bp-2Ch]
  int v19; // [sp+18h] [bp-28h]
  int v20; // [sp+1Ch] [bp-24h]
  char v21; // [sp+20h] [bp-20h]
  char v22; // [sp+21h] [bp-1Fh]
  int v23; // [sp+24h] [bp-1Ch]
  int v24; // [sp+28h] [bp-18h]
  unsigned __int8 v25; // [sp+2Ch] [bp-14h]

  v3 = (_DWORD *)(*(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 28))(
                   a1,
                   FIELD_U32(a2, 8),
                   FIELD_U32(a2, 16));
  if ( !v3 )
    return 0;
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = &byte_60B3BA34;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v21 = 1;
  v22 = 1;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  sead__SafeStringBase__operator_assign((int)v14, a2);
  v15 = FIELD_U32(a2, 24);
  v16 = FIELD_U32(a2, 28);
  v19 = FIELD_U32(a2, 32);
  v17 = FIELD_U32(a2, 12);
  v20 = FIELD_U32(a2, 44);
  v21 = FIELD_U8(a2, 48);
  v4 = FIELD_U32(a2, 20);
  if ( !v4 )
  {
    v5 = (FIELD_S32(a2, 16) >> 31) | 1;
    v4 = (*(int (__fastcall **)(_DWORD *))(*v3 + 16))(v3) * v5;
  }
  v18 = v4;
  v6 = *(_BYTE **)(a2 + 40);
  if ( v6 )
    v7 = sub_608E6154(v6);
  else
    v7 = sub_608E8914(dword_60CCEBD0, (int)v14);
  v8 = v7;
  if ( !v7 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
    return 0;
  }
  if ( !v3[1] )
  {
    v9 = v23;
    v10 = v24;
    v11 = v25;
    v3[1] = v8;
    v3[2] = v9;
    v3[3] = v10;
    v12 = v3[4] & 0xFFFFFFFE;
    if ( v11 )
      v12 = v3[4] | 1;
    v3[4] = v12;
    (*(void (__fastcall **)(_DWORD *))(*v3 + 20))(v3);
  }
  return v3;
}
