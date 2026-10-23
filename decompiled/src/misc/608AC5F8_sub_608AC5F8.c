/* sub_608AC5F8
 * address: 0x608AC5F8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC5F8(int a1, int a2)
{
  int v3; // r0

  v3 = a1 + 8;
  *(_DWORD *)a1 = a1;
  FIELD_U32(a1, 4) = a1;
  FIELD_U32(a1, 8) = v3;
  FIELD_U32(a1, 12) = v3;
  FIELD_U32(a1, 16) = a1 + 16;
  FIELD_U32(a1, 20) = a1 + 16;
  FIELD_U32(a1, 24) = a1 + 24;
  FIELD_U32(a1, 28) = a1 + 24;
  FIELD_U32(a1, 32) = 1;
  FIELD_U32(a1, 36) = 0x7FFFFFFF;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 44) = 1065353216;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 52) = -1;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 60) = 1;
  FIELD_U32(a1, 84) = a2;
  FIELD_U8(a1, 88) = 0;
  FIELD_U32(a1, 64) = 1065353216;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 68) = 0;
  if ( a2 )
    sub_608B0E58(a2);
  return a1;
}
