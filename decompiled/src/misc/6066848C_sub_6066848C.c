/* sub_6066848C
 * address: 0x6066848C   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066848C(int a1)
{
  int result; // r0
  int v3; // r1
  char v4; // cc
  int v5; // r0
  int *v6; // r4
  int v7; // t1
  int v8; // r0
  int v9; // t1
  int v10; // r0
  int v11; // t1
  int v12; // r2
  int v13; // t1
  int v14; // r2
  int v15; // r3
  int v16; // [sp+4h] [bp-Ch] BYREF

  if ( sub_60667FC4(a1, &v16) != 1 )
  {
    v9 = FIELD_U32(a1, 8240);
    v6 = (int *)(a1 + 8240);
    v8 = v9;
    if ( v9 < 0 )
    {
      result = (v8 + 0x40000) & ((v8 + 0x40000) >> 31);
      goto LABEL_18;
    }
    result = v8 - 0x40000;
    goto LABEL_16;
  }
  result = v16;
  v3 = v16 + 0x40000000;
  v4 = (v16 != -1107296257) & __CFADD__(v16 - 1107296257, -2080374782);
  v16 += 0x40000000;
  if ( !v4 )
  {
    v7 = FIELD_U32(a1, 8240);
    v6 = (int *)(a1 + 8240);
    v5 = v7;
    *v6 = v7 + 786432;
    if ( v7 <= -786433 )
    {
      result = (v5 + 0x100000) & ((v5 + 0x100000) >> 31);
LABEL_18:
      *v6 = result;
      return result;
    }
    result = v5 + 0x80000;
    goto LABEL_16;
  }
  if ( (unsigned int)(result + 1040187391) <= 0x7BFFFFFE )
  {
    v11 = FIELD_U32(a1, 8240);
    v6 = (int *)(a1 + 8240);
    v10 = v11;
    *v6 = v11 - 786432;
    if ( v11 < 786432 )
    {
      result = (v10 - 0x80000) & ((v10 - 0x80000) >> 31);
      goto LABEL_18;
    }
    result = v10 - 0x100000;
LABEL_16:
    if ( result <= 0 )
      result = 0;
    goto LABEL_18;
  }
  v13 = FIELD_U32(a1, 8240);
  v6 = (int *)(a1 + 8240);
  v12 = v13;
  if ( result - 1040187392 <= 0x4000000 )
  {
    if ( v12 < 0 )
    {
      result = (v12 + 0x40000) & ((v12 + 0x40000) >> 31);
      goto LABEL_18;
    }
    result = v12 - 0x40000;
    goto LABEL_16;
  }
  if ( v12 + 4718592 <= 9437184 )
  {
    v14 = -4718592;
    if ( result >= -1073741824 )
    {
      if ( v3 < 4718592 )
        v14 = -1073741824 - result;
      *v6 = v14;
    }
    else
    {
      v16 = result + 1078460416;
      v15 = 4718592;
      if ( v3 > -4718592 )
        v15 = -1073741824 - result;
      *v6 = v15;
    }
  }
  return result;
}
