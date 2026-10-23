/* sub_60357928
 * address: 0x60357928   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60357928(int a1)
{
  _BYTE *v2; // r0
  int v3; // r0
  int result; // r0

  FIELD_U32(a1, 6252) = 0;
  FIELD_U16(a1, 6432) = 512;
  v2 = *(_BYTE **)(a1 + 632);
  if ( v2 )
    *v2 |= 4u;
  Enemy__beginState_DieFumi((Enemy *)a1);
  sub_60355C1C(a1, 4);
  FIELD_U32(a1, 100) = -1103101952;
  v3 = FIELD_U32(a1, 6108);
  FIELD_F32(a1, 120) = FIELD_F32(a1, 6104) * 0.5;
  FIELD_U32(a1, 124) = v3;
  FIELD_U32(a1, 128) = 0;
  result = FIELD_U32(a1, 6112);
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = result;
  FIELD_U32(a1, 140) = 0;
  return result;
}
