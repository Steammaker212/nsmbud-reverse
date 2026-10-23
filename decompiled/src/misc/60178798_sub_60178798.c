/* sub_60178798
 * address: 0x60178798   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60178798(int a1, _DWORD *a2)
{
  int v4; // r0
  _DWORD *v5; // r6
  char *v6; // r0
  int v7; // r1
  bool v8; // cc
  int v9; // r0
  int v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r1
  int result; // r0
  int v14; // r2
  int v15; // r3

  v4 = sub_601A443C(dword_60C89E18, *a2, a2[1]);
  v5 = (_DWORD *)sub_60182E38(v4, a2[2]);
  (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
  v6 = (char *)v5[1];
  v7 = 0;
  while ( v6[v7] )
  {
    if ( !v6[v7 + 1] )
    {
      ++v7;
      break;
    }
    if ( !v6[v7 + 2] )
    {
      v7 += 2;
      break;
    }
    v8 = v7 + 2 < 0x80000;
    v7 += 3;
    if ( !v8 )
    {
      v7 = 0;
      break;
    }
  }
  if ( v7 < 0 )
    v6 = &byte_60B3BA34;
  if ( *v6 != 70 )
    return FIELD_U32(a1, 100);
  v9 = sub_6081F5DC(dword_60CC6D78, *a2, a2[1], v5);
  v10 = *a2;
  v11 = a2[1];
  v12 = v9;
  result = 0;
  if ( *a2 >= 9u )
    v10 = 0;
  v14 = 9 * v10;
  if ( v11 >= 2 )
    v11 = 0;
  v15 = 9 * v11;
  if ( v12 >= 0x80 )
    v12 = 0;
  if ( (*(_BYTE *)(dword_60CC6D78 + (v14 << 10) + (v15 << 9) + 36 * v12 + 15572) & 0x10) == 0 )
    return FIELD_U32(a1, 100);
  return result;
}
