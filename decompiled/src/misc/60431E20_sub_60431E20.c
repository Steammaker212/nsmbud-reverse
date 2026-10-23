/* sub_60431E20
 * address: 0x60431E20   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60431E20(int a1)
{
  int v2; // r1

  ModelBase_ctor((#90 *)a1);
  *(_DWORD *)a1 = &off_60BFA734;
  FIELD_U32(a1, 16) = off_60BFA810;
  memset((void *)(a1 + 40), 0, 69);
  memset((void *)(a1 + 112), 0, 136);
  FIELD_U32(a1, 248) = 1065353216;
  FIELD_U32(a1, 252) = 0;
  FIELD_U32(a1, 256) = 0;
  FIELD_U32(a1, 260) = 0;
  FIELD_U32(a1, 264) = 0;
  FIELD_U32(a1, 268) = 1065353216;
  FIELD_U32(a1, 272) = 0;
  FIELD_U32(a1, 276) = 0;
  FIELD_U32(a1, 280) = 0;
  FIELD_U32(a1, 284) = 0;
  FIELD_U32(a1, 288) = 1065353216;
  FIELD_U32(a1, 292) = 0;
  FIELD_U32(a1, 304) = 0x3F800000;
  FIELD_U32(a1, 300) = 0x3F800000;
  FIELD_U32(a1, 296) = 0x3F800000;
  FIELD_U8(a1, 308) = 0;
  FIELD_U32(a1, 312) = 3;
  FIELD_U32(a1, 316) = 0;
  FIELD_U32(a1, 320) = 0;
  FIELD_U32(a1, 324) = 0;
  FIELD_U32(a1, 336) = 0;
  FIELD_U32(a1, 332) = 0;
  FIELD_U32(a1, 328) = 0;
  FIELD_U32(a1, 340) = 0x3F800000;
  FIELD_U32(a1, 344) = 0;
  FIELD_U32(a1, 348) = 1;
  memset((void *)(a1 + 352), 0, 0x55u);
  FIELD_U32(a1, 440) = 0;
  FIELD_U32(a1, 444) = 0;
  FIELD_U32(a1, 448) = 0;
  FIELD_U32(a1, 452) = 0;
  sub_6083651C(a1 + 456, v2);
  return a1;
}
