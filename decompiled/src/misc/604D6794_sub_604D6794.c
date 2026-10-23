/* sub_604D6794
 * address: 0x604D6794   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D6794(int a1)
{
  int v1; // r6
  int v3; // r0
  int v4; // r1
  int v5; // r4
  int v6; // r5
  bool v7; // zf
  int v8; // r7
  int result; // r0
  int v10; // r5
  int v11; // r4
  int v12; // r6

  v3 = -192;
  do
  {
    v4 = a1 + v3;
    v3 += 8;
    *(_BYTE *)(FIELD_U32(v4, 3848) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(v4, 3852) + 64) &= ~1u;
  }
  while ( v3 );
  v5 = 0;
  *(_BYTE *)(FIELD_U32(a1, 3848) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3852) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3856) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3860) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3864) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3868) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3872) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3876) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3880) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3884) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3888) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3892) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3896) + 64) &= ~1u;
  do
  {
    v6 = *(_DWORD *)(a1 + 52056 + 3 * v5);
    v7 = v6 == 0;
    if ( v6 )
    {
      v1 = *(_DWORD *)(a1 + 3848 + v5);
      v7 = v1 == 0;
    }
    if ( !v7 )
    {
      FIELD_U8(v1, 64) |= 1u;
      v8 = FIELD_U32(v1, 12);
      if ( v8 )
      {
        if ( v8 == v6 )
        {
LABEL_11:
          FIELD_U8(v6, 64) |= 1u;
          goto LABEL_12;
        }
        sub_60858A34(FIELD_U32(v1, 12));
        FIELD_U8(v8, 64) &= ~1u;
      }
      sub_608589FC(v6, v1);
      goto LABEL_11;
    }
LABEL_12:
    v5 += 4;
  }
  while ( v5 != 48 );
  result = FIELD_U8(a1, 52637);
  if ( !FIELD_U8(a1, 52637) )
  {
    if ( FIELD_U8(a1, 52636) )
      v10 = FIELD_U32(a1, 3756);
    else
      v10 = FIELD_U32(a1, 3844);
    v11 = FIELD_U32(a1, 3896);
    FIELD_U8(v11, 64) |= 1u;
    v12 = FIELD_U32(v11, 12);
    if ( v12 )
    {
      if ( v12 != v10 )
      {
        sub_60858A34(FIELD_U32(v11, 12));
        FIELD_U8(v12, 64) &= ~1u;
        goto LABEL_20;
      }
    }
    else
    {
LABEL_20:
      sub_608589FC(v10, v11);
    }
    result = FIELD_U8(v10, 64) | 1;
    FIELD_U8(v10, 64) = result;
  }
  return result;
}
