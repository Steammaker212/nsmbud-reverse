/* sub_6038511C
 * address: 0x6038511C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038511C(int a1)
{
  unsigned int v2; // r1

  FIELD_U32(a1, 6148) &= 0xFFFFFFCF;
  FIELD_U32(a1, 116) = 1167867904;
  FIELD_F32(a1, 120) = (float)byte_60AFE3F4[FIELD_U32(a1, 6284)];
  FIELD_U32(a1, 124) = 1075838976;
  FIELD_U32(a1, 128) = 0;
  v2 = FIELD_U32(a1, 20);
  if ( (v2 & 0x100) == 0 )
    sub_60022760(0.0, 24.0, dword_60C7F52C, a1, 1u, (v2 >> 4) & 3);
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 136) = -1065353216;
  return -1065353216;
}
