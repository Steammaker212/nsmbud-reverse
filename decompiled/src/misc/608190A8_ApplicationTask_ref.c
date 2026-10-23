/* ApplicationTask_ref
 * address: 0x608190A8   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ApplicationTask_ref(int a1, int a2)
{
  nn__oe *OperationMode; // r0
  bool v4; // r1

  CalculateTask2_ctor((sead_IDisposer *)a1, a2, (int)"ApplicationTask");
  *(_DWORD *)a1 = off_60C2A208;
  FIELD_U8(a1, 192) = 0;
  FIELD_U32(a1, 200) = 0;
  FIELD_U32(a1, 204) = 0;
  OperationMode = (nn__oe *)nn__oe__GetOperationMode((nn__oe *)off_60C2A208);
  FIELD_U32(a1, 208) = OperationMode;
  FIELD_U32(a1, 212) = nn__oe__GetPerformanceMode(OperationMode);
  FIELD_U32(a1, 220) = 1;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 224));
  FIELD_U32(a1, 240) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 244) = &byte_60ABC94D;
  FIELD_U32(a1, 224) = off_60C5E9A4;
  FIELD_U32(a1, 248) = 0;
  FIELD_U32(a1, 252) = 0;
  FIELD_U32(a1, 256) = 1;
  FIELD_U32(a1, 264) = 0;
  FIELD_U32(a1, 268) = 0;
  FIELD_U32(a1, 272) = 0;
  FIELD_U32(a1, 260) = off_60BD8394;
  nn__oe__SetResumeNotificationEnabled((nn__oe *)1, v4);
  FIELD_U32(a1, 216) = 0;
  return a1;
}
