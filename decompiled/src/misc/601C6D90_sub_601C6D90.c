/* sub_601C6D90
 * address: 0x601C6D90   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C6D90(int a1, _DWORD *a2)
{
  _DWORD *v3; // r5
  int v4; // r1
  char *v5; // r0
  bool v6; // cc
  char *v7; // r0
  int v8; // r1
  int v9; // r5
  int v11; // r0

  v3 = (_DWORD *)sub_601E0010(a2);
  (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
  v4 = 0;
  v5 = (char *)v3[1];
  while ( v5[v4] )
  {
    if ( !v5[v4 + 1] )
    {
      ++v4;
      break;
    }
    if ( !v5[v4 + 2] )
    {
      v4 += 2;
      break;
    }
    v6 = v4 + 2 <= 0x7FFFF;
    v4 += 3;
    if ( !v6 )
    {
      v4 = 0;
      break;
    }
  }
  if ( v4 < 0 )
    v5 = &byte_60B3BA34;
  if ( *v5 == 87 )
    return 1;
  (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
  v7 = (char *)v3[1];
  v8 = 0;
  while ( v7[v8] )
  {
    if ( !v7[v8 + 1] )
    {
      ++v8;
      break;
    }
    if ( !v7[v8 + 2] )
    {
      v8 += 2;
      break;
    }
    v6 = v8 + 2 <= 0x7FFFF;
    v8 += 3;
    if ( !v6 )
    {
      v8 = 0;
      break;
    }
  }
  v9 = 0;
  if ( v8 < 0 )
    v7 = &byte_60B3BA34;
  if ( *v7 == 75 )
    return v9;
  if ( sub_601E1158(a2, v8) )
    return 1;
  if ( sub_601DA52C(a2) )
    return v9;
  v11 = sub_601E0194(a2);
  if ( v11 > 2 )
    return 1;
  v9 = 1;
  if ( v11 == 1 )
    return v9;
  else
    return sub_6017226C(dword_60C88BC8, a2);
}
