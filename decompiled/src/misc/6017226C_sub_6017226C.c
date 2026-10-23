/* sub_6017226C
 * address: 0x6017226C   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6017226C(int a1, _DWORD *a2)
{
  int v3; // r6
  _DWORD *v4; // r5
  char *v5; // r0
  int v6; // r1
  bool v7; // cc
  int v8; // r7
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r2
  int v12; // r1
  int v13; // r2

  v3 = sub_601A443C(dword_60C89E18, *a2, a2[1]);
  v4 = (_DWORD *)sub_60182E38(v3, a2[2]);
  (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
  v5 = (char *)v4[1];
  v6 = 0;
  while ( v5[v6] )
  {
    if ( !v5[v6 + 1] )
    {
      ++v6;
      break;
    }
    if ( !v5[v6 + 2] )
    {
      v6 += 2;
      break;
    }
    v7 = v6 + 2 < 0x80000;
    v6 += 3;
    if ( !v7 )
    {
      v6 = 0;
      break;
    }
  }
  v8 = 1;
  if ( v6 < 0 )
    v5 = &byte_60B3BA34;
  if ( *v5 == 70 && !sub_60182E50(v3, a2[2]) )
  {
    v9 = sub_6081F5DC(dword_60CC6D78, *a2, a2[1], v4);
    v10 = *a2;
    v11 = a2[1];
    v8 = 0;
    if ( *a2 >= 9u )
      v10 = 0;
    v12 = 9 * v10;
    if ( v11 >= 2 )
      v11 = 0;
    v13 = 9 * v11;
    if ( v9 >= 0x80 )
      v9 = 0;
    if ( (*(_BYTE *)(dword_60CC6D78 + (v12 << 10) + (v13 << 9) + 36 * v9 + 15572) & 2) == 0 )
      return 1;
  }
  return v8;
}
