/* sub_60199B6C
 * address: 0x60199B6C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60199B6C(_DWORD *a1, int a2, int a3)
{
  int v6; // r2
  int v7; // r1
  bool v8; // cc
  char *v9; // r1
  char *v10; // r5
  int v11; // r0
  size_t v12; // r4

  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v6 = a1[1];
  v7 = 0;
  while ( *(_BYTE *)(v6 + v7) )
  {
    if ( !*(_BYTE *)(v6 + v7 + 1) )
    {
      ++v7;
      break;
    }
    if ( !*(_BYTE *)(v6 + v7 + 2) )
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
  v8 = v7 <= a3;
  v9 = &byte_60B3BA34;
  if ( !v8 )
    v9 = (char *)(v6 + a3 + 1);
  v8 = a3 < -1;
  v10 = *(char **)(a2 + 4);
  if ( v8 )
    v9 = &byte_60B3BA34;
  if ( v10 != v9 )
  {
    v11 = FIELD_U32(a2, 8);
    v12 = v11 - 1;
    if ( v11 > 4 )
      v12 = 4;
    qmemcpy(v10, v9, v12);
    v10[v12] = 0;
  }
}
