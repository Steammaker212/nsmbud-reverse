/* sub_604D1A84
 * address: 0x604D1A84   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D1A84(int a1)
{
  unsigned int v2; // r7
  int v3; // r5
  unsigned int v4; // r0
  int v5; // r6
  int v6; // r5
  int v7; // r4
  int result; // r0
  unsigned int v9; // r2
  unsigned int v10; // r2
  int v11; // [sp+4h] [bp-2Ch] BYREF
  int v12; // [sp+8h] [bp-28h] BYREF

  v2 = 0;
  FIELD_U8(a1, 4854) = 0;
  v12 = 0;
  v11 = 0;
  v3 = a1 + 3800;
  sub_60502B04(a1 + 3800, &v11, 1);
  v12 = 1;
  v11 = 1;
  sub_60502B04(v3, &v11, 1);
  v12 = 2;
  v11 = 2;
  sub_60502B04(v3, &v11, 1);
  v12 = 3;
  v11 = 3;
  sub_60502B04(v3, &v11, 1);
  v4 = FIELD_U32(a1, 615700);
  if ( v4 >= 0xA )
    v4 = 0;
  v5 = a1 + 52644 * v4;
  v6 = FIELD_U32(v5, 94176);
  if ( v6 == 256 )
    v6 = 13;
  do
  {
    v7 = v2;
    v11 = v2;
    result = v2;
    if ( v2 != v6 )
    {
      if ( v2 == 12 )
        goto LABEL_13;
      v12 = v2;
      v9 = 0;
      if ( v2 < 0xD )
        v9 = v2;
      if ( (*(_BYTE *)(*(_DWORD *)(v5 + 4 * v9 + 93096) + 64) & 1) != 0 )
      {
        v10 = v5 + 89248;
        if ( v2 < 0xC )
          v10 = v5 + 89248 + v2;
        if ( FIELD_U8(v10, 45) )
        {
LABEL_13:
          v12 = v2;
          result = sub_60502B04(v5 + 93148, &v12, 1);
        }
      }
    }
    ++v2;
    if ( v7 > 12 )
      v2 = 13;
  }
  while ( v2 != 13 );
  return result;
}
