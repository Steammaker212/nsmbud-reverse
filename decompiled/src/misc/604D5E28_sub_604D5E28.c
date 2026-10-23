/* sub_604D5E28
 * address: 0x604D5E28   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D5E28(int result)
{
  int v1; // r7
  char v2; // r12
  int v3; // r5
  _BYTE *v4; // r3
  int v5; // r11
  int v6; // r2
  unsigned int v7; // r1
  int *v8; // r4
  int *v9; // r8
  int *v10; // r4
  unsigned int v11; // r6
  unsigned int v12; // r6
  unsigned int v13; // r1
  int v14; // r4
  bool v15; // zf
  _DWORD *v16; // r4
  int v17; // r1
  int v18; // r1
  int v19; // r2

  v1 = 0;
  v2 = 0;
  v3 = 0;
  FIELD_U32(result, 52196) = -1;
  v4 = (_BYTE *)(result + 52060);
  v5 = result + 3652;
  do
  {
    v6 = *(_DWORD *)(result + 3848 + 4 * v3);
    v7 = HIWORD(dword_60CA3638[48 * FIELD_U32(result, 36) + 2 + v1]);
    if ( v7 == 49 )
    {
      FIELD_U8(v6, 64) &= ~1u;
    }
    else
    {
      v8 = &dword_60CA3638[48 * FIELD_U32(result, 36)];
      v9 = &v8[v1];
      v10 = &v8[4 * v3];
      v11 = *((unsigned __int16 *)v9 + 4);
      if ( v11 >= 0x31 )
        v11 = 0;
      *((_DWORD *)v4 - 2) = *(_DWORD *)(v5 + 4 * v11);
      v12 = 0;
      if ( v7 < 0x31 )
        v12 = v7;
      v13 = (unsigned __int16)(v7 - 14);
      *((_DWORD *)v4 - 1) = *(_DWORD *)(v5 + 4 * v12);
      v14 = *((unsigned __int8 *)v10 + 12);
      *v4 = v14;
      v15 = v14 == 0;
      v16 = (_DWORD *)(result + 52196);
      if ( v15 )
        v16 = (_DWORD *)(result + 52200);
      *v16 = v3;
      FIELD_U32(v6, 24) = 0;
      FIELD_U32(v6, 28) = 0;
      FIELD_U32(v6, 32) = 0;
      v2 |= v13 < 0xC;
      FIELD_U8(v6, 64) |= 0x11u;
    }
    ++v3;
    v4 += 12;
    v1 += 4;
  }
  while ( v3 != 12 );
  FIELD_U8(result, 52636) = v2 & 1;
  v17 = FIELD_U32(result, 3896);
  FIELD_U32(v17, 24) = 0;
  FIELD_U32(v17, 28) = 0;
  FIELD_U32(v17, 32) = 0;
  FIELD_U8(v17, 64) |= 0x10u;
  v18 = -192;
  do
  {
    v19 = result + v18;
    v18 += 8;
    *(_BYTE *)(FIELD_U32(v19, 3848) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(v19, 3852) + 64) &= ~1u;
  }
  while ( v18 );
  return result;
}
