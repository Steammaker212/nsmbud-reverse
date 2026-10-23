/* sub_604A7F38
 * address: 0x604A7F38   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A7F38(int a1)
{
  _DWORD *v2; // r5
  int *v3; // r6
  int v4; // r0
  int v5; // r1
  int *v6; // r6
  int v7; // r7
  int v8; // r0
  unsigned int v9; // r5
  unsigned int v10; // r0
  unsigned int v11; // r3
  int v12; // r3
  char v13; // r1
  unsigned int v14; // r7
  int result; // r0
  int (**v16)(); // [sp+8h] [bp-28h] BYREF
  int v17; // [sp+Ch] [bp-24h]

  v2 = (_DWORD *)(a1 + 64);
  v16 = &sead__SafeStringBase__vtable;
  v17 = dword_60CA17A4;
  if ( sub_6047467C((_DWORD *)(a1 + 64), 6u, &v16, (int)&dword_60CA1760, 1.0, 0) == 1 )
  {
    v3 = (int *)sub_6047482C((int)v2, 6u);
    v4 = sub_60834FDC();
    v5 = *v3;
    if ( v4 == 1 )
      (*(void (__fastcall **)(int *))(v5 + 108))(v3);
    else
      (*(void (__fastcall **)(int *))(v5 + 104))(v3);
  }
  v16 = &sead__SafeStringBase__vtable;
  v17 = dword_60CA1774;
  v6 = (int *)(a1 + 279736);
  v7 = FIELD_U32(a1, 279736);
  if ( sub_6047467C(v2, 4u, &v16, (int)&dword_60CA1750, 1.0, 0) == 1 )
  {
    v8 = sub_6047482C((int)v2, 4u);
    if ( v8 )
      (*(void (__fastcall **)(int, float))(*(_DWORD *)v8 + 96))(v8, (float)(v7 - 1));
  }
  v9 = 0;
  sub_604AD550(a1, FIELD_U32(a1, 279724), 0, 1.0);
  sub_60502548(a1 + 85956);
  FIELD_U16(a1, 87008) = 0;
  sub_6047EABC((_DWORD *)(a1 + 85996));
  if ( *v6 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = 0;
      if ( v9 < 6 )
        v11 = v9;
      v12 = *(_DWORD *)(dword_60C99DEC + 72 * v11 + 48);
      if ( v12 == 2 )
      {
LABEL_15:
        v13 = 0;
        goto LABEL_17;
      }
      if ( v12 == 3 )
        break;
      if ( (int)++v9 >= *v6 )
        goto LABEL_15;
    }
    v13 = 1;
    do
    {
LABEL_17:
      v14 = 0;
      if ( v10 < 4 )
        v14 = v10;
      ++v10;
      *(_BYTE *)(a1 + 20556 * v14 + 24284) = v13;
    }
    while ( (int)v10 < *v6 );
  }
  result = dword_60C99E24;
  if ( dword_60C99E24 )
    return sub_603FEFE8(dword_60C99E24);
  return result;
}
