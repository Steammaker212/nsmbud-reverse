/* sub_6005850C
 * address: 0x6005850C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005850C(int a1)
{
  float v2; // r1
  _DWORD *v3; // r3
  int v4; // r0
  float *v5; // r4
  int v6; // t1
  int v7; // r1
  unsigned int v8; // r0
  int result; // r0

  v2 = FIELD_F32(a1, 8724);
  v3 = (_DWORD *)(a1 + 120);
  v4 = FIELD_U32(a1, 8716);
  *v3 = v4;
  FIELD_F32(a1, 124) = v2;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = FIELD_U32(a1, 8720);
  if ( FIELD_U32(a1, 80) == 1 )
    FIELD_U32(a1, 120) = v4 ^ 0x80000000;
  FIELD_F32(a1, 136) = -v2;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1192))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1368))(a1);
  v6 = FIELD_U32(a1, 7204);
  v5 = (float *)(a1 + 7204);
  sub_60421AD4(v6);
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v5 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v8 )
    v7 += 4 * v8;
  *(float *)(*(_DWORD *)v7 + 24) = *(float *)(*(_DWORD *)v7 + 8) / v5[377];
  result = (int)v5[377];
  *((_WORD *)v5 - 464) = result;
  return result;
}
