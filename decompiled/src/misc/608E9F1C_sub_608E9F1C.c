/* sub_608E9F1C
 * address: 0x608E9F1C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E9F1C(_DWORD *a1, char a2)
{
  int v4; // r1
  int v5; // r6
  bool v6; // cc
  int result; // r0
  int i; // r1
  char *v9; // r3
  int v10; // r3
  bool v11; // zf

  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v4 = a1[1];
  v5 = 0;
  while ( *(_BYTE *)(v4 + v5) )
  {
    if ( !*(_BYTE *)(v4 + v5 + 1) )
    {
      ++v5;
      break;
    }
    if ( !*(_BYTE *)(v4 + v5 + 2) )
    {
      v5 += 2;
      break;
    }
    v6 = v5 + 2 < 0x80000;
    v5 += 3;
    if ( !v6 )
    {
      v5 = 0;
      break;
    }
  }
  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  if ( v5 >= 1 )
  {
    result = a1[1];
    for ( i = 0; i != v5; ++i )
    {
      v9 = &byte_60B3BA34;
      if ( a1[2] > i )
        v9 = (char *)(a1[1] + i);
      v10 = (unsigned __int8)*v9;
      v11 = v10 == 92;
      if ( v10 != 92 )
        v11 = v10 == 47;
      if ( v11 )
        *(_BYTE *)(result + i) = a2;
    }
  }
  return result;
}
