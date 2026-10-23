/* agl_default_ref
 * address: 0x60967CD0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall agl_default_ref(int result)
{
  char *v1; // r2

  *(_DWORD *)result = &sead__SafeStringBase__vtable;
  FIELD_U32(result, 4) = off_60C5CB34;
  FIELD_U32(result, 8) = &sead__SafeStringBase__vtable;
  v1 = off_60C5CB34;
  FIELD_U32(result, 12) = off_60C5CB34;
  FIELD_U32(result, 16) = &sead__SafeStringBase__vtable;
  FIELD_U32(result, 20) = "agl_default";
  FIELD_U32(result, 24) = &sead__SafeStringBase__vtable;
  FIELD_U32(result, 28) = v1;
  FIELD_U32(result, 32) = 0;
  FIELD_U32(result, 36) = 32;
  FIELD_U8(result, 40) = 0;
  FIELD_U32(result, 44) = 0;
  return result;
}
