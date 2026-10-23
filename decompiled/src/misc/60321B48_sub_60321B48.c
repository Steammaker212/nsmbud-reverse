/* sub_60321B48
 * address: 0x60321B48   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60321B48(int a1)
{
  int v2; // r3
  _DWORD *v3; // r5
  __int64 v4; // r0
  int v5; // r0
  __int64 v6; // r6
  __int64 *v7; // r6
  __int64 v8; // r8
  signed int v9; // r2
  __int64 v10; // kr08_8
  signed int v12; // [sp+0h] [bp-28h] BYREF
  int v13; // [sp+4h] [bp-24h] BYREF

  v3 = (_DWORD *)(a1 + 6328);
  v2 = FIELD_U32(a1, 6328);
  v4 = 0x100000000LL;
  switch ( v2 )
  {
    case 1:
      v5 = -134217728;
      v6 = FIELD_U64(a1, 7312) + 0x8000000LL;
      FIELD_U64(a1, 7312) = v6;
      if ( !FIELD_U8(a1, 7324) )
        v5 = 0x8000000;
      FIELD_U32(a1, 164) += v5;
      LODWORD(v4) = 1;
      if ( v6 >= 0x10000 )
      {
        FIELD_U32(a1, 7312) = 0;
        FIELD_U32(a1, 7316) = 0;
        if ( !FIELD_U32(a1, 6348) )
        {
          FIELD_U32(a1, 164) = FIELD_U32(a1, 7320);
          *v3 = 0;
          FIELD_U32(a1, 6356) = 0;
        }
      }
      break;
    case 2:
    case 4:
      goto LABEL_9;
    case 3:
      HIDWORD(v4) = 2;
LABEL_9:
      v7 = (__int64 *)(a1 + 7312);
      v8 = FIELD_U64(a1, 7312);
      v9 = -134217728;
      if ( !FIELD_U8(a1, 7324) )
        v9 = 0x8000000;
      if ( v8 < v4 )
      {
        v10 = v8 + 0x8000000;
        v8 += 0x10000000;
        if ( v2 != 4 )
          v8 = v10;
        *v7 = v8;
        FIELD_U32(a1, 164) += v9;
      }
      if ( v8 >= v4 )
      {
        v12 = v9;
        v13 = 0;
        if ( sub_6083246C((int *)(a1 + 164), &v13, &v12) == 1 )
        {
          *v3 = 0;
          *(_DWORD *)v7 = 0;
          FIELD_U32(a1, 7316) = 0;
        }
        if ( !FIELD_U32(a1, 6348) )
          FIELD_U32(a1, 6356) = 0;
      }
      LODWORD(v4) = 1;
      break;
    default:
      return v4;
  }
  return v4;
}
