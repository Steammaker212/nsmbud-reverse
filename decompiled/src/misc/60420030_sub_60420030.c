/* sub_60420030
 * address: 0x60420030   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60420030(int a1, int a2, void *a3, int a4, int a5)
{
  int v6; // r5
  void *v10; // r0
  __int64 v11; // d17
  __int64 v12; // d17
  __int64 v13; // d17
  int v14; // r1
  int v15; // r2
  int v16; // r3
  _DWORD v18[13]; // [sp+4h] [bp-ACh] BYREF
  char v19; // [sp+38h] [bp-78h]
  char v20; // [sp+39h] [bp-77h]
  char v21; // [sp+3Ah] [bp-76h]

  v6 = 0;
  FIELD_U32(a1, 4) = 0;
  v10 = (void *)sub_604186F8(a1 + 8);
  FIELD_U8(a1, 188) = 0;
  FIELD_U8(a1, 189) = 0;
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 196) = a3;
  FIELD_U32(a1, 200) = a5;
  FIELD_U32(a1, 208) = a1;
  FIELD_U32(a1, 212) = sub_60420144;
  FIELD_U32(a1, 216) = 0;
  FIELD_U32(a1, 204) = off_60BF9E10;
  qmemcpy(v10, (const void *)a2, 0x74u);
  v11 = FIELD_U64(a2, 124);
  FIELD_U64(a1, 124) = FIELD_U64(a2, 116);
  FIELD_U64(a1, 132) = v11;
  v12 = FIELD_U64(a2, 140);
  FIELD_U64(a1, 140) = FIELD_U64(a2, 132);
  FIELD_U64(a1, 148) = v12;
  v13 = FIELD_U64(a2, 156);
  FIELD_U64(a1, 156) = FIELD_U64(a2, 148);
  FIELD_U64(a1, 164) = v13;
  v14 = FIELD_U32(a2, 168);
  v15 = FIELD_U32(a2, 172);
  v16 = FIELD_U32(a2, 176);
  FIELD_U32(a1, 172) = FIELD_U32(a2, 164);
  FIELD_U32(a1, 176) = v14;
  FIELD_U32(a1, 180) = v15;
  FIELD_U32(a1, 184) = v16;
  if ( a4 == 1 )
  {
    sub_60418774((int)v18, a2);
    v19 = 0;
    if ( FIELD_U32(a2, 92) == 2 )
    {
      v20 = 0;
      v21 = 1;
    }
    FIELD_U32(a1, 4) = sub_6041AFBC(v18, a3, a5);
    FIELD_U8(a1, 188) = 0;
    v6 = 1;
  }
  *(_DWORD *)a1 = v6;
  return a1;
}
