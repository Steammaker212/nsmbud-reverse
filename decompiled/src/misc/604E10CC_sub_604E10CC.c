/* sub_604E10CC
 * address: 0x604E10CC   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E10CC(_DWORD *a1)
{
  int v2; // r8
  _DWORD *v3; // r7
  int v4; // r4
  int v5; // r2
  int v6; // r1
  int v7; // r3
  bool v8; // zf
  int *v9; // r0
  int v10; // r1
  int v11; // r3
  _DWORD *v12; // r9
  int result; // r0

  v2 = a1[1428];
  v3 = (_DWORD *)((char *)&unk_60CA5424 + 8 * v2);
  (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
  (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
  v4 = v3[1];
  (*(void (__fastcall **)(int *))(dword_60CA541C + 12))(&dword_60CA541C);
  if ( v4 != dword_60CA5420 )
  {
    v6 = v3[1];
    v7 = 1;
    v5 = 0;
    while ( *(unsigned __int8 *)(v6 + v7 - 1) == *(unsigned __int8 *)(dword_60CA5420 + v7 - 1) )
    {
      if ( !*(_BYTE *)(v6 + v7 - 1) )
        goto LABEL_11;
      if ( v7 > 0x80000 || *(unsigned __int8 *)(v6 + v7) != *(unsigned __int8 *)(dword_60CA5420 + v7) )
        break;
      if ( !*(_BYTE *)(v6 + v7) )
        goto LABEL_11;
      v7 += 2;
    }
    sub_60473DE4(a1 + 10, 0, (_DWORD *)&unk_60CA5424 + 2 * v2, 1);
  }
LABEL_11:
  v8 = v2 == 20;
  v9 = a1 + 1434;
  v10 = a1[1434];
  if ( v2 != 20 )
  {
    v5 = 0;
    v8 = v2 == 1;
  }
  if ( v8 )
    v5 = -1;
  v11 = a1[1434];
  if ( v10 >= 0 )
    v5 = -1;
  else
    v11 = 480;
  a1[1433] = v11;
  if ( v10 >= 0 )
    v10 = -1;
  a1[1435] = v5;
  v12 = a1 + 1435;
  *v9 = v10;
  result = 1;
  *((_BYTE *)v12 + 4) = 1;
  if ( v2 == 20 )
  {
    result = FIELD_U32(dword_60C99DD4, 764);
    if ( result == 1 )
    {
      *v12 = 0;
      return 0;
    }
  }
  return result;
}
