/* sub_602CF5A4
 * address: 0x602CF5A4   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CF5A4(int a1, _DWORD *a2)
{
  int v4; // r4
  int v5; // r6
  float v6; // s0
  int v7; // r0
  int v8; // r7
  float v9; // s0
  bool v10; // zf
  int v11; // r7
  float v12; // s0
  int v13; // r7
  float v14; // s0
  int v15; // r0
  float v16; // s0
  int v18[2]; // [sp+0h] [bp-38h] BYREF
  int v19; // [sp+8h] [bp-30h]
  int v20; // [sp+10h] [bp-28h] BYREF
  float v21; // [sp+14h] [bp-24h]

  v4 = 0;
  if ( FIELD_F32(a1, 184) > 0.0 )
  {
    v5 = a1 + 652;
    v6 = FIELD_F32(a1, 6328);
    v20 = FIELD_U32(a1, 6324);
    v21 = v6 + 16.0;
    if ( sub_6015DD58(a1 + 652, v18, (int)&v20) == 1 )
    {
      v7 = v19;
      if ( v19 )
      {
        if ( !FIELD_U32(v19, 224) )
          goto LABEL_18;
      }
    }
    v8 = FIELD_U32(a1, 6436);
    v9 = FIELD_F32(v8, 12);
    v20 = FIELD_U32(v8, 8);
    v21 = v9 + 16.0;
    v7 = sub_6015DD58(v5, v18, (int)&v20);
    v10 = v7 == 0;
    if ( v7 )
    {
      v7 = v19;
      v10 = v19 == 0;
    }
    if ( !v10 && !FIELD_U32(v7, 224) )
      goto LABEL_18;
    v11 = FIELD_U32(v8, 120);
    v12 = FIELD_F32(v11, 12);
    v20 = FIELD_U32(v11, 8);
    v21 = v12 + 16.0;
    if ( sub_6015DD58(v5, v18, (int)&v20) == 1 )
    {
      v7 = v19;
      if ( v19 )
      {
        if ( !FIELD_U32(v19, 224) )
          goto LABEL_18;
      }
    }
    v13 = FIELD_U32(v11, 120);
    v14 = FIELD_F32(v13, 12);
    v20 = FIELD_U32(v13, 8);
    v21 = v14 + 16.0;
    if ( sub_6015DD58(v5, v18, (int)&v20) == 1 )
    {
      v7 = v19;
      if ( v19 )
      {
        if ( !FIELD_U32(v19, 224) )
          goto LABEL_18;
      }
    }
    v15 = FIELD_U32(v13, 120);
    v16 = FIELD_F32(v15, 12);
    v20 = FIELD_U32(v15, 8);
    v21 = v16 + 16.0;
    if ( sub_6015DD58(v5, v18, (int)&v20) == 1 )
    {
      v7 = v19;
      if ( v19 )
      {
        if ( !FIELD_U32(v19, 224) )
        {
LABEL_18:
          v4 = 1;
          *a2 = FIELD_U32(v7, 144);
        }
      }
    }
  }
  return v4;
}
