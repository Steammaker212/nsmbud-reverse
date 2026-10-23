/* SkeletalAnim_ctor
 * address: 0x60448610   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SkeletalAnim_ctor(int a1)
{
  int result; // r0

  result = (int)AnimationBase_ctor(a1);
  *(_DWORD *)result = &SkeletalAnim_vtable;
  FIELD_U32(result, 0x30) = 0;
  FIELD_U32(result, 0x2C) = 0;
  FIELD_U32(result, 0x28) = 0;
  FIELD_U32(result, 0x34) = 0x3F800000;
  FIELD_U32(result, 0x38) = dword_6086A208;
  FIELD_U32(result, 0x54) = 0;
  FIELD_U32(result, 0x50) = 0;
  FIELD_U32(result, 0x4C) = 0;
  FIELD_U32(result, 0x48) = 0;
  FIELD_U32(result, 0x44) = 0;
  FIELD_U32(result, 0x40) = 0;
  FIELD_U32(result, 0x3C) = 0;
  FIELD_U32(result, 0x24) = result + 0x28;
  FIELD_U32(result, 0x60) = 0;
  FIELD_U32(result, 0x5C) = 0;
  FIELD_U32(result, 0x58) = 0;
  FIELD_U32(result, 0x20) = off_60C5A8F0;
  FIELD_U32(result, 0x80) = 0;
  FIELD_U32(result, 0x7C) = 0;
  FIELD_U32(result, 0x78) = 0;
  FIELD_U32(result, 0x74) = 0;
  FIELD_U32(result, 0x70) = 0;
  FIELD_U32(result, 0x6C) = 0;
  FIELD_U32(result, 0x68) = 0;
  FIELD_U32(result, 0x64) = 0;
  FIELD_U32(result, 0x84) = -1;
  FIELD_U32(result, 0x88) = 0;
  return result;
}
