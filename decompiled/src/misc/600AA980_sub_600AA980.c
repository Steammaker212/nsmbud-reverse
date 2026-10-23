/* sub_600AA980
 * address: 0x600AA980   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600AA980(int a1)
{
  int v2; // r0
  int v3; // r5
  int *v4; // r0
  float *v5; // r2

  v2 = FIELD_U32(a1, 80) ^ 1;
  FIELD_U32(a1, 80) = v2;
  v3 = byte_60AFE3F4[v2];
  FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v3;
  v4 = dword_600AAA14;
  if ( FIELD_U32(a1, 80) == 1 )
    v4 = &dword_600AAA14[1];
  v5 = (float *)(dword_60CC6484 + 112);
  if ( FIELD_U32(a1, 80) == 1 )
    v5 = (float *)(dword_60CC6484 + 120);
  FIELD_F32(a1, 108) = *v5 + *(float *)v4;
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C82B28);
}
