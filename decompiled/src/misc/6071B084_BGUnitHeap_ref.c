/* BGUnitHeap_ref
 * address: 0x6071B084   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BGUnitHeap_ref(int a1, int a2)
{
  int v4; // r10
  int v5; // r6
  _DWORD *v6; // r8
  int v7; // r0
  int v8; // r0
  int v9; // r7
  int v10; // r0
  int v11; // r0
  int result; // r0
  int v13; // r0
  int (**v14)(); // [sp+24h] [bp-2Ch] BYREF
  const char *v15; // [sp+28h] [bp-28h]

  v4 = 0;
  v5 = 0;
  do
  {
    v6 = (_DWORD *)(a1 + v4);
    v7 = 0;
    if ( *(_DWORD *)(a1 + v4 + 16) )
    {
      v14 = &sead__SafeStringBase__vtable;
      v15 = "BGUnitHeap";
      v8 = sub_608F8808(141088, &v14, a2, 4, 1, 0);
      v7 = sub_60722EF0(v8, v5, 0);
    }
    v6[16] = v7;
    v9 = 0;
    v10 = 0;
    if ( v6[5] )
    {
      v14 = &sead__SafeStringBase__vtable;
      v15 = "BGUnitHeap";
      v11 = sub_608F8808(141088, &v14, a2, 4, 1, 0);
      v10 = sub_60722EF0(v11, v5, 1);
    }
    v6[17] = v10;
    result = v6[6];
    if ( result )
    {
      v14 = &sead__SafeStringBase__vtable;
      v15 = "BGUnitHeap";
      v13 = sub_608F8808(141088, &v14, a2, 4, 1, 0);
      result = sub_60722EF0(v13, v5, 2);
      v9 = result;
    }
    v4 += 12;
    ++v5;
    v6[18] = v9;
  }
  while ( v4 != 48 );
  return result;
}
