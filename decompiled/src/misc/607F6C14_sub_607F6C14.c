/* sub_607F6C14
 * address: 0x607F6C14   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F6C14(int a1, int a2)
{
  CourseLoadFaderTask_ref(a1, a2);
  *(_DWORD *)a1 = off_60C278B0;
  sub_60519160(a1 + 568);
  FIELD_U32(a1, 18872) = 5;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 18876));
  FIELD_U32(a1, 18892) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 18896) = &byte_60ABC94D;
  FIELD_U32(a1, 18876) = off_60C5E9A4;
  FIELD_U32(a1, 18900) = 0;
  FIELD_U32(a1, 18904) = 0;
  FIELD_U32(a1, 18908) = 1;
  FIELD_U32(a1, 18916) = 0;
  FIELD_U32(a1, 18920) = 0;
  FIELD_U32(a1, 18924) = 0;
  FIELD_U32(a1, 18912) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 18944));
  FIELD_U32(a1, 18960) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 18964) = &byte_60ABC94D;
  FIELD_U32(a1, 18944) = off_60C5E9A4;
  FIELD_U32(a1, 18968) = 0;
  FIELD_U32(a1, 18972) = 0;
  FIELD_U32(a1, 18976) = 1;
  FIELD_U32(a1, 18984) = 0;
  FIELD_U32(a1, 18988) = 0;
  FIELD_U32(a1, 18992) = 0;
  FIELD_U32(a1, 18980) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 19012));
  FIELD_U32(a1, 19028) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 19032) = &byte_60ABC94D;
  FIELD_U32(a1, 19012) = off_60C5E9A4;
  FIELD_U32(a1, 19036) = 0;
  FIELD_U32(a1, 19040) = 0;
  FIELD_U32(a1, 19044) = 1;
  FIELD_U32(a1, 19052) = 0;
  FIELD_U32(a1, 19056) = 0;
  FIELD_U32(a1, 19060) = 0;
  FIELD_U32(a1, 19048) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 19080));
  FIELD_U32(a1, 19096) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 19100) = &byte_60ABC94D;
  FIELD_U32(a1, 19080) = off_60C5E9A4;
  FIELD_U32(a1, 19104) = 0;
  FIELD_U32(a1, 19108) = 0;
  FIELD_U32(a1, 19112) = 1;
  FIELD_U32(a1, 19120) = 0;
  FIELD_U32(a1, 19124) = 0;
  FIELD_U32(a1, 19128) = 0;
  FIELD_U32(a1, 19116) = off_60BD8394;
  sub_608EC968(a1, 1000, 90, 1000);
  return a1;
}
