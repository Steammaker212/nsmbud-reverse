/* STRM_BGM_ref_5_helper
 * address: 0x608CBA60   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_ref_5_helper(int a1, int a2)
{
  int v3; // r1
  int v4; // r5
  bool v5; // zf
  _DWORD *v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r0
  _BYTE v12[8]; // [sp+4h] [bp-ACh] BYREF
  int v13; // [sp+Ch] [bp-A4h]
  int v14; // [sp+10h] [bp-A0h]
  int v15; // [sp+14h] [bp-9Ch]
  int v16; // [sp+18h] [bp-98h]
  int v17; // [sp+1Ch] [bp-94h]
  char v18; // [sp+8Ch] [bp-24h] BYREF

  v3 = FIELD_U32(a1, 444);
  if ( v3 )
    goto LABEL_5;
  v4 = 0;
  v5 = FIELD_U8(a1, 188) == 0;
  if ( FIELD_U8(a1, 188) )
    v5 = FIELD_U32(a1, 656) == 0;
  if ( !v5 )
  {
LABEL_5:
    v4 = 0;
    if ( !FIELD_U8(a1, 448) )
    {
      v4 = 0;
      v6 = (_DWORD *)sub_608B4B98((int)&v18, v3, 0);
      if ( sub_608B4C78(v6, (int)v12) == 1 )
      {
        v4 = 1;
        *(_BYTE *)a2 = v12[4];
        FIELD_U32(a2, 4) = v14;
        v7 = v17;
        FIELD_U64(a2, 8) = v17;
        v8 = v15;
        v9 = v16;
        FIELD_U64(a2, 16) = v16 - v15 + v7;
        FIELD_U64(a2, 24) = v8;
        FIELD_U64(a2, 32) = v9;
        v10 = v13;
        if ( v13 >= 2 )
          v10 = 2;
        FIELD_U32(a2, 40) = v10;
      }
    }
  }
  return v4;
}
