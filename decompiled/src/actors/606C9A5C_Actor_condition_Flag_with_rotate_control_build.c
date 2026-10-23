/* Actor_condition_Flag_with_rotate_control_build
 * address: 0x606C9A5C   size: 132   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_condition_Flag_with_rotate_control_build(ActorBuildInfo *a1)
{
  Actor *v2; // r4

  v2 = (Actor *)operator_new(0x50u);
  Actor__ctor(v2, a1);
  FIELD_U32(v2, 0x0) = (int)off_60C1C78C;
  sub_606B3690(
    (_DWORD *)dword_60CBA43C,
    FIELD_U32(v2, 0x14) & 0xFFFFF000,
    ((unsigned int)FIELD_U32(v2, 0x14) >> 8) & 0xF | FIELD_U32(v2, 0x18) & 0xFF0000,
    FIELD_U8(v2, 0x1C),
    FIELD_U32(a1, 0x10).x,
    FIELD_U32(a1, 0x10).y,
    FIELD_U32(a1, 0x10).z,
    FIELD_U8(a1, 0x21),
    0);
  FIELD_U8(v2, 0x13) = 1;
  return v2;
}
