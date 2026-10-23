/* sub_6089632C
 * address: 0x6089632C   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089632C(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v9; // r6
  int v10; // r7
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int v15; // [sp+8h] [bp-50h] BYREF
  int v16; // [sp+Ch] [bp-4Ch]
  int v17; // [sp+10h] [bp-48h]
  int v18; // [sp+14h] [bp-44h]
  int v19; // [sp+18h] [bp-40h]
  int v20; // [sp+1Ch] [bp-3Ch]
  int v21; // [sp+20h] [bp-38h]
  int v22; // [sp+24h] [bp-34h]
  int v23; // [sp+28h] [bp-30h] BYREF
  int v24; // [sp+2Ch] [bp-2Ch]
  int v25; // [sp+30h] [bp-28h]
  int v26; // [sp+34h] [bp-24h]

  v9 = 1;
  if ( !FIELD_U8(a1, 76) )
  {
    v9 = 0;
    FIELD_U32(a1, 368) = 0;
    FIELD_U32(a1, 72) = a5;
    FIELD_U32(a1, 372) = 0;
    v26 = 0;
    v25 = 0;
    v24 = 0;
    v23 = 0;
    sub_6083D5B0(&v23);
    v22 = 0;
    v21 = 0;
    v20 = 0;
    v19 = 0;
    v18 = 0;
    v17 = 0;
    v16 = 0;
    v24 = a4;
    v15 = 0;
    sub_6083D5C0(&v15);
    v15 = 34;
    FIELD_U32(a1, 376) = sub_608352A0(a2, (int)&v23);
    sub_6083650C();
    v10 = FIELD_U32(a1, 72);
    FIELD_U32(a1, 372) = v10;
    v11 = sub_60836514();
    FIELD_U32(a1, 372) = (v10 + v11 - 1) & -v11;
    v12 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 8))(a3);
    FIELD_U32(a1, 368) = v12;
    if ( v12 )
    {
      v13 = FIELD_U32(a1, 372);
      v17 = v12;
      v16 = v13;
      sub_60836538(a1 + 80, a2, &v15);
      v23 = FIELD_U32(a1, 72);
      sub_608353C0(a1, a2, &v23, (_DWORD *)(a1 + 80), 0);
      v9 = 1;
      FIELD_U8(a1, 76) = 1;
    }
  }
  return v9;
}
