/* sub_604E286C
 * address: 0x604E286C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604E286C(_DWORD *a1, int a2, int a3, int a4)
{
  unsigned int *v5; // r6
  _DWORD *v6; // r9
  unsigned int result; // r0
  _DWORD *v8; // r4
  int v9; // r5
  int v10; // r1
  int i; // r3

  a1[1428] = a2;
  v5 = a1 + 1428;
  a1[1431] = a4;
  v6 = a1 + 10;
  sub_6047572C((int)(a1 + 10), &dword_60CA53F4, a4, 0xEu, 0);
  result = *v5;
  if ( (*v5 & 0x80000000) == 0 && result <= 0x22 )
  {
    v8 = (_DWORD *)((char *)&unk_60CA5424 + 8 * result);
    (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
    (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
    v9 = v8[1];
    (*(void (__fastcall **)(int *))(dword_60CA541C + 12))(&dword_60CA541C);
    result = dword_60CA5420;
    if ( v9 != dword_60CA5420 )
    {
      v10 = v8[1];
      for ( i = 1; *(unsigned __int8 *)(v10 + i - 1) == *(unsigned __int8 *)(dword_60CA5420 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v10 + i - 1) )
          return result;
        if ( i > 0x80000 || *(unsigned __int8 *)(v10 + i) != *(unsigned __int8 *)(dword_60CA5420 + i) )
          break;
        if ( !*(_BYTE *)(v10 + i) )
          return result;
      }
      return sub_60473DE4(v6, 0, v8, a3);
    }
  }
  return result;
}
