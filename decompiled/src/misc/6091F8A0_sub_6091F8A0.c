/* sub_6091F8A0
 * address: 0x6091F8A0   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091F8A0(int a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r2
  int v7; // r0
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  unsigned int v11; // r1
  unsigned int v12; // r2
  int v13; // r0
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  unsigned int v17; // r1
  unsigned int v18; // r2
  int v19; // r0
  int result; // r0
  bool v21; // zf
  int v22; // r0
  unsigned int v23; // r1
  unsigned int v24; // r2
  int v25; // r0

  v2 = FIELD_U32(a1, 80);
  v3 = v2 == 0;
  if ( v2 )
    v3 = (FIELD_U8(v2, 24) & 1) == 0;
  if ( !v3 )
  {
    FIELD_U32(a1, 24) = FIELD_U32(v2, 40);
    v4 = FIELD_U32(a1, 8);
    v5 = FIELD_U16(a1, 4);
    v6 = FIELD_U32(v4, 28);
    v7 = FIELD_U32(v4, 32);
    if ( v6 > v5 )
      v7 += 936 * v5;
    sub_6091E038(v7);
  }
  v8 = FIELD_U32(a1, 152);
  v9 = v8 == 0;
  if ( v8 )
    v9 = (FIELD_U8(v8, 24) & 1) == 0;
  if ( !v9 )
  {
    FIELD_U32(a1, 96) = FIELD_U32(v8, 40);
    v10 = FIELD_U32(a1, 8);
    v11 = FIELD_U16(a1, 4);
    v12 = FIELD_U32(v10, 28);
    v13 = FIELD_U32(v10, 32);
    if ( v12 > v11 )
      v13 += 936 * v11;
    sub_6091E038(v13);
  }
  v14 = FIELD_U32(a1, 224);
  v15 = v14 == 0;
  if ( v14 )
    v15 = (FIELD_U8(v14, 24) & 1) == 0;
  if ( !v15 )
  {
    FIELD_U32(a1, 168) = FIELD_U32(v14, 40);
    v16 = FIELD_U32(a1, 8);
    v17 = FIELD_U16(a1, 4);
    v18 = FIELD_U32(v16, 28);
    v19 = FIELD_U32(v16, 32);
    if ( v18 > v17 )
      v19 += 936 * v17;
    sub_6091E038(v19);
  }
  result = FIELD_U32(a1, 296);
  v21 = result == 0;
  if ( result )
    v21 = (FIELD_U8(result, 24) & 1) == 0;
  if ( !v21 )
  {
    FIELD_U32(a1, 240) = FIELD_U32(result, 40);
    v22 = FIELD_U32(a1, 8);
    v23 = FIELD_U16(a1, 4);
    v24 = FIELD_U32(v22, 28);
    v25 = FIELD_U32(v22, 32);
    if ( v24 > v23 )
      v25 += 936 * v23;
    return sub_6091E038(v25);
  }
  return result;
}
