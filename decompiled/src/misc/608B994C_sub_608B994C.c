/* sub_608B994C
 * address: 0x608B994C   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B994C(int a1, int a2, _DWORD *a3, int a4)
{
  int v8; // r6
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r7
  unsigned int v12; // r10
  int v13; // r0
  int v14; // r1
  int v15; // r0
  _BYTE v17[4]; // [sp+0h] [bp-28h] BYREF
  int v18; // [sp+4h] [bp-24h]

  v8 = 0;
  if ( (*(_BYTE *)a3 & 0x3F) == 0 )
  {
    v17[0] = byte_60CC8D12;
    v17[1] = byte_60CC8D13;
    v18 = dword_60C5AF24;
    v9 = sub_608B0CEC((int)v17);
    v10 = 2 * v9 + 1024;
    if ( !v9 )
      v10 = 1000;
    v11 = *a3 + ((v10 * a2 + 63) & 0xFFFFFFC0);
    if ( (int)(v11 - a4) <= 0 )
    {
      sub_608B9A70(a1);
      *a3 = v11;
      v12 = v11 + ((880 * a2 + 63) & 0xFFFFFFC0);
      if ( (int)(v12 - a4) <= 0 )
      {
        sub_608B9BD8(a1 + 32, v11);
        *a3 = v12;
        v13 = a1 + 24;
        v14 = FIELD_U32(a1, 28);
        if ( v14 != a1 + 24 )
        {
          do
          {
            FIELD_U32(v14, 504) = a1 + 32;
            v14 = FIELD_U32(v14, 4);
          }
          while ( v14 != v13 );
        }
        v15 = sub_608C3C60(v13);
        sub_608C406C(v15, a1 + 32);
        v8 = 1;
        FIELD_U32(a1, 68) = a1 + 72;
      }
    }
  }
  return v8;
}
