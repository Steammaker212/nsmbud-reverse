/* EventMgr_set
 * address: 0x6072A4B0   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall EventMgr_set(int result, unsigned int id, int time, int active, int a5, int a6, int a7, int a8)
{
  int v8; // lr
  int v9; // r2
  unsigned int v10; // r3
  int v11; // r4
  int v12; // r2
  int v13; // r2
  __int64 v14; // r6
  int v15; // r0
  int v16; // t1
  unsigned int v17; // r1
  __int64 v18; // r10
  int v19; // r3
  int v20; // r4
  int v21; // r0
  int v22; // t1
  char v23; // r2
  int v24; // r7
  __int64 v25; // r4
  unsigned int v26; // r2
  bool v27; // nf
  int v28; // r1
  int v29; // r7
  __int64 v30; // r4
  int v31; // r3
  char v32; // r1
  unsigned int v33; // r1

  LOWORD(v8) = 2052;
  BYTE2(v8) = 16;
  if ( active )
  {
    if ( time )
    {
      v9 = 5 * time;
      v10 = 1u >> (32 - id);
      if ( (int)(id - 32) >= 0 )
        v10 = 1 << (id - 32);
      v11 = 1 << id;
      v12 = 2 * v9;
      if ( (int)(id - 32) >= 0 )
        v11 = 0;
      if ( !a5 )
      {
LABEL_15:
        v14 = FIELD_U64(result, 16);
        if ( id >= 0x40 )
          id = 0;
        FIELD_U32(result, 16) = v14 | v11;
        FIELD_U32(result, 20) = HIDWORD(v14) | v10;
        v15 = result + 12 * id;
        FIELD_U32(v15, 24) = v12;
        FIELD_U32(v15, 28) = a7;
        v16 = FIELD_U8(v15, 32);
        result = v15 + 32;
        v17 = v16 & 0xFFFFFFFE;
LABEL_21:
        if ( (unsigned int)(a8 - 1) <= 2 )
          v17 |= (v8 & 0xFFFFFFu) >> (8 * (a8 - 1));
        v23 = v17 & 0xFD;
        if ( a6 )
          v23 = v17 | 2;
        *(_BYTE *)result = v23;
        return result;
      }
LABEL_18:
      v18 = FIELD_U64(result, 16);
      v19 = ~v10;
      v20 = ~v11;
      if ( id >= 0x40 )
        id = 0;
      FIELD_U32(result, 16) = v18 & v20;
      FIELD_U32(result, 20) = HIDWORD(v18) & v19;
      v21 = result + 12 * id;
      FIELD_U32(v21, 24) = v12;
      FIELD_U32(v21, 28) = a7;
      v22 = FIELD_U8(v21, 32);
      result = v21 + 32;
      v17 = v22 | 1;
      goto LABEL_21;
    }
    v24 = id - 32;
    v25 = FIELD_U64(result, 16);
    v26 = 1u >> (32 - id);
    v27 = (int)(id - 32) < 0;
    v28 = 1 << id;
    if ( !v27 )
      v26 = 1 << v24;
    if ( v24 >= 0 )
      v28 = 0;
    HIDWORD(v25) |= v26;
    LODWORD(v25) = v25 | v28;
    FIELD_U64(result, 16) = v25;
  }
  else
  {
    if ( time )
    {
      v13 = 5 * time;
      v10 = 1u >> (32 - id);
      if ( (int)(id - 32) >= 0 )
        v10 = 1 << (id - 32);
      v11 = 1 << id;
      v12 = 2 * v13;
      if ( (int)(id - 32) >= 0 )
        v11 = 0;
      if ( a5 )
        goto LABEL_15;
      goto LABEL_18;
    }
    v29 = id - 32;
    v30 = FIELD_U64(result, 16);
    v31 = 1 << id;
    v32 = 32 - id;
    if ( v29 >= 0 )
      v31 = 0;
    v33 = 1u >> v32;
    if ( v29 >= 0 )
      v33 = 1 << v29;
    LODWORD(v30) = v30 & ~v31;
    HIDWORD(v30) &= ~v33;
    FIELD_U64(result, 16) = v30;
  }
  return result;
}
