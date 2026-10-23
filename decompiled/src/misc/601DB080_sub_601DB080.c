/* sub_601DB080
 * address: 0x601DB080   size: 864   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601DB080()
{
  int v0; // r5
  int result; // r0
  char *v2; // r10
  int v3; // r1
  int v4; // r7
  int v5; // r6
  int v6; // r4
  int v7; // r1
  int v8; // r2
  int v9; // r0
  _BYTE *v10; // r5
  int v11; // t1
  int v12; // r9
  int v13; // r4
  char *v14; // r1
  int v15; // r2
  int v16; // r0
  int v17; // r1
  bool v18; // zf
  bool v19; // cc
  char v20; // r0
  int v21; // r7
  int v22; // r2
  int v23; // r0
  int v24; // r1
  bool v25; // zf
  int v26; // r0
  int v27; // r2
  int v28; // r0
  int v29; // r1
  bool v30; // zf
  int v31; // [sp+0h] [bp-28h]

  v0 = dword_60CC6D78;
  v2 = (char *)(dword_60CC6D78 + 109036);
  result = FIELD_S8(dword_60CC6D78, 109036);
  if ( result >= 0 )
    return result;
  if ( sub_601EAA9C(dword_60C8B144, -1) == 1 )
  {
    v3 = FIELD_U8(v0, 109038);
    if ( FIELD_U8(v0, 109038) )
      FIELD_U8(v0, 109038) = --v3;
  }
  v4 = FIELD_U32(v0, 424);
  v5 = FIELD_U32(v0, 448);
  v6 = sub_6040E33C((unsigned __int8)v4, v3);
  v31 = sub_601E9B10(dword_60C8B144);
  v7 = 0;
  v8 = v31;
  if ( v31 )
    v8 = 1;
  v9 = ((v5 | 1) == 3) & (v6 | (v4 == 36)) | v8;
  if ( v4 == 42 )
  {
    if ( FIELD_U32(v0, 32) == 2 )
      v7 = 1;
    v9 |= v7;
  }
  if ( (FIELD_U8(v0, 2092) & 1) != 0 )
    v9 |= (FIELD_U8(v0, 2093) & 1) == 0;
  if ( (FIELD_U8(v0, 2092) & 2) != 0 )
    v9 |= (FIELD_U8(v0, 2093) & 2) == 0;
  if ( (FIELD_U8(v0, 2092) & 4) != 0 )
    v9 |= (FIELD_U8(v0, 2093) & 4) == 0;
  if ( (FIELD_U8(v0, 2092) & 8) != 0 )
    v9 |= (FIELD_U8(v0, 2093) & 8) == 0;
  if ( (FIELD_U8(v0, 2092) & 0x10) != 0 )
  {
    if ( !(v9 | ((FIELD_U8(v0, 2093) & 0x10) == 0)) )
      goto LABEL_26;
LABEL_24:
    v11 = FIELD_U8(v0, 109038);
    v10 = (_BYTE *)(v0 + 109038);
    result = v11;
    if ( !v11 )
    {
      *v10 = 1;
      return 1;
    }
    return result;
  }
  if ( v9 )
    goto LABEL_24;
LABEL_26:
  result = FIELD_U8(v0, 109038);
  if ( !FIELD_U8(v0, 109038) )
  {
    if ( (FIELD_U8(dword_60CC6D78, 109034) & 0x7F) == 0x7F )
    {
      v12 = FIELD_S8(v0, 109037);
      if ( v12 + 1 > 6 )
      {
LABEL_35:
        v20 = *v2;
      }
      else
      {
        v13 = FIELD_S8(v0, 109037);
        while ( 1 )
        {
          v14 = (char *)&dword_60AFD0D4[2 * v13];
          v15 = FIELD_U32(v0, 428);
          v16 = *((_DWORD *)v14 + 2);
          v17 = *((_DWORD *)v14 + 3);
          v18 = v15 == v16;
          if ( v15 == v16 )
            v18 = FIELD_U32(v0, 440) == v17;
          if ( !v18 && sub_6019B154(v16, v17) == 1 )
            break;
          v19 = v13 + 2 < 7;
          ++v13;
          if ( !v19 )
            goto LABEL_35;
        }
        v20 = v13 + 1;
        *v2 = v13 + 1;
      }
      if ( v20 >= 0 || v12 < 1 )
      {
LABEL_55:
        LOBYTE(v21) = *v2;
      }
      else
      {
        v21 = 0;
        while ( 1 )
        {
          v22 = FIELD_U32(v0, 428);
          v23 = dword_60AFD0D4[2 * v21];
          v24 = dword_60AFD0D4[2 * v21 + 1];
          v25 = v22 == v23;
          if ( v22 == v23 )
            v25 = FIELD_U32(v0, 440) == v24;
          if ( !v25 && sub_6019B154(v23, v24) == 1 )
            break;
          if ( ++v21 >= v12 )
            goto LABEL_55;
        }
        *v2 = v21;
      }
    }
    else
    {
      v21 = 0;
      while ( 1 )
      {
        if ( (FIELD_U8(v0, 109034) & (unsigned __int8)(1 << v21)) == 0 )
        {
          v26 = v0;
          if ( (unsigned __int8)v21 < 7u )
            v26 = v0 + v21;
          if ( !FIELD_U8(v26, 109041) )
          {
            v27 = FIELD_U32(v0, 428);
            v28 = dword_60AFD0D4[2 * v21];
            v29 = dword_60AFD0D4[2 * v21 + 1];
            v30 = v27 == v28;
            if ( v27 == v28 )
              v30 = FIELD_U32(v0, 440) == v29;
            if ( !v30 && sub_6019B154(v28, v29) == 1 )
              break;
          }
        }
        if ( ++v21 >= 7 )
          goto LABEL_55;
      }
      *v2 = v21;
    }
    result = (char)v21;
    if ( (v21 & 0x80u) != 0 )
    {
      result = 1;
      FIELD_U8(v0, 109038) = 1;
    }
  }
  return result;
}
