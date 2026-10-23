/* sub_606B2688
 * address: 0x606B2688   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B2688(int a1)
{
  unsigned int v2; // r2
  int v3; // r1
  unsigned int v4; // r2
  int v5; // r12
  unsigned int v6; // r0
  unsigned int v7; // r3
  unsigned int v8; // r0
  int result; // r0

  FIELD_U32(a1, 40) = 2;
  if ( FIELD_U8(a1, 63) )
  {
    v2 = FIELD_U32(a1, 16);
    v3 = HIBYTE(v2) & 0xF;
    v4 = v2 >> 28;
    v5 = FIELD_U8(a1, 60);
    v6 = dword_60CBA370[v3];
    v7 = dword_60CBA370[v4];
    if ( v7 <= v6 || v3 == 8 )
    {
      FIELD_U32(a1, 68) = -FIELD_U32(a1, 68);
      FIELD_U8(a1, 60) = v5 ^ 1;
      v7 = dword_60CBA370[v4];
    }
    if ( !v5 )
      v7 = -v7;
    v8 = v7 + v6;
  }
  else
  {
    v8 = 0;
  }
  FIELD_U32(a1, 80) = v8;
  SE_OBJ_BLOCK_POP_OFF_ref(a1);
  result = FIELD_U8(a1, 18);
  if ( (result & 0x10) != 0 )
  {
    FIELD_U8(a1, 54) = 1;
    return 1;
  }
  return result;
}
