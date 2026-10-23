/* sub_60199C48
 * address: 0x60199C48   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60199C48(_DWORD *a1, int a2, int a3)
{
  int v6; // r2
  int v7; // r0
  int v8; // r1
  bool v9; // cc
  char *v10; // r1
  char *v11; // r5
  int v12; // r0
  size_t v13; // r4

  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v6 = a1[1];
  v7 = a3 + 5;
  v8 = 0;
  while ( *(_BYTE *)(v6 + v8) )
  {
    if ( !*(_BYTE *)(v6 + v8 + 1) )
    {
      ++v8;
      break;
    }
    if ( !*(_BYTE *)(v6 + v8 + 2) )
    {
      v8 += 2;
      break;
    }
    v9 = v8 + 2 < 0x80000;
    v8 += 3;
    if ( !v9 )
    {
      v8 = 0;
      break;
    }
  }
  v9 = v8 < v7;
  v10 = &byte_60B3BA34;
  if ( !v9 )
    v10 = (char *)(v6 + v7);
  v9 = a3 < -5;
  v11 = *(char **)(a2 + 4);
  if ( v9 )
    v10 = &byte_60B3BA34;
  if ( v11 != v10 )
  {
    v12 = FIELD_U32(a2, 8);
    v13 = v12 - 1;
    if ( v12 > 4 )
      v13 = 4;
    qmemcpy(v11, v10, v13);
    v11[v13] = 0;
  }
}
