/* sub_601DB4AC
 * address: 0x601DB4AC   size: 1040   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601DB4AC()
{
  int v0; // r5
  int v1; // r0
  int v2; // r4
  int v3; // r0
  int v4; // r6
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  int result; // r0
  char v10; // r0
  char v11; // r0
  char v12; // r0
  char v13; // r0
  char v14; // r0
  char v15; // r0
  _BYTE *v16; // r5
  int v17; // t1

  v0 = dword_60CC6D78;
  v1 = FIELD_U32(dword_60CC6D78, 448);
  v2 = dword_60CC6D78 + 796;
  if ( v1 != 2 )
  {
    if ( v1 != 3 )
      goto LABEL_65;
    v3 = FIELD_U32(dword_60CC6D78, 428);
    if ( v3 )
    {
      if ( v3 == 1 )
        goto LABEL_5;
    }
    else
    {
      if ( FIELD_U32(dword_60CC6D78, 440) )
        goto LABEL_65;
      v4 = 0;
      if ( sub_603F6AA0(dword_60CC6D78 + 796, 0, 0) < 3 )
        goto LABEL_64;
      v3 = FIELD_U32(v0, 428);
      if ( v3 == 1 )
      {
LABEL_5:
        if ( FIELD_U32(v0, 440) != 5 )
          goto LABEL_65;
        v4 = 1;
        if ( sub_603F6AA0(v2, 1, 5) < 3 )
          goto LABEL_64;
        v3 = FIELD_U32(v0, 428);
        if ( v3 != 2 )
        {
LABEL_22:
          if ( v3 == 3 )
          {
            if ( FIELD_U32(v0, 440) != 2 )
              goto LABEL_65;
            v4 = 3;
            if ( sub_603F6AA0(v2, 3, 2) < 3 )
              goto LABEL_64;
            v3 = FIELD_U32(v0, 428);
          }
          if ( v3 == 4 )
          {
            if ( FIELD_U32(v0, 440) )
              goto LABEL_65;
            v4 = 4;
            if ( sub_603F6AA0(v2, 4, 0) < 3 )
              goto LABEL_64;
            v3 = FIELD_U32(v0, 428);
          }
          if ( v3 != 5 )
          {
LABEL_34:
            v6 = v3 == 6;
            if ( v3 == 6 )
              v6 = FIELD_U32(v0, 440) == 1;
            if ( !v6 )
              goto LABEL_65;
            v4 = 6;
            v7 = sub_603F6AA0(v2, 6, 1);
            goto LABEL_63;
          }
          if ( FIELD_U32(v0, 440) != 4 )
            goto LABEL_65;
          v4 = 5;
          if ( sub_603F6AA0(v2, 5, 4) >= 3 )
          {
            v3 = FIELD_U32(v0, 428);
            goto LABEL_34;
          }
LABEL_64:
          *(_BYTE *)(v0 + v4 + 109041) = 4;
          goto LABEL_65;
        }
LABEL_19:
        if ( FIELD_U32(v0, 440) != 3 )
          goto LABEL_65;
        v4 = 2;
        if ( sub_603F6AA0(v2, 2, 3) < 3 )
          goto LABEL_64;
        v3 = FIELD_U32(v0, 428);
        goto LABEL_22;
      }
    }
    if ( v3 != 2 )
      goto LABEL_22;
    goto LABEL_19;
  }
  v5 = FIELD_U32(dword_60CC6D78, 428);
  if ( v5 )
  {
    if ( v5 == 1 )
      goto LABEL_11;
LABEL_42:
    if ( v5 != 2 )
      goto LABEL_46;
    goto LABEL_43;
  }
  if ( FIELD_U32(dword_60CC6D78, 440) )
    goto LABEL_65;
  v4 = 0;
  if ( sub_603F6B0C(dword_60CC6D78 + 796, 0, 0) < 3 )
    goto LABEL_64;
  v5 = FIELD_U32(v0, 428);
  if ( v5 != 1 )
    goto LABEL_42;
LABEL_11:
  if ( FIELD_U32(v0, 440) != 5 )
    goto LABEL_65;
  v4 = 1;
  if ( sub_603F6B0C(v2, 1, 5) < 3 )
    goto LABEL_64;
  v5 = FIELD_U32(v0, 428);
  if ( v5 == 2 )
  {
LABEL_43:
    if ( FIELD_U32(v0, 440) != 3 )
      goto LABEL_65;
    v4 = 2;
    if ( sub_603F6B0C(v2, 2, 3) < 3 )
      goto LABEL_64;
    v5 = FIELD_U32(v0, 428);
  }
LABEL_46:
  if ( v5 == 3 )
  {
    if ( FIELD_U32(v0, 440) != 2 )
      goto LABEL_65;
    v4 = 3;
    if ( sub_603F6B0C(v2, 3, 2) < 3 )
      goto LABEL_64;
    v5 = FIELD_U32(v0, 428);
  }
  if ( v5 == 4 )
  {
    if ( FIELD_U32(v0, 440) )
      goto LABEL_65;
    v4 = 4;
    if ( sub_603F6B0C(v2, 4, 0) < 3 )
      goto LABEL_64;
    v5 = FIELD_U32(v0, 428);
  }
  if ( v5 == 5 )
  {
    if ( FIELD_U32(v0, 440) != 4 )
      goto LABEL_65;
    v4 = 5;
    if ( sub_603F6B0C(v2, 5, 4) < 3 )
      goto LABEL_64;
    v5 = FIELD_U32(v0, 428);
  }
  v8 = v5 == 6;
  if ( v5 == 6 )
    v8 = FIELD_U32(v0, 440) == 1;
  if ( v8 )
  {
    v4 = 6;
    v7 = sub_603F6B0C(v2, 6, 1);
LABEL_63:
    if ( v7 >= 3 )
      goto LABEL_65;
    goto LABEL_64;
  }
LABEL_65:
  result = sub_601EAA9C(dword_60C8B144, -1);
  if ( result == 1 )
  {
    v10 = FIELD_U8(v0, 109041);
    if ( v10 )
      --v10;
    FIELD_U8(v0, 109041) = v10;
    v11 = FIELD_U8(v0, 109042);
    if ( v11 )
      --v11;
    FIELD_U8(v0, 109042) = v11;
    v12 = FIELD_U8(v0, 109043);
    if ( v12 )
      --v12;
    FIELD_U8(v0, 109043) = v12;
    v13 = FIELD_U8(v0, 109044);
    if ( v13 )
      --v13;
    FIELD_U8(v0, 109044) = v13;
    v14 = FIELD_U8(v0, 109045);
    if ( v14 )
      --v14;
    FIELD_U8(v0, 109045) = v14;
    v15 = FIELD_U8(v0, 109046);
    if ( v15 )
      --v15;
    FIELD_U8(v0, 109046) = v15;
    v17 = FIELD_U8(v0, 109047);
    v16 = (_BYTE *)(v0 + 109047);
    result = v17;
    if ( v17 )
      --result;
    *v16 = result;
  }
  return result;
}
