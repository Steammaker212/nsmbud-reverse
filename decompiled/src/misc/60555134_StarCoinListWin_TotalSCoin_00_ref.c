/* StarCoinListWin_TotalSCoin_00_ref
 * address: 0x60555134   size: 1164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall StarCoinListWin_TotalSCoin_00_ref(int a1, int a2)
{
  int v3; // r4
  int v4; // r6
  int v5; // r0
  _BYTE *v6; // r1
  int v7; // r6
  int v8; // r9
  int v9; // r8
  char *v10; // r5
  int v11; // r0
  int v12; // r6
  int v13; // r11
  int v14; // r10
  int v15; // r0
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // r7
  _DWORD *v18; // r0
  int v19; // r1
  int v20; // r2
  char v21; // r3
  char v22; // r7
  unsigned __int8 v23; // r2
  int v24; // r3
  char v25; // r7
  char v26; // r7
  int v27; // r3
  char v28; // r7
  char v29; // r2
  int v30; // r12
  int v31; // r2
  char v32; // r3
  char v33; // r4
  unsigned __int8 v34; // r2
  int v35; // r3
  char v36; // r4
  char v37; // r7
  char v38; // r7
  int v40; // [sp+Ch] [bp-4Ch]
  int v41; // [sp+10h] [bp-48h]
  char *v42; // [sp+14h] [bp-44h]
  int v43; // [sp+18h] [bp-40h]
  int v44; // [sp+1Ch] [bp-3Ch]
  int v45; // [sp+24h] [bp-34h]
  _DWORD v46[11]; // [sp+2Ch] [bp-2Ch] BYREF

  v3 = a1;
  if ( a2 == 8 )
  {
    v6 = (_BYTE *)(a1 + 4736);
    v4 = dword_60CC6D78;
    if ( FIELD_U8(dword_60CC6D78, 522) )
      goto LABEL_11;
LABEL_9:
    v7 = -1;
    *v6 = 0;
    return v7;
  }
  if ( a2 != 4 )
  {
    v4 = dword_60CC6D78;
    v6 = (_BYTE *)(a1 + 4736);
    if ( (FIELD_U16(dword_60CC6D78, 520) & (unsigned __int16)(1 << a2)) != 0 )
      goto LABEL_11;
    goto LABEL_9;
  }
  v4 = dword_60CC6D78;
  if ( (FIELD_U8(dword_60CC6D78, 520) & 0x10) != 0 )
  {
    v6 = (_BYTE *)(a1 + 4736);
    goto LABEL_11;
  }
  v5 = sub_603F69FC((char *)(dword_60CC6D78 + 796), 4, 36);
  v6 = (_BYTE *)(v3 + 4736);
  if ( v5 < 3 )
    goto LABEL_9;
  v4 = dword_60CC6D78;
LABEL_11:
  *v6 = 1;
  v42 = (char *)(v4 + 796);
  v45 = sub_603F69FC((char *)(v4 + 796), 7, 42);
  v8 = 3572;
  v9 = 0;
  v40 = v3 + 3732;
  v10 = (char *)&unk_60B03BA4 + 144 * a2 + 4;
  v11 = v4 + 52;
  v12 = 0;
  v41 = v11;
  v43 = 0;
  do
  {
    v13 = *((_DWORD *)v10 - 1);
    v14 = *(_DWORD *)v10;
    sub_60473DE4((_DWORD *)v3, 0, &dword_60CAD2B4, 0);
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(v3 + 3512) + 108))(**(_DWORD **)(v3 + 3512));
    if ( v10[4] )
    {
      v15 = sub_6022CBE8(dword_60C8D864, v13, v14);
      v9 += 3;
      if ( v45 <= 2 && !v15 )
      {
LABEL_20:
        *(_BYTE *)(*(_DWORD *)(v3 + v8) + 64) &= ~1u;
        goto LABEL_42;
      }
      v44 = v9;
      v16 = sub_60408230(v41, v13, v14);
      if ( sub_603F69FC(v42, (unsigned __int8)v13, (unsigned __int8)v14) <= 1 )
      {
        sub_60473DE4((_DWORD *)v3, 0, &dword_60CAD2BC, 0);
        (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(v3 + 3512) + 108))(**(_DWORD **)(v3 + 3512));
        v16 = 0x80;
      }
      else
      {
        v43 += (v16 & 1) + ((v16 >> 1) & 1) + ((v16 >> 2) & 1);
      }
      v18 = (_DWORD *)(v3 + v12);
      v19 = v16 & 1;
      v20 = *(_DWORD *)(v3 + v12 + 3700);
      v21 = FIELD_U8(v20, 64);
      v22 = v21 | 1;
      if ( (v16 & 1) == 0 )
        v22 = v21 & 0xFE;
      FIELD_U8(v20, 64) = v22;
      v23 = v16;
      v24 = v18[926];
      v25 = FIELD_U8(v24, 64);
      if ( (v16 & 2) != 0 )
      {
        v26 = v25 | 1;
        ++v19;
      }
      else
      {
        v26 = v25 & 0xFE;
      }
      FIELD_U8(v24, 64) = v26;
      v27 = v18[927];
      v9 = v44;
      v28 = FIELD_U8(v27, 64);
      if ( (v23 & 4) != 0 )
      {
        v29 = v28 | 1;
        ++v19;
      }
      else
      {
        v29 = v28 & 0xFE;
      }
    }
    else
    {
      if ( v14 == -1 )
        goto LABEL_20;
      v17 = sub_60408230(v41, v13, v14);
      if ( sub_603F69FC(v42, (unsigned __int8)v13, (unsigned __int8)v14) <= 1 )
      {
        sub_60473DE4((_DWORD *)v3, 0, &dword_60CAD2BC, 0);
        (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(v3 + 3512) + 108))(**(_DWORD **)(v3 + 3512));
        v17 = 0x80;
      }
      else
      {
        v43 += (v17 & 1) + ((v17 >> 1) & 1) + ((v17 >> 2) & 1);
      }
      v18 = (_DWORD *)(v3 + v12);
      v30 = v3;
      v19 = v17 & 1;
      v31 = *(_DWORD *)(v3 + v12 + 3700);
      v32 = FIELD_U8(v31, 64);
      v33 = v32 | 1;
      if ( (v17 & 1) == 0 )
        v33 = v32 & 0xFE;
      FIELD_U8(v31, 64) = v33;
      v34 = v17;
      v35 = v18[926];
      v36 = FIELD_U8(v35, 64);
      if ( (v17 & 2) != 0 )
      {
        v37 = v36 | 1;
        ++v19;
      }
      else
      {
        v37 = v36 & 0xFE;
      }
      FIELD_U8(v35, 64) = v37;
      v27 = v18[927];
      v3 = v30;
      v38 = FIELD_U8(v27, 64);
      if ( (v34 & 4) != 0 )
      {
        v29 = v38 | 1;
        ++v19;
      }
      else
      {
        v29 = v38 & 0xFE;
      }
      v9 += 3;
    }
    FIELD_U8(v27, 64) = v29;
    *(_BYTE *)(v18[922] + 64) |= 1u;
    *(_BYTE *)(v18[923] + 64) |= 1u;
    *(_BYTE *)(v18[924] + 64) |= 1u;
    if ( v19 >= 3 )
      sub_608502F4(v40 + v12, 1);
LABEL_42:
    v12 += 88;
    v8 += 4;
    v10 += 12;
  }
  while ( v12 != 1056 );
  v7 = v43;
  v46[0] = &sead__SafeStringBase__vtable;
  v46[1] = "StarCoinListWin_TotalSCoin_00";
  sub_6047E0EC(v46, FIELD_U32(v3, 3660), 1, v43);
  FIELD_U8(v3, 4737) = 0;
  if ( v43 == v9 )
  {
    FIELD_U8(v3, 4737) = 1;
    sub_60473DE4((_DWORD *)v3, 1u, &dword_60CAD2C4, 1);
  }
  return v7;
}
