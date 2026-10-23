/* sub_603FDA80
 * address: 0x603FDA80   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FDA80(int a1)
{
  *(_DWORD *)a1 = &off_60BF96F0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U8(a1, 48) = 0;
  FIELD_U32(a1, 60) = &off_60BF9758;
  FIELD_U32(a1, 64) = &off_60BF9768;
  FIELD_U32(a1, 68) = &off_60BF978C;
  FIELD_U32(a1, 72) = a1;
  FIELD_U32(a1, 76) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 80), (StateExecuter *)(a1 + 64), &NullState);
  FIELD_U32(a1, 60) = &off_60BF9748;
  MovingSoundActor_ctor((MovingSoundActor *)(a1 + 96), 0, 1);
  FIELD_U32(a1, 404) = 16;
  FIELD_U32(a1, 408) = 10;
  FIELD_U8(a1, 412) = 0;
  FIELD_U8(a1, 413) = 1;
  FIELD_U32(a1, 96) = off_60BF9700;
  FIELD_U32(a1, 416) = 0;
  return a1;
}
