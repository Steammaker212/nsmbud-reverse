/* sub_6092BA74
 * address: 0x6092BA74   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6092BA74(int a1)
{
  int v2; // r0
  int v3; // r0
  _QWORD *v4; // r0
  __int64 v5; // d17
  __int64 v6; // d17
  _QWORD *v7; // r1
  __int64 v8; // d17
  __int64 v9; // d17
  int v10; // r0
  _QWORD *v11; // r0
  __int64 v12; // d17
  __int64 v13; // d17
  _QWORD *v14; // r1
  __int64 v15; // d17
  __int64 v16; // d17
  _BYTE v17[24]; // [sp+0h] [bp-E0h] BYREF
  _BYTE v18[200]; // [sp+18h] [bp-C8h] BYREF

  v2 = FIELD_U32(a1, 184);
  if ( v2 == 1 )
  {
    ((void (__fastcall *)(_BYTE *, float, float, float))loc_6090E3D4)(
      v17,
      0.0,
      0.0,
      FIELD_F32(a1, 304) * FIELD_F32(a1, 336));
    v10 = sub_6090C7F8((int)v18, (int)v17, FIELD_F32(a1, 272), FIELD_F32(a1, 288));
    v11 = (_QWORD *)sub_6090BDE0(v10);
    v12 = v11[1];
    FIELD_U64(a1, 388) = *v11;
    FIELD_U64(a1, 396) = v12;
    v13 = v11[3];
    FIELD_U64(a1, 404) = v11[2];
    FIELD_U64(a1, 412) = v13;
    v14 = v11 + 4;
    v11 += 6;
    v15 = v14[1];
    FIELD_U64(a1, 420) = *v14;
    FIELD_U64(a1, 428) = v15;
    v16 = v11[1];
    FIELD_U64(a1, 436) = *v11;
    FIELD_U64(a1, 444) = v16;
    nullsub_113();
  }
  else if ( !v2 )
  {
    v3 = sub_6090C344(
           (int)v18,
           FIELD_F32(a1, 272),
           FIELD_F32(a1, 288),
           FIELD_F32(a1, 320) * 0.017453,
           FIELD_F32(a1, 304));
    v4 = (_QWORD *)sub_6090BDE0(v3);
    v5 = v4[1];
    FIELD_U64(a1, 388) = *v4;
    FIELD_U64(a1, 396) = v5;
    v6 = v4[3];
    FIELD_U64(a1, 404) = v4[2];
    FIELD_U64(a1, 412) = v6;
    v7 = v4 + 4;
    v4 += 6;
    v8 = v7[1];
    FIELD_U64(a1, 420) = *v7;
    FIELD_U64(a1, 428) = v8;
    v9 = v4[1];
    FIELD_U64(a1, 436) = *v4;
    FIELD_U64(a1, 444) = v9;
    nullsub_113();
  }
}
