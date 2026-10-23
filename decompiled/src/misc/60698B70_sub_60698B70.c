/* sub_60698B70
 * address: 0x60698B70   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60698B70(int a1)
{
  unsigned int v2; // r4
  int v3; // r8
  int v4; // r9
  int v5; // r0

  v2 = FIELD_U32(a1, 20);
  v3 = FIELD_U8(a1, 24);
  v4 = ((int (__fastcall *)(int, unsigned int, unsigned int))loc_60585214)(dword_60CAF15C, HIBYTE(v2), v2 & 0xF);
  v5 = sub_6000614C(dword_60C7B3F8, HIBYTE(v2), v2 & 0xF);
  sub_60585110(dword_60CAF15C, HIBYTE(v2), v5 + v4, (unsigned __int8)v2 >> 4, v3, v2 & 0xF);
  FIELD_U8(a1, 19) = 1;
  return 2;
}
