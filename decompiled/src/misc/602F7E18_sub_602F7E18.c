/* sub_602F7E18
 * address: 0x602F7E18   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F7E18(int a1)
{
  int v2; // r5
  _DWORD *v3; // r0
  int v4; // r1
  int v5; // t1
  float v6; // s0
  float v7; // s2
  float v8; // s0
  float v9; // s2
  float v10; // s0
  int result; // r0

  v2 = 0;
  v5 = FIELD_U32(a1, 6488);
  v3 = (_DWORD *)(a1 + 6488);
  v4 = v5;
  if ( v5 == 1 )
  {
    v9 = FIELD_F32(a1, 124) + FIELD_F32(a1, 112);
    FIELD_F32(a1, 112) = v9;
    v10 = FIELD_F32(a1, 6508) + -4.0;
    if ( v9 <= v10 )
    {
      v2 = 1;
      FIELD_F32(a1, 112) = v10;
      FIELD_U32(a1, 124) = 1045220557;
      *v3 = 0;
    }
  }
  else if ( !v4 )
  {
    v6 = FIELD_F32(a1, 124) * 0.98;
    FIELD_F32(a1, 124) = v6;
    v7 = v6 + FIELD_F32(a1, 112);
    FIELD_F32(a1, 112) = v7;
    v8 = FIELD_F32(a1, 6508) + 4.0;
    if ( v7 >= v8 )
    {
      v2 = 1;
      FIELD_F32(a1, 112) = v8;
      FIELD_U32(a1, 124) = -1113336054;
      *v3 = 1;
    }
  }
  nullsub_7();
  result = v2 | ((FIELD_U32(a1, 8768) & 0x10400) == 1024);
  if ( !FIELD_U32(a1, 6496) )
  {
    if ( result != 1 )
      return result;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92974);
  }
  if ( FIELD_U8(a1, 6500) )
  {
    result ^= 1u;
    if ( !result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92974);
  }
  return result;
}
