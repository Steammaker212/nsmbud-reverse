/* CourseTask_ref
 * address: 0x603F80C8   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CourseTask_ref(int a1, int a2)
{
  sead_IDisposer *v3; // r0

  CalculateTask2_ctor((sead_IDisposer *)a1, a2, (int)"CourseTask");
  *(_DWORD *)a1 = off_60BF9590;
  FIELD_U8(a1, 192) = 0;
  FIELD_U8(a1, 193) = 0;
  memset((void *)(a1 + 196), 0, 76);
  sub_603FC8C4(a1 + 272);
  FIELD_U32(a1, 912) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 916));
  FIELD_U32(a1, 932) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 936) = &byte_60ABC94D;
  FIELD_U32(a1, 916) = off_60C5E9A4;
  FIELD_U32(a1, 940) = 0;
  FIELD_U32(a1, 944) = 0;
  FIELD_U32(a1, 948) = 1;
  FIELD_U32(a1, 956) = 0;
  FIELD_U32(a1, 960) = 0;
  FIELD_U32(a1, 964) = 0;
  FIELD_U32(a1, 952) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 984));
  FIELD_U32(a1, 1000) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 1004) = &byte_60ABC94D;
  FIELD_U32(a1, 984) = off_60C5E9A4;
  FIELD_U32(a1, 1008) = 0;
  FIELD_U32(a1, 1012) = 0;
  FIELD_U32(a1, 1016) = 1;
  FIELD_U32(a1, 1024) = 0;
  FIELD_U32(a1, 1028) = 0;
  FIELD_U32(a1, 1032) = 0;
  FIELD_U32(a1, 1020) = off_60BD8394;
  FIELD_U32(a1, 1052) = 0;
  v3 = sead_IDisposer_ctor((sead_IDisposer *)(a1 + 1056));
  FIELD_U32(a1, 1056) = off_60BF9614;
  FIELD_U32(a1, 1072) = 0;
  FIELD_U32(a1, 1076) = 0;
  FIELD_U32(a1, 1080) = v3;
  FIELD_U32(a1, 1084) = 0;
  FIELD_U8(a1, 1112) = 0;
  FIELD_U32(a1, 1096) = a1;
  FIELD_U32(a1, 1100) = sub_603F8264;
  FIELD_U32(a1, 1104) = 0;
  FIELD_U32(a1, 1092) = off_60BF9624;
  FIELD_U32(a1, 1088) = a1 + 1092;
  sub_6090C6DC(a1 + 1116);
  sub_6090A654((_DWORD *)(a1 + 1288));
  FIELD_U32(a1, 1376) = 0;
  FIELD_U8(a1, 1380) = 0;
  FIELD_U32(a1, 1384) = -1;
  FIELD_U8(a1, 1388) = 0;
  FIELD_U32(a1, 1392) = 0;
  FIELD_U16(a1, 1396) = 0;
  return a1;
}
