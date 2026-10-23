/* sInit_RollingHill
 * address: 0x6060985C   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __cdecl sInit_RollingHill()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3624;
  Profile__ctor(&stru_60CB2BDC, RollingHill_ctor, 0x35u, &v1, &stru_60B063BC, 2);
  RollingHill_typeInfos[0].resourceName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[0].resourceName.cstr = "circle_ground";
  RollingHill_typeInfos[0].modelName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[0].modelName.cstr = "circle_ground_TEST";
  RollingHill_typeInfos[0].size = 0.9;
  RollingHill_typeInfos[0].surfaceType = 0;
  RollingHill_typeInfos[1].resourceName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[1].resourceName.cstr = "circle_ground";
  RollingHill_typeInfos[1].modelName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[1].modelName.cstr = "circle_ground_S";
  RollingHill_typeInfos[1].size = 0.9;
  RollingHill_typeInfos[1].surfaceType = 5;
  RollingHill_typeInfos[2].resourceName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[2].resourceName.cstr = "circle_ground";
  RollingHill_typeInfos[2].modelName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[2].modelName.cstr = "circle_ground_M";
  RollingHill_typeInfos[2].size = 1.6;
  RollingHill_typeInfos[2].surfaceType = 5;
  RollingHill_typeInfos[3].resourceName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[3].resourceName.cstr = "circle_ground";
  RollingHill_typeInfos[3].modelName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[3].modelName.cstr = "circle_ground_L";
  RollingHill_typeInfos[3].size = 2.5;
  RollingHill_typeInfos[3].surfaceType = 5;
  RollingHill_typeInfos[4].resourceName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[4].resourceName.cstr = "circle_ground_chika";
  RollingHill_typeInfos[4].modelName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[4].modelName.cstr = "circle_ground_chika";
  RollingHill_typeInfos[4].size = 3.2;
  RollingHill_typeInfos[4].surfaceType = 0;
  RollingHill_typeInfos[5].resourceName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[5].resourceName.cstr = "circle_ground_koopa";
  RollingHill_typeInfos[5].modelName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[5].modelName.cstr = "circle_ground_koopa_S";
  RollingHill_typeInfos[5].size = 0.5;
  RollingHill_typeInfos[5].surfaceType = 0;
  RollingHill_typeInfos[6].resourceName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[6].resourceName.cstr = "circle_ground_koopa";
  RollingHill_typeInfos[6].modelName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[6].modelName.cstr = "circle_ground_koopa_M";
  RollingHill_typeInfos[6].size = 0.7;
  RollingHill_typeInfos[6].surfaceType = 0;
  RollingHill_typeInfos[7].resourceName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[7].resourceName.cstr = "circle_ground_koopa";
  RollingHill_typeInfos[7].modelName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[7].modelName.cstr = "circle_ground_koopa_L";
  RollingHill_typeInfos[7].size = 1.0;
  RollingHill_typeInfos[7].surfaceType = 0;
  RollingHill_typeInfos[8].resourceName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[8].resourceName.cstr = "circle_ground_sabaku";
  RollingHill_typeInfos[8].modelName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[8].modelName.cstr = "circle_ground_sabaku_S";
  RollingHill_typeInfos[8].size = 0.9;
  RollingHill_typeInfos[8].surfaceType = 4;
  RollingHill_typeInfos[9].resourceName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[9].resourceName.cstr = "circle_ground_kori";
  RollingHill_typeInfos[9].modelName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[9].modelName.cstr = "circle_ground_kori_TEST";
  RollingHill_typeInfos[9].size = 0.9;
  RollingHill_typeInfos[9].surfaceType = 1;
  RollingHill_typeInfos[10].resourceName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[10].resourceName.cstr = "circle_ground_sabaku";
  RollingHill_typeInfos[10].modelName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[10].modelName.cstr = "circle_ground_sabaku_M";
  RollingHill_typeInfos[10].size = 1.5;
  RollingHill_typeInfos[10].surfaceType = 4;
  RollingHill_typeInfos[11].resourceName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[11].resourceName.cstr = "circle_ground_sabaku";
  RollingHill_typeInfos[11].modelName.vtable = &sead__SafeStringBase__vtable;
  RollingHill_typeInfos[11].modelName.cstr = "circle_ground_sabaku_L";
  RollingHill_typeInfos[11].size = 2.2;
  RollingHill_typeInfos[11].surfaceType = 4;
  return sub_60000288();
}
