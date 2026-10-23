/* sub_60462888
 * address: 0x60462888   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60462888(int a1, int a2)
{
  int result; // r0
  int v4; // r3
  int v5; // t1
  int v6; // r2
  int v7; // r2
  int v8; // s0
  int *v9; // r1

  v5 = FIELD_U32(a1, 6212);
  result = a1 + 6212;
  v4 = v5;
  if ( v5 == 1 )
  {
    v6 = FIELD_U32(a1, 2872);
    if ( a2 == 1 )
    {
      if ( (v6 & 1) != 0 || (v6 & 0x10400) == 0x400 )
        goto LABEL_16;
    }
    else if ( (v6 & 1) != 0 )
    {
LABEL_16:
      *(_DWORD *)result = 2;
      return result;
    }
LABEL_23:
    *(_DWORD *)result = 3;
    FIELD_U32(a1, 3176) &= ~0x40000000u;
    FIELD_U32(a1, 3184) &= ~0x40000000u;
    FIELD_U32(a1, 3200) &= ~0x40000000u;
    if ( a2 == 1 )
      FIELD_U32(a1, 3192) &= ~0x40000000u;
    FIELD_U32(a1, 6192) = 0;
    return 6192;
  }
  if ( !v4 )
  {
    if ( (float)(FIELD_F32(a1, 112) + -8.0) <= FIELD_F32(dword_60CC6484, 124) )
      *(_DWORD *)result = 1;
    return result;
  }
  v7 = FIELD_U32(a1, 2872);
  if ( v4 == 2 )
  {
    if ( a2 == 1 )
    {
      if ( (v7 & 0x10400) == 0x400 || (v7 & 1) != 0 )
        return result;
    }
    else if ( (v7 & 1) != 0 )
    {
      return result;
    }
    goto LABEL_23;
  }
  if ( (v7 & 1) != 0 )
  {
    if ( !FIELD_U32(a1, 6192) )
    {
      FIELD_U32(a1, 6192) = 1;
      sub_60462A58(a1);
    }
    FIELD_U32(a1, 124) = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
    if ( FIELD_U8(a1, 86) == 1 )
    {
      v8 = -987594752;
    }
    else
    {
      v9 = dword_60462A50;
      if ( FIELD_U32(a1, 6168) == 5 )
        v9 = &dword_60462A50[1];
      v8 = *v9;
    }
    FIELD_U32(a1, 116) = v8;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
    result = FIELD_U8(a1, 2872);
    if ( (result & 8) != 0 )
    {
      FIELD_U32(a1, 124) = 1082130432;
      return 1082130432;
    }
  }
  return result;
}
