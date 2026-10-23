/* sub_607FB148
 * address: 0x607FB148   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FB148(int a1, unsigned __int8 *a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r6
  int v7; // r5
  unsigned __int8 *v8; // r0
  int v9; // r1
  int v10; // s2
  int v11; // r0
  int v12; // r1

  v4 = FIELD_U32(a1, 20);
  v5 = FIELD_U8(v4, 20);
  v6 = FIELD_U8(v4, 21);
  if ( v6 | v5 )
  {
    v7 = 1;
  }
  else
  {
    v5 = *a2;
    v7 = 0;
    if ( FIELD_U32(LevelInfo_instance, 24) == 2 )
      v6 = a2[5];
    else
      v6 = 0;
  }
  v8 = sub_60727908(FIELD_U32(a1, 16), v5);
  FIELD_U32(a1, 24) = v8;
  if ( !v8 )
    return 0;
  v9 = *(_DWORD *)(FIELD_U32(a1, 16) + 60) + 20 * *((unsigned __int16 *)v8 + 1);
  FIELD_U32(a1, 28) = v9;
  if ( v9 )
  {
    FIELD_U8(a1, 32) = 1;
    FIELD_U8(a1, 33) = 0;
    FIELD_U8(a1, 38) = 0;
    FIELD_U8(a1, 37) = 0;
    FIELD_U8(a1, 36) = 0;
    FIELD_U8(a1, 35) = 0;
    FIELD_U8(a1, 34) = 0;
    FIELD_U8(a1, 39) = 0;
    FIELD_U32(a1, 40) = v6;
    FIELD_U32(a1, 44) = v6;
    v10 = *(__int16 *)(v9 + 20 * v6 + 2);
    FIELD_F32(a1, 56) = (float)*(__int16 *)(v9 + 20 * v6);
    FIELD_F32(a1, 60) = -(float)v10;
    if ( v7 == 1 )
    {
      v11 = FIELD_U32(a1, 56);
      v12 = FIELD_U32(a1, 60);
    }
    else
    {
      v11 = FIELD_U32(dword_60CC6484, 112);
      v12 = FIELD_U32(dword_60CC6484, 124);
    }
    FIELD_U32(a1, 48) = v11;
    FIELD_U32(a1, 52) = v12;
    FIELD_U32(a1, 64) = v11;
    FIELD_U32(a1, 68) = v12;
    FIELD_U32(a1, 72) = 0;
  }
  return 1;
}
