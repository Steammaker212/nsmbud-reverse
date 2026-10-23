/* ModelWrapper_setup_helper_446E58
 * address: 0x60446E58   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ModelWrapper_setup_helper_446E58(int a1)
{
  int result; // r0

  result = (int)AnimationBase_ctor(a1);
  *(_DWORD *)result = &off_60BFB038;
  FIELD_U32(result, 48) = 0;
  FIELD_U32(result, 44) = 0;
  FIELD_U32(result, 40) = 0;
  FIELD_U32(result, 0x34) = 0x3F800000;
  FIELD_U32(result, 56) = dword_6086A208;
  FIELD_U32(result, 84) = 0;
  FIELD_U32(result, 80) = 0;
  FIELD_U32(result, 76) = 0;
  FIELD_U32(result, 72) = 0;
  FIELD_U32(result, 68) = 0;
  FIELD_U32(result, 64) = 0;
  FIELD_U32(result, 60) = 0;
  FIELD_U32(result, 36) = result + 40;
  FIELD_U32(result, 96) = 0;
  FIELD_U32(result, 92) = 0;
  FIELD_U32(result, 88) = 0;
  FIELD_U32(result, 0x20) = &off_60C5A82C;
  FIELD_U32(result, 0x7C) = 0;
  FIELD_U32(result, 0x78) = 0;
  FIELD_U32(result, 0x74) = 0;
  FIELD_U32(result, 0x70) = 0;
  FIELD_U32(result, 0x6C) = 0;
  FIELD_U32(result, 0x68) = 0;
  FIELD_U32(result, 0x64) = 0;
  FIELD_U32(result, 0x80) = -1;
  FIELD_U32(result, 0x84) = 0;
  return result;
}
