/* sub_608D9F74
 * address: 0x608D9F74   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D9F74(_DWORD *a1, int *a2)
{
  int v4; // r0
  _DWORD *v5; // r10
  int v6; // r6
  int *v7; // r4
  int v8; // r7
  int v9; // r0
  _DWORD *v10; // r4
  int v11; // r5
  _DWORD *v12; // r11
  int v13; // r0

  v4 = *(_DWORD *)sub_608DA1C8(*a1);
  *a2 = v4;
  if ( v4 >= 1 )
  {
    v5 = a2 + 4;
    v6 = 0;
    do
    {
      v7 = &a2[61 * v6];
      v8 = sub_608DA1D4(*a1, v6);
      v9 = *(_DWORD *)sub_608DA1FC();
      v7[1] = v9;
      v10 = v7 + 1;
      if ( v9 >= 1 )
      {
        v11 = 0;
        v12 = v5;
        do
        {
          v13 = sub_608DA208(v8, v11++);
          *(v12 - 2) = *(_DWORD *)v13;
          *(v12 - 1) = FIELD_U32(v13, 4);
          *v12 = FIELD_U32(v13, 8);
          v12[1] = FIELD_U32(v13, 12);
          v12[2] = FIELD_U32(v13, 16);
          *((_BYTE *)v12 + 12) = FIELD_U8(v13, 20);
          *((_BYTE *)v12 + 13) = FIELD_U8(v13, 21);
          v12 += 6;
        }
        while ( v11 < *v10 );
      }
      ++v6;
      v5 += 61;
    }
    while ( v6 < *a2 );
  }
  return 1;
}
