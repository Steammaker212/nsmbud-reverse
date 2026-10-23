/* ErrorViewerTask_ref
 * address: 0x6081B398   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ErrorViewerTask_ref(int a1, int a2)
{
  CalculateTask2_ctor((sead_IDisposer *)a1, a2, (int)"ErrorViewerTask");
  *(_DWORD *)a1 = off_60C2A448;
  FIELD_U8(a1, 192) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 196));
  FIELD_U32(a1, 212) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 216) = &byte_60ABC94D;
  FIELD_U32(a1, 196) = off_60C5E9A4;
  FIELD_U32(a1, 220) = 0;
  FIELD_U32(a1, 224) = 0;
  FIELD_U32(a1, 228) = 1;
  FIELD_U32(a1, 236) = 0;
  FIELD_U32(a1, 240) = 0;
  FIELD_U32(a1, 244) = 0;
  FIELD_U32(a1, 232) = off_60BD8394;
  FIELD_U32(a1, 264) = 0;
  FIELD_U8(a1, 268) = 0;
  FIELD_U32(a1, 272) = 0;
  FIELD_U8(a1, 276) = 0;
  FIELD_U32(a1, 280) = -1;
  FIELD_U16(a1, 284) = 257;
  FIELD_U8(a1, 286) = 0;
  sub_6045BF30();
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 692));
  FIELD_U32(a1, 728) = a1 + 744;
  FIELD_U32(a1, 732) = 64;
  FIELD_U32(a1, 736) = 0;
  FIELD_U32(a1, 740) = 0;
  sub_6045BF30();
  FIELD_U32(a1, 1660) = 0;
  return a1;
}
