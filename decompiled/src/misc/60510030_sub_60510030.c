/* sub_60510030
 * address: 0x60510030   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60510030(int a1)
{
  unsigned int v2; // r5
  int *v3; // r6
  int v4; // r0
  unsigned int v5; // r3
  int v6; // r0
  int v7; // r2
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r7
  int v12; // r1
  int v13; // r2
  int v14; // r0
  int v15; // r5

  v3 = (int *)(a1 + 9568);
  v2 = FIELD_U32(a1, 9568);
  v4 = sub_60834614(9568);
  v5 = v2;
  if ( v2 >= 6 )
    v5 = 0;
  v6 = *(_DWORD *)(v4 + 72 * v5 + 32);
  if ( v6 == 6 || FIELD_U32(a1, 5932) != v6 )
  {
    FIELD_U32(a1, 5932) = v6;
    FIELD_U32(a1, 5928) |= 1u;
  }
  if ( v2 <= 3 && FIELD_U32(a1, 5936) != v2 )
  {
    FIELD_U32(a1, 5936) = v2;
    FIELD_U32(a1, 5928) |= 1u;
  }
  v7 = 0;
  if ( (unsigned int)*v3 <= 3 )
  {
    v7 = 0;
    if ( dword_60C9CFB8 )
    {
      v8 = sub_6045B330((__guard *)dword_60C9CFB8, *v3) - 1;
      v7 = 0;
      if ( v8 <= 4 )
        v7 = dword_60B03810[v8];
    }
  }
  FIELD_U32(a1, 11612) = v7;
  ((void (__fastcall *)(int))loc_6051141C)(a1);
  sub_60512E5C(a1);
  if ( sub_6047467C((_DWORD *)(a1 + 56), 2u, &dword_60CA84B8, (int)&dword_60CA8478, 1.0, 0) == 1 )
  {
    if ( sub_6047482C(a1 + 56, 2u) )
    {
      v9 = sub_6047482C(a1 + 56, 2u);
      if ( v9 )
        (*(void (__fastcall **)(int, float))(*(_DWORD *)v9 + 96))(v9, (float)*v3);
    }
  }
  ((void (__fastcall *)(int))loc_60512F4C)(a1);
  v10 = sub_6047482C(a1 + 56, 0);
  if ( v10 )
  {
    v11 = FIELD_U32(v10, 56);
    (*(void (__fastcall **)(int *))(dword_60CA84D8 + 12))(&dword_60CA84D8);
    (*(void (__fastcall **)(int *))(dword_60CA84D8 + 12))(&dword_60CA84D8);
    if ( dword_60CA84DC == v11 )
      goto LABEL_30;
    v13 = 1;
    v12 = 0;
    while ( *(unsigned __int8 *)(dword_60CA84DC + v13 - 1) == *(unsigned __int8 *)(v11 + v13 - 1) )
    {
      if ( !*(_BYTE *)(dword_60CA84DC + v13 - 1) )
        goto LABEL_30;
      if ( v13 > 0x80000 || *(unsigned __int8 *)(dword_60CA84DC + v13) != *(unsigned __int8 *)(v11 + v13) )
        break;
      if ( !*(_BYTE *)(dword_60CA84DC + v13) )
        goto LABEL_30;
      v13 += 2;
    }
  }
  if ( sub_6047467C((_DWORD *)(a1 + 56), 0, &dword_60CA84A0, (int)&dword_60CA8468, 1.0, 0) == 1 )
  {
    v14 = sub_6047482C(a1 + 56, 0);
    if ( v14 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 104))(v14);
  }
LABEL_30:
  v15 = 4;
  if ( dword_60CABDE4 && !sub_60542604(dword_60CABDE4, v12) )
  {
    sub_605426E8(dword_60CABDE4);
    v15 = 0;
  }
  FIELD_U32(a1, 9576) = v15;
  FIELD_U16(a1, 9572) = 257;
  return 9572;
}
