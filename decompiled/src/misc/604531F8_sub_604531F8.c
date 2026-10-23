/* sub_604531F8
 * address: 0x604531F8   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604531F8(int a1)
{
  char v1; // r12
  int v3; // r0
  int v4; // r0
  int v6; // r0
  int v7; // r5
  _BYTE **v8; // r7
  _BYTE *v9; // r6
  int v10; // r0
  bool v11; // zf
  int v12; // r5
  int v13; // r7
  int v14; // r6
  int v15; // r11
  int v16; // r1
  unsigned __int16 v17; // [sp+12h] [bp-2Eh] BYREF
  int v18; // [sp+14h] [bp-2Ch] BYREF
  int v19; // [sp+18h] [bp-28h] BYREF

  FIELD_U8(a1, 1320) = 1;
  if ( FIELD_U8(a1, 1392) && FIELD_S8(a1, 1404) >= 0 && !FIELD_U8(a1, 1406) )
  {
    FIELD_U8(a1, 1394) = 1;
    return 1;
  }
  FIELD_U8(a1, 1394) = 0;
  v3 = FIELD_U32(a1, 1316);
  if ( v3 == 2 )
  {
    sub_60456128(FIELD_U32(a1, 1388));
  }
  else if ( v3 == 1 )
  {
    sub_60456388(FIELD_U32(a1, 1388));
  }
  if ( FIELD_U32(a1, 1316) != 2 && FIELD_U8(LevelInfo_instance, 17) == 40 )
  {
    if ( *(_DWORD *)(FIELD_U32(a1, 1264) + 272) )
    {
      v4 = 30;
    }
    else
    {
      v6 = FIELD_U32(a1, 1408);
      if ( !v6 )
        goto LABEL_16;
      v4 = v6 - 1;
    }
    FIELD_U32(a1, 1408) = v4;
  }
LABEL_16:
  FIELD_U32(a1, 1408) = 30;
  v7 = dword_60CCF448;
  if ( !FIELD_U32(dword_60CCF448, 212) )
    goto LABEL_29;
  v8 = *(_BYTE ***)(dword_60CCF448 + 220);
  while ( 1 )
  {
    v9 = *v8;
    if ( ((unsigned int)&dword_60C8C224 & ~(1615147824 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v10 = (**(int (__fastcall ***)(_BYTE *, int *))v9)(v9, &dword_60C8C220);
    v11 = v9 == 0;
    if ( v9 )
      v11 = (v10 ^ 1) == 1;
    if ( !v11 )
      break;
    if ( ++v8 == (_BYTE **)(FIELD_U32(v7, 220) + 4 * FIELD_U32(v7, 212)) )
      goto LABEL_29;
  }
  if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v9 + 20))(v9) != 1 || v9[353] == 1 )
LABEL_29:
    FIELD_U32(a1, 1408) = 0;
  v12 = a1 + 16;
  v13 = 0;
  v14 = a1 + 1284;
  v15 = dword_60C995D0;
  do
  {
    sub_604534DC(a1, &v19, &v18, &v17, v13);
    if ( FIELD_U32(a1, 1316) == 1 )
      sub_60456428(FIELD_U32(a1, 1388), v13, v19 & 0x3FFF, v18 & 0x3FFF, v17);
    if ( FIELD_U32(v15, 32) )
    {
      v16 = v19 & ~*(_DWORD *)(v14 + 4 * v13);
      v19 = v16;
      *(_DWORD *)(v14 + 4 * v13) = 0;
    }
    else
    {
      v16 = v19;
    }
    sub_6045525C(v12, v16, v18, (__int16)v17);
    ++v13;
    v12 += 312;
  }
  while ( v13 != 4 );
  sub_60453694(a1);
  sub_60453764(a1);
  sub_60453AA8(a1);
  sub_60453D7C(a1);
  sub_60453F44(a1);
  return sub_60454344(a1);
}
