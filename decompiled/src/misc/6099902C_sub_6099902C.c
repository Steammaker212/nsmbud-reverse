/* sub_6099902C
 * address: 0x6099902C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099902C(int *a1, int a2, __int16 a3, __int16 a4)
{
  int v5; // r4
  int v6; // r0

  v5 = a1[1];
  if ( !v5 )
    return 0;
  a1[1] = *(_DWORD *)v5;
  *(_DWORD *)v5 = v5;
  FIELD_U32(v5, 4) = v5;
  FIELD_U32(v5, 8) = v5 + 8;
  FIELD_U32(v5, 12) = v5 + 8;
  FIELD_U32(v5, 16) = 0;
  FIELD_U32(v5, 20) = 0;
  FIELD_U8(v5, 33) = 1;
  FIELD_U8(v5, 34) = 0;
  FIELD_U8(v5, 35) = 0;
  FIELD_U16(v5, 56) = 0;
  FIELD_U32(v5, 52) = 0;
  FIELD_U32(v5, 48) = 0;
  FIELD_U32(v5, 44) = 0;
  FIELD_U32(v5, 40) = 0;
  FIELD_U32(v5, 24) = a2;
  FIELD_U16(v5, 30) = a3;
  FIELD_U16(v5, 28) = a4;
  FIELD_U8(v5, 32) = 0;
  FIELD_U32(v5, 36) = 0;
  v6 = sub_609990CC(a1, *a1, v5);
  *a1 = v6;
  FIELD_U8(v6, 33) = 0;
  return v5;
}
