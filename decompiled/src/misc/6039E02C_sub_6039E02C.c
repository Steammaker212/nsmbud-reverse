/* sub_6039E02C
 * address: 0x6039E02C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039E02C(int a1, int a2)
{
  float v3; // s0
  int result; // r0
  unsigned int v5; // r2

  v3 = FIELD_F32(a1, 108);
  FIELD_U32(a1, 80) = FIELD_F32(a2, 16) < v3;
  sub_6039E0A4(a1, v3);
  result = FIELD_U8(dword_60CC6D8C, 17);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v5 = FIELD_U32(a1, 336) & 0xFFBFFFFF;
    result = FIELD_U8(LevelInfo_instance, 16);
    if ( result != 1 )
      v5 = FIELD_U32(a1, 336) | 0x400000;
    FIELD_U32(a1, 336) = v5;
  }
  return result;
}
