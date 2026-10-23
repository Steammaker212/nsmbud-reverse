/* sub_60672440
 * address: 0x60672440   size: 832   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60672440(int a1)
{
  int v2; // r8
  int v3; // r0
  int v4; // r6
  int v5; // r2
  int v6; // r7
  int v7; // r1
  int v8; // kr00_4
  int v9; // r5
  int v10; // r7
  int v11; // r2
  int v12; // r1
  int v13; // r12
  char *v14; // r7
  int v15; // r6
  char *v16; // r7
  int v17; // r2
  int v18; // r0
  char v19; // r5
  char *v20; // r6
  int v21; // r0
  int v22; // r6
  int v23; // r2
  int v24; // r7
  int v25; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 164);
  v3 = sub_606734DC();
  v4 = 0;
  v5 = 0;
  if ( v3 )
  {
    v5 = 0;
    if ( (unsigned int)(v3 + 1) <= 2 )
    {
      v6 = FIELD_U8(a1, 7619);
      v7 = byte_60B07B94[v6];
      v8 = (v7 * byte_60B07B96[v6]) << 12;
      v9 = byte_60B07B98[v6] << 8;
      v10 = v2;
      if ( v2 < 0 )
        v10 = -v2;
      v11 = (v7 << 18) - v8 + v8 / 0x10000 * (v10 / v9);
      if ( v11 > v7 << 18 )
        v11 = v7 << 18;
      v5 = v11 * v3;
    }
  }
  if ( FIELD_U16(a1, 7608) )
  {
    if ( FIELD_S8(a1, 7621) < 0 )
    {
      v12 = (unsigned __int8)byte_60B07B98[FIELD_U8(a1, 7619)] << 24;
    }
    else
    {
      v12 = 0;
      if ( !FIELD_U8(a1, 7621) )
        goto LABEL_15;
      v12 = -16777216 * (unsigned __int8)byte_60B07B98[FIELD_U8(a1, 7619)];
    }
    v4 = FIELD_S8(a1, 7621);
  }
  else
  {
    v12 = 0;
  }
LABEL_15:
  v13 = v12 - v2;
  if ( v12 - v2 < 0 )
  {
    v16 = (char *)&unk_60B07B9A;
    if ( !FIELD_U16(a1, 7608) )
      v16 = (char *)&unk_60B07B9C;
    if ( !v4 )
      v16 = (char *)&unk_60B07B9E;
    v15 = -65536 * v16[FIELD_U8(a1, 7619)];
  }
  else if ( v12 == v2 )
  {
    v15 = 0;
  }
  else
  {
    v14 = (char *)&unk_60B07B9A;
    if ( !FIELD_U16(a1, 7608) )
      v14 = (char *)&unk_60B07B9C;
    if ( !v4 )
      v14 = (char *)&unk_60B07B9E;
    v15 = v14[FIELD_U8(a1, 7619)] << 16;
  }
  v17 = v15 + v5 + FIELD_U32(a1, 7604);
  if ( v3 < 0 )
  {
    FIELD_U8(a1, 7623) = v3;
    if ( v17 > 0 )
      goto LABEL_35;
    v18 = FIELD_U8(a1, 7619);
    goto LABEL_34;
  }
  if ( v3 )
  {
    FIELD_U8(a1, 7623) = v3;
    if ( v17 >= 0 )
    {
      v18 = FIELD_U8(a1, 7619);
LABEL_34:
      FIELD_U8(a1, 7624) = byte_60B07BA0[v18];
    }
  }
LABEL_35:
  if ( !FIELD_U8(a1, 7624) )
  {
    v20 = (char *)&unk_60B07BA4;
    goto LABEL_44;
  }
  if ( FIELD_S8(a1, 7623) < 0 )
  {
    if ( v17 > 0 )
    {
      v19 = 0;
      v20 = (char *)&unk_60B07BA4;
      goto LABEL_43;
    }
LABEL_42:
    v19 = FIELD_U8(a1, 7624) - 1;
    v20 = (char *)&unk_60B07BA2;
    goto LABEL_43;
  }
  if ( v17 >= 0 )
    goto LABEL_42;
  v19 = 0;
  v20 = (char *)&unk_60B07BA4;
LABEL_43:
  FIELD_U8(a1, 7624) = v19;
LABEL_44:
  v21 = FIELD_U8(a1, 7619);
  v22 = v20[v21] << 16;
  if ( v17 < 0 )
  {
    v23 = (v22 + v17) & ((v22 + v17) >> 31);
  }
  else
  {
    v23 = v17 - v22;
    if ( v23 <= 0 )
      v23 = 0;
  }
  v24 = byte_60B07BA6[v21];
  v25 = v23;
  if ( v23 > v24 << 20 )
    v25 = v24 << 20;
  if ( v23 < -1048576 * v24 )
    v25 = -1048576 * v24;
  FIELD_U32(a1, 7604) = v25;
  if ( v25 )
  {
    v12 = v25 + v2;
  }
  else
  {
    if ( v13 > dword_60CB7620 )
      v12 = v2;
    if ( v13 < -dword_60CB7620 )
      v12 = v2;
  }
  result = dword_60CB761C;
  if ( v12 <= dword_60CB761C )
  {
    result = -dword_60CB761C;
    if ( v12 < -dword_60CB761C )
      v12 = -dword_60CB761C;
    FIELD_U32(a1, 164) = v12;
  }
  else
  {
    FIELD_U32(a1, 164) = dword_60CB761C;
  }
  return result;
}
