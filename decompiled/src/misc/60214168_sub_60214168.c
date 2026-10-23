/* sub_60214168
 * address: 0x60214168   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60214168(int a1)
{
  int *result; // r0
  int **v3; // r5
  int v4; // r2
  int v5; // r0
  int **v6; // r1
  float v7; // s0
  float v8; // s2
  float v9; // s6
  float v10; // r1
  float v11; // r2
  int v12; // r0
  signed int v13; // [sp+4h] [bp-1Ch] BYREF
  int v14; // [sp+8h] [bp-18h] BYREF
  signed int v15; // [sp+Ch] [bp-14h] BYREF

  v3 = (int **)(a1 + 468);
  result = *(int **)(a1 + 468);
  if ( result == (int *)2 )
  {
    ((void (__fastcall *)(int))loc_60168DF8)(a1);
    FIELD_F32(a1, 204) = FIELD_F32(a1, 204) + 0.0;
    v7 = FIELD_F32(a1, 128) + -0.3;
    FIELD_F32(a1, 128) = v7;
    v8 = FIELD_F32(a1, 132) + -0.3;
    FIELD_F32(a1, 132) = v8;
    v9 = FIELD_F32(a1, 136);
    FIELD_F32(a1, 136) = v9 + -0.3;
    if ( v7 <= 0.0 )
    {
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 132) = 0;
      FIELD_U32(a1, 136) = 0;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      sub_60186A24(a1);
      result = *(int **)(a1 + 128);
      v10 = FIELD_F32(a1, 132);
      v11 = FIELD_F32(a1, 136);
    }
    else
    {
      result = (int *)LODWORD(v7);
      v10 = v8;
      v11 = v9 + -0.3;
    }
    FIELD_U32(a1, 436) = result;
    FIELD_F32(a1, 440) = v10;
    FIELD_F32(a1, 444) = v11;
  }
  else if ( result == (int *)1 )
  {
    ((void (__fastcall *)(int))loc_60168DF8)(a1);
    v12 = FIELD_U32(a1, 472);
    if ( v12 < 0 && v12 != 0x80000000 )
      v12 = -v12;
    v15 = v12;
    v14 = 0;
    v13 = v12 + 1;
    result = sub_608322C0((int *)(a1 + 180), &v14, &v13, &v15);
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
    v6 = (int **)(a1 + 464);
    v5 = FIELD_U32(a1, 464);
    if ( !v5 )
    {
      v4 = 1;
      v6 = v3;
      FIELD_U32(a1, 120) = 1087373312;
      v5 = FIELD_U32(a1, 468);
    }
    result = (int *)(v5 + v4);
    *v6 = result;
  }
  return result;
}
