/* sub_60466620
 * address: 0x60466620   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60466620(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r1
  int *v6; // r10
  int v7; // r0
  unsigned int v8; // r4
  unsigned int v9; // r0
  int v10; // r9
  int v17; // r0
  int v18; // [sp+4h] [bp-3Ch]
  int v19; // [sp+10h] [bp-30h]
  int v20; // [sp+18h] [bp-28h]

  v5 = FIELD_U32(a2, 8);
  v4 = v5;
  if ( v5 >= 4 )
    v5 = 4;
  if ( v4 < 0 )
    v5 = 0;
  if ( v5 >= 1 )
  {
    v6 = *(int **)(a2 + 4);
    if ( v5 == 1 )
    {
      v7 = (FIELD_U32(a2, 60) << 31)
         | ((FIELD_U32(a2, 20) & 3) << 12)
         | (FIELD_U32(a2, 24) << 14) & 0x4000
         | (unsigned __int16)((unsigned __int16)FIELD_U32(a2, 28) << 15)
         | (FIELD_U32(a2, 32) << 16) & 0x30000
         | (FIELD_U32(a2, 36) << 18) & 0xC0000
         | (FIELD_U32(a2, 40) << 20) & 0x300000
         | (FIELD_U32(a2, 48) << 24) & 0x1F000000;
      sub_604663F4(v7, *(Vec3 **)a2, v7 | (FIELD_U32(a2, 56) << 30) & 0x40000000, *v6, FIELD_U8(a2, 12), a3);
    }
    else
    {
      v8 = 0;
      v19 = v5;
      do
      {
        v9 = 0;
        if ( v8 < 4 )
          v9 = v8;
        v20 = v6[v9];
        v18 = a3;
        v10 = a3;
        _R2 = dword_60AF2614[v8] << 22;
        __asm { UXTB16          R2, R2 }
        v17 = (dword_60AF28C4[v8] << 31)
            | ((FIELD_U32(a2, 20) & 3) << 12)
            | (FIELD_U32(a2, 24) << 14) & 0x4000
            | (unsigned __int16)((unsigned __int16)FIELD_U32(a2, 28) << 15)
            | (FIELD_U32(a2, 32) << 16) & 0x30000
            | (FIELD_U32(a2, 36) << 18) & 0xC0000
            | (FIELD_U32(a2, 40) << 20) & 0x300000
            | _R2
            | (FIELD_U32(a2, 48) << 24) & 0x1F000000;
        sub_604663F4(v17, *(Vec3 **)a2, v17 | (FIELD_U32(a2, 56) << 30) & 0x40000000, v20, FIELD_U8(a2, 12), v18);
        ++v8;
        a3 = v10;
      }
      while ( v19 != v8 );
    }
  }
}
