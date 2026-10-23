/* sub_6034A3DC
 * address: 0x6034A3DC   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034A3DC(int a1)
{
  int v2; // r1
  int result; // r0

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  sub_6015907C((ActiveCollider *)(a1 + 188), 160);
  FIELD_U32(a1, 328) = 9;
  FIELD_U32(a1, 96) = -1065353216;
  v2 = FIELD_U32(a1, 6352);
  if ( v2 )
  {
    FIELD_U32(a1, 6356) = v2;
    FIELD_U32(a1, 6352) = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  FIELD_U32(a1, 100) = -1103101952;
  result = FIELD_U32(a1, 120);
  FIELD_U32(a1, 132) = result;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  return result;
}
