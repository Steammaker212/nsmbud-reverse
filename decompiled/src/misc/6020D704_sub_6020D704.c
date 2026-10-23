/* sub_6020D704
 * address: 0x6020D704   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6020D704(int a1)
{
  int *result; // r0
  int **v3; // r5
  int v4; // r2
  int v5; // r0
  int **v6; // r1
  float v7; // s2
  int v8; // r0
  signed int v9; // [sp+4h] [bp-1Ch] BYREF
  int v10; // [sp+8h] [bp-18h] BYREF
  signed int v11; // [sp+Ch] [bp-14h] BYREF

  v3 = (int **)(a1 + 448);
  result = *(int **)(a1 + 448);
  if ( result == (int *)2 )
  {
    result = (int *)((int (__fastcall *)(int))loc_60168DF8)(a1);
    FIELD_F32(a1, 204) = FIELD_F32(a1, 204) + 0.0;
    v7 = FIELD_F32(a1, 128) + -0.3;
    FIELD_F32(a1, 128) = v7;
    FIELD_F32(a1, 132) = FIELD_F32(a1, 132) + -0.3;
    FIELD_F32(a1, 136) = FIELD_F32(a1, 136) + -0.3;
    if ( v7 <= 0.0 )
    {
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 132) = 0;
      FIELD_U32(a1, 136) = 0;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      return (int *)sub_60186A24(a1);
    }
  }
  else if ( result == (int *)1 )
  {
    ((void (__fastcall *)(int))loc_60168DF8)(a1);
    v8 = FIELD_U32(a1, 432);
    if ( v8 < 0 && v8 != 0x80000000 )
      v8 = -v8;
    v11 = v8;
    v10 = 0;
    v9 = v8 + 1;
    result = sub_608322C0((int *)(a1 + 180), &v10, &v9, &v11);
    if ( FIELD_F32(a1, 120) < -2.0 )
    {
      result = (int *)((char *)*v3 + 1);
      *v3 = result;
    }
  }
  else if ( !result )
  {
    ((void (__fastcall *)(int))loc_60168DF8)(a1);
    v4 = -1;
    v6 = (int **)(a1 + 440);
    v5 = FIELD_U32(a1, 440);
    if ( !v5 )
    {
      v4 = 1;
      v6 = v3;
      FIELD_U32(a1, 120) = 1087373312;
      v5 = FIELD_U32(a1, 448);
    }
    result = (int *)(v5 + v4);
    *v6 = result;
  }
  return result;
}
