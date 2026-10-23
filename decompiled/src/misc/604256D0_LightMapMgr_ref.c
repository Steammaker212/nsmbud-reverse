/* LightMapMgr_ref
 * address: 0x604256D0   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LightMapMgr_ref(int a1, int a2)
{
  CalculateTask2_ctor((sead_IDisposer *)a1, a2, (int)"LightMapMgr");
  *(_DWORD *)a1 = off_60BFA3A4;
  FIELD_U8(a1, 192) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 6760));
  FIELD_U32(a1, 6776) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 6780) = &byte_60ABC94D;
  FIELD_U32(a1, 6760) = off_60C5E9A4;
  FIELD_U32(a1, 6784) = 0;
  FIELD_U32(a1, 6788) = 0;
  FIELD_U32(a1, 6792) = 1;
  FIELD_U32(a1, 6800) = 0;
  FIELD_U32(a1, 6804) = 0;
  FIELD_U32(a1, 6808) = 0;
  FIELD_U32(a1, 6796) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 6828));
  FIELD_U32(a1, 6844) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 6848) = &byte_60ABC94D;
  FIELD_U32(a1, 6828) = off_60C5E9A4;
  FIELD_U32(a1, 6852) = 0;
  FIELD_U32(a1, 6856) = 0;
  FIELD_U32(a1, 6860) = 1;
  FIELD_U32(a1, 6868) = 0;
  FIELD_U32(a1, 6872) = 0;
  FIELD_U32(a1, 6876) = 0;
  FIELD_U32(a1, 6864) = off_60BD8394;
  sub_60959CA8(a1 + 6896);
  FIELD_U32(a1, 17136) = off_60BFA410;
  aglenv_ref(a1 + 17144);
  FIELD_U8(a1, 17944) = 0;
  FIELD_U32(a1, 17948) = 0;
  FIELD_U32(a1, 17952) = 0;
  FIELD_U32(a1, 18056) = 0;
  FIELD_U32(a1, 18060) = 0;
  FIELD_U8(a1, 18064) = 1;
  memset((void *)(a1 + 17956), 255, 0x64u);
  return a1;
}
