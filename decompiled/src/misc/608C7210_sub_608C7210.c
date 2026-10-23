/* sub_608C7210
 * address: 0x608C7210   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C7210(int a1, int a2, int a3)
{
  int v4; // r0
  int result; // r0
  char v6; // r1

  FIELD_U32(a1, 368) = 0;
  FIELD_U32(a1, 356) = a2;
  FIELD_U32(a1, 360) = a3;
  FIELD_U8(a1, 176) = 0;
  FIELD_U8(a1, 179) = 1;
  FIELD_U8(a1, 180) = 0;
  FIELD_U8(a1, 181) = 0;
  FIELD_U8(a1, 840) = 0;
  FIELD_U32(a1, 832) = 0;
  FIELD_U32(a1, 836) = 0;
  FIELD_U32(a1, 332) = 0;
  FIELD_U8(a1, 344) = 60;
  FIELD_U8(a1, 345) = 60;
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 0;
  FIELD_U32(a1, 312) = 1065353216;
  FIELD_U32(a1, 324) = 0;
  FIELD_U32(a1, 328) = 1065353216;
  FIELD_U32(a1, 184) = 1065353216;
  FIELD_U32(a1, 288) = 0;
  FIELD_U32(a1, 188) = 1065353216;
  FIELD_U32(a1, 192) = 0;
  FIELD_U8(a1, 182) = 0;
  FIELD_U32(a1, 196) = 0;
  FIELD_U32(a1, 200) = 1;
  FIELD_U32(a1, 204) = 1065353216;
  FIELD_U32(a1, 208) = 0;
  FIELD_U32(a1, 280) = 0;
  FIELD_U32(a1, 276) = 0;
  FIELD_U32(a1, 272) = 0;
  FIELD_U32(a1, 268) = 0;
  FIELD_U32(a1, 264) = 0;
  FIELD_U32(a1, 260) = 0;
  v4 = FIELD_U32(a1, 284);
  if ( v4 )
    sub_608B0E58(v4);
  FIELD_U8(a1, 316) = -1;
  FIELD_U8(a1, 317) = -1;
  FIELD_U16(a1, 318) = 0;
  FIELD_U16(a1, 320) = 0;
  FIELD_U32(a1, 292) = 0;
  FIELD_U32(a1, 300) = 0;
  FIELD_U32(a1, 296) = 0;
  sub_608C5620(a1 + 16, -90.4);
  sub_608C5A34(a1 + 44);
  FIELD_U8(a1, 172) = -1;
  sub_608C5A34(a1 + 76);
  FIELD_U8(a1, 173) = -1;
  sub_608C5A34(a1 + 108);
  FIELD_U8(a1, 174) = -1;
  sub_608C5A34(a1 + 140);
  FIELD_U8(a1, 175) = -1;
  FIELD_U32(a1, 336) = 0;
  FIELD_U32(a1, 340) = 0;
  FIELD_U8(a1, 346) = 0;
  result = *((_DWORD *)sub_608065A0() + 34);
  v6 = result;
  if ( result != 1 )
    v6 = 0;
  if ( !result )
    v6 = 2;
  FIELD_U8(a1, 347) = v6;
  FIELD_U32(a1, 348) = 1065353216;
  FIELD_U32(a1, 352) = 1065353216;
  return result;
}
