/* sub_608D7830
 * address: 0x608D7830   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D7830(int a1, int a2)
{
  int v4; // r5
  int *v5; // r0
  int v6; // r7
  int v7; // r6
  bool v8; // r10
  int v9; // r0
  int v10; // r1
  int v11; // r6
  _DWORD *v12; // r0
  int v13; // r2
  int v14; // r1
  int v15; // r0
  _BYTE v17[4]; // [sp+0h] [bp-78h] BYREF
  int v18; // [sp+4h] [bp-74h]
  int v19; // [sp+8h] [bp-70h]
  int v20; // [sp+Ch] [bp-6Ch]
  int v21; // [sp+14h] [bp-64h]
  int v22; // [sp+18h] [bp-60h]
  int v23; // [sp+20h] [bp-58h]
  int v24; // [sp+24h] [bp-54h]
  int v25; // [sp+44h] [bp-34h]
  int v26; // [sp+48h] [bp-30h]
  int v27; // [sp+4Ch] [bp-2Ch]
  int v28; // [sp+50h] [bp-28h] BYREF
  int v29; // [sp+54h] [bp-24h]

  sub_608BCDA8(&v28);
  v4 = 0;
  if ( sub_608BCAEC(a1, &v28, (int)&unk_60CC9900, 0x5200u) == 1 )
  {
    v4 = 0;
    if ( sub_608BCEC4(&v28, (int)v17) == 1 )
    {
      v5 = (int *)sub_608BCA50(v29);
      v6 = *v5;
      FIELD_U32(a1, 48) = *v5;
      *(_DWORD *)(FIELD_U32(a1, 28) + 52) = v6;
      v7 = FIELD_U32(a1, 28);
      v8 = sub_608BCE8C((int)&v28);
      *(_DWORD *)v7 = sub_608B4B88(v17[0]);
      FIELD_U32(v7, 4) = v18;
      FIELD_U8(v7, 8) = v17[1];
      FIELD_U32(v7, 12) = v19;
      FIELD_U32(v7, 16) = v20;
      FIELD_U32(v7, 20) = v25;
      FIELD_U32(v7, 24) = v26;
      FIELD_U32(v7, 36) = v22;
      FIELD_U32(v7, 40) = v21;
      FIELD_U32(v7, 48) = v23;
      FIELD_U32(v7, 44) = v24;
      FIELD_U32(v7, 32) = v27;
      FIELD_U8(v7, 28) = v8;
      FIELD_U32(v7, 172) = v17[3];
      if ( !sub_608BCE74((int)&v28) || sub_608D7D4C(a1, &v28) == 1 )
      {
        v9 = **(_DWORD **)(a1 + 28);
        FIELD_U32(a1, 6396) = v9;
        if ( v9 == 2 )
        {
          if ( sub_608D7EF8(a1, &v28, v6, a2 + 20) != 1 )
            return v4;
        }
        else if ( v6 )
        {
          memset((void *)(a2 + 20), 0, 4 * v6);
        }
        v4 = 0;
        v10 = 0;
        if ( v28 )
        {
          v11 = sub_608BC9CC(v28);
          v10 = v11 + *(_DWORD *)(sub_608BCA14(v29) + 52) + 8;
        }
        FIELD_U32(a1, 732) = v10;
        v12 = *(_DWORD **)(a1 + 28);
        FIELD_U32(a1, 724) = (unsigned int)(v12[4] - 1) / v12[9];
        v13 = v12[3] / v12[9];
        FIELD_U32(a1, 728) = v13;
        FIELD_U32(a1, 736) = v10 + v12[10] * v13 * FIELD_U32(a1, 48);
        FIELD_U32(a1, 740) = 0;
        *(_BYTE *)(FIELD_U32(a1, 28) + 29) = sub_608BCEA4((int)&v28);
        if ( sub_608D477C(a1 + 768, a1, FIELD_U32(a1, 28)) == 1 )
        {
          v14 = FIELD_U32(a1, 28);
          v15 = FIELD_U32(a1, 788) / FIELD_U32(v14, 36);
          FIELD_U32(a1, 720) = v15;
          (*(void (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 24) + 24))(
            FIELD_U32(a1, 24),
            FIELD_U32(a1, 732) + FIELD_U32(v14, 40) * v15 * FIELD_U32(a1, 48),
            0);
          return 1;
        }
      }
    }
  }
  return v4;
}
