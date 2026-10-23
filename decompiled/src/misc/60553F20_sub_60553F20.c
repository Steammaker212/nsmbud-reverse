/* sub_60553F20
 * address: 0x60553F20   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60553F20(int a1)
{
  int v2; // r0
  int *v3; // r6
  int v4; // r5
  _DWORD *v5; // r7
  int v6; // r0
  _DWORD *v7; // r7
  int v8; // r1
  int v9; // r0
  int v10; // r0
  int v11; // r0

  v3 = (int *)(a1 + 70232);
  v2 = FIELD_U32(a1, 70232);
  if ( *(v3 - 10670) == 1 )
  {
    v4 = 0;
    v5 = (_DWORD *)(a1 + 70236);
    if ( !v2 && *v5 == 1 )
    {
      sub_6047EE74(a1 + 17880, 0);
      FIELD_U8(a1, 18340) = 0;
      v4 = 1;
    }
    if ( *v5 == FIELD_U32(a1, 70244) - 1 )
    {
      v4 = 1;
      sub_6047EFCC(a1 + 17880, 1);
      FIELD_U8(a1, 18341) = 1;
      v6 = 17832;
LABEL_12:
      *(_BYTE *)(*(_DWORD *)(a1 + v6) + 64) |= 1u;
    }
  }
  else
  {
    v4 = 0;
    v7 = (_DWORD *)(a1 + 70236);
    v8 = FIELD_U32(a1, 70244);
    if ( v2 == v8 - 1 && *v7 == v8 - 2 )
    {
      v4 = 1;
      sub_6047EE74(a1 + 17880, 1);
      FIELD_U8(a1, 18341) = 0;
    }
    if ( !*v7 )
    {
      sub_6047EFCC(a1 + 17880, 0);
      v4 = 1;
      FIELD_U8(a1, 18340) = 1;
      v6 = 17828;
      goto LABEL_12;
    }
  }
  v9 = FIELD_U32(a1, 70220);
  if ( v9 )
  {
    sub_60555628(v9, FIELD_U32(a1, 17812));
    FIELD_U32(a1, 70220) = 0;
  }
  v10 = FIELD_U32(a1, 70224);
  if ( v10 )
  {
    sub_60555628(v10, FIELD_U32(a1, 17816));
    FIELD_U32(a1, 70224) = 0;
  }
  v11 = FIELD_U32(a1, 70228);
  if ( v11 )
  {
    sub_60555628(v11, FIELD_U32(a1, 17820));
    FIELD_U32(a1, 70228) = 0;
  }
  sub_60553A34(a1, *v3);
  return v4;
}
