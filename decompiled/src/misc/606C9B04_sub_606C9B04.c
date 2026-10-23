/* sub_606C9B04
 * address: 0x606C9B04   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall sub_606C9B04(StageActor *a1, ActorBuildInfo *a2)
{
  StageActor__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60C1C7D8;
  sub_606B3690(
    (_DWORD *)dword_60CBA43C,
    FIELD_U32(a1, 0x14) & 0xFFFFF000,
    FIELD_U32(a1, 0x18),
    FIELD_U8(a1, 0x1C),
    FIELD_F32(a2, 0x10),
    FIELD_F32(a2, 0x14),
    FIELD_F32(a2, 0x18),
    FIELD_U8(a2, 0x21),
    1);
  if ( (FIELD_U32(a1, 0x18) & 0xFEu) <= 1 )
    sub_606B3858((_DWORD *)dword_60CBA43C);
  FIELD_U8(a1, 0x13) = 1;
  return a1;
}
