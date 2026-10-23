/* sub_604376E0
 * address: 0x604376E0   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604376E0(_DWORD *a1, int a2, int a3)
{
  int v4; // r5
  _DWORD *v5; // r11
  char *v6; // r9
  int result; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r7
  int v11; // r4
  int (__fastcall *v12)(int); // r2
  int v13; // [sp+0h] [bp-28h]

  v4 = 0;
  a1[256] = a2;
  v5 = a1 + 281;
  a1[257] = a3;
  v6 = (char *)&unk_60B022D8 + 12 * a2 + 6 * a3;
  result = (int)(a1 + 10);
  v13 = result;
  do
  {
    v8 = v5[v4];
    if ( v8 >= 0 )
    {
      v9 = a1[11];
      result = (unsigned __int8)v6[v4];
      v10 = *(_DWORD *)(v9 + 4 * ((unsigned int)v8 >> 5));
      v11 = v10 & ~(1 << (v8 & 0x1F)) | (result << (v8 & 0x1F));
      if ( v6[v4] )
        result = 1;
      *(_DWORD *)(v9 + 4 * ((unsigned int)v8 >> 5)) = v11;
      v12 = (int (__fastcall *)(int))a1[25];
      if ( v12 )
      {
        result ^= (v10 & (1 << (v8 & 0x1F))) != 0;
        if ( result == 1 )
          result = v12(v13);
      }
    }
    ++v4;
  }
  while ( v4 != 6 );
  return result;
}
