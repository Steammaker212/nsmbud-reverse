/* sub_606816CC
 * address: 0x606816CC   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606816CC(int a1)
{
  float v2; // s0
  _DWORD *v3; // r0
  int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  float v7; // s2
  int result; // r0

  StageActor__accelerateX((StageActor *)a1);
  v2 = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 108) = v2;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  if ( FIELD_U32(a1, 7512) )
  {
    v3 = *(_DWORD **)(a1 + 6112);
    v4 = v3[3];
    v5 = v3[2];
    v6 = v3[17];
    if ( v5 > v6 )
      v4 += 4 * v6;
    if ( (*(_BYTE *)(*(_DWORD *)v4 + 28) & 0x20) != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
      v2 = FIELD_F32(a1, 108);
    }
  }
  v7 = FIELD_F32(a1, 7520);
  result = FIELD_U32(a1, 7532);
  if ( !result )
  {
    if ( v2 < v7 )
      return result;
    goto LABEL_10;
  }
  if ( v2 <= v7 )
  {
LABEL_10:
    FIELD_F32(a1, 108) = v7;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 7492) = FIELD_U32(a1, 7528);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB8198);
  }
  return result;
}
