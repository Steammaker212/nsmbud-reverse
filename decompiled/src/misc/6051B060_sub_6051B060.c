/* sub_6051B060
 * address: 0x6051B060   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6051B060(int a1)
{
  int *v2; // r1
  int *v3; // r2
  int v4; // r12
  int v5; // r2

  v2 = &dword_60B3B95C;
  v3 = &dword_60B3B960;
  if ( !FIELD_U8(a1, 62514) )
  {
    v3 = (int *)(dword_60CC62E4 + 120);
    v2 = (int *)(dword_60CC62E4 + 116);
  }
  v4 = *v3;
  v5 = FIELD_U32(a1, 62168);
  FIELD_U32(v5, 24) = *v2;
  FIELD_U32(v5, 28) = v4;
  FIELD_U32(v5, 32) = 0;
  FIELD_U8(v5, 64) |= 0x10u;
  sub_60473DE4(*(_DWORD **)(a1 + 4), 0, &dword_60CA8C00, 0);
  return sub_605184C0(a1 + 62552);
}
