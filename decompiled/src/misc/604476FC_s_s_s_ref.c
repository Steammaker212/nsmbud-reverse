/* s_s_s_ref
 * address: 0x604476FC   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall s_s_s_ref(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r1
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r7
  int v14; // r0
  int v15; // r5
  int v16; // r0
  int v17; // r0
  int v18; // r1
  int v19; // r2
  _DWORD *v20; // r0
  int result; // r0
  _DWORD v22[267]; // [sp+4h] [bp-42Ch] BYREF

  v8 = 0;
  v9 = 0;
  v10 = a1 + 2648;
  FIELD_U32(a1, 4) = a3;
  do
  {
    v11 = a1 + v8;
    v8 += 28;
    FIELD_U8(v11, 8) = 0;
    FIELD_U32(v11, 24) = 0;
    FIELD_U32(v11, 20) = v10;
    FIELD_U32(v11, 12) = 0;
    FIELD_U16(v11, 30) = 0;
    FIELD_U8(v11, 9) = v9;
    FIELD_U16(v11, 28) = 0;
    FIELD_U8(v11, 10) = v9++;
    FIELD_U32(v11, 32) = 0;
  }
  while ( v8 != 2464 );
  v12 = sub_6042A180(a5, dword_60C9CEE8, 8u);
  sub_609589F4(v10, v12, dword_60C9CEE8);
  v13 = 0;
  FIELD_U16(a1, 2476) = 0;
  v14 = FIELD_U32(a1, 4);
  v15 = FIELD_U8(v14, 103);
  if ( FIELD_U8(v14, 103) )
  {
    v16 = sub_6042A180(a5, 584 * FIELD_U8(v14, 103), 4u);
    v13 = v16;
    do
    {
      v16 = untitled_ref(v16) + 584;
      --v15;
    }
    while ( v15 );
    v14 = FIELD_U32(a1, 4);
  }
  FIELD_U32(a1, 2472) = v13;
  if ( FIELD_U8(v14, 103) )
  {
    FIELD_U32(v13, 580) = FIELD_U32(v14, 16) + 2;
    v17 = FIELD_U32(a1, 4);
    if ( FIELD_U8(v17, 103) >= 2u )
    {
      v18 = 1;
      v19 = 1164;
      do
      {
        ++v18;
        *(_DWORD *)(FIELD_U32(a1, 2472) + v19) = FIELD_U32(v17, 16) + 2;
        v19 += 584;
        v17 = FIELD_U32(a1, 4);
      }
      while ( v18 < FIELD_U8(v17, 103) );
    }
  }
  v20 = sub_604209A4(
          v22,
          "%s/%s/%s",
          (const char *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(a2, 8) + 20) + 32) + 2),
          (const char *)(*(_DWORD *)(FIELD_U32(a2, 4) + 16) + 2),
          (const char *)(FIELD_U32(a3, 16) + 2));
  (*(void (__fastcall **)(_DWORD *))(v22[0] + 12))(v20);
  result = sub_6090FC70(v22[1]);
  FIELD_U16(a1, 2478) = result;
  return result;
}
