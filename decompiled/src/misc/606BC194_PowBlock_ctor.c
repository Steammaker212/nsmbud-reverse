/* PowBlock_ctor
 * address: 0x606BC194   size: 300   group: misc
 * sym: # PowBlock_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall PowBlock_ctor(ActorBuildInfo *a1)
{
  int v2; // r4
  float x; // r0
  float y; // r1

  v2 = operator_new(0x1AF0u);
  *(_DWORD *)v2 = PowBlock_vtable;
  sub_605C92C8((StateActor *)v2, a1, v2 + 0x1818, (void *)5);
  *(_DWORD *)v2 = PowBlock_vtable;
  FIELD_U32(v2, 6152) = 0;
  FIELD_U32(v2, 6160) = 0;
  FIELD_U32(v2, 6156) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 0x1818));
  FIELD_U32(v2, 0x1818) = off_60BC30D8;
  x = FIELD_F32(a1, 0x10);
  y = FIELD_F32(a1, 0x14);
  FIELD_F32(v2, 6832) = FIELD_F32(a1, 0x18);
  FIELD_F32(v2, 6828) = y;
  FIELD_F32(v2, 6824) = x;
  FIELD_U32(v2, 6844) = 0;
  FIELD_U32(v2, 6840) = 0;
  FIELD_U32(v2, 6836) = 0;
  sub_6000BAC8((_DWORD *)(v2 + 6848), FIELD_U32(v2, 8));
  FIELD_U32(v2, 6848) = off_60C1B5D4;
  FIELD_U32(v2, 6864) = 1;
  FIELD_U32(v2, 6880) = 2;
  FIELD_U8(v2, 6884) = 0;
  FIELD_U32(v2, 6888) = off_60C1B784;
  FIELD_U32(v2, 6156) = 0;
  FIELD_U32(v2, 6160) = 0;
  return (_DWORD *)v2;
}
