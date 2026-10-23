/* NoName_ref
 * address: 0x6099E774   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall NoName_ref(int a1)
{
  FIELD_U32(a1, 4) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 8) = &byte_60ABC94D;
  *(_DWORD *)a1 = off_60C5EA54;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = 0;
  sub_60907FA4((sead_IDisposer *)(a1 + 24), 1);
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 84) = "NoName";
  FIELD_U32(a1, 96) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 104) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 108) = &byte_60ABC94D;
  FIELD_U32(a1, 64) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 52) = 8;
  FIELD_U32(a1, 56) = 8;
  FIELD_U32(a1, 60) = 8;
  *(_DWORD *)a1 = off_60C60D90;
  FIELD_U32(a1, 112) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  return a1;
}
