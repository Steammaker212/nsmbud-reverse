/* aglenv_ref
 * address: 0x6092427C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall aglenv_ref(sead_IDisposer *a1)
{
  _DWORD v3[6]; // [sp+0h] [bp-18h] BYREF

  sub_60923B90(a1);
  sub_60940BC4(&FIELD_U32(a1 + (1) * 16, 0xC));
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "aglenv";
  ((void (__fastcall *)(int *, _DWORD *, _DWORD))param_root_ref)(&FIELD_U32(a1 + (5) * 16, 0x8), v3, 0);
  FIELD_U32(a1, 0x0) = (int)off_60C5D920;
  FIELD_U32(a1 + (1) * 16, 0xC) = (int)off_60C5D954;
  FIELD_U32(a1 + (5) * 16, 0x8) = (int)off_60C5D97C;
  FIELD_U32(a1 + (30) * 16, 0x4) = 0;
  FIELD_U32(a1 + (30) * 16, 0x8) = 0;
  FIELD_U32(a1 + (30) * 16, 0xC) = 0;
  FIELD_U32(a1 + (31) * 16, 0x0) = 0;
  FIELD_U32(a1 + (31) * 16, 0x4) = 0;
  FIELD_U32(a1 + (31) * 16, 0x8) = 0;
  FIELD_U32(a1 + (31) * 16, 0xC) = 1065353216;
  sead__CriticalSection__ctor(a1 + 32);
  Icon_CIRCLE_GREEN_ref(&FIELD_U32(a1 + (34) * 16, 0x4));
  FIELD_U32(a1 + (48) * 16, 0x0) = 2;
  FIELD_U32(a1 + (48) * 16, 0x4) = 0;
  FIELD_U32(a1 + (48) * 16, 0x8) = 0;
  FIELD_U32(a1 + (48) * 16, 0xC) = 0;
  FIELD_U32(a1 + (49) * 16, 0x0) = 0;
  FIELD_U32(a1 + (49) * 16, 0x4) = 0;
  FIELD_U32(a1 + (49) * 16, 0x8) = 0;
  FIELD_U32(a1 + (49) * 16, 0xC) = 0;
  return a1;
}
