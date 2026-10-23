/* registerProfile_rutokuLift_sky_for_653800
 * address: 0x60653800   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_rutokuLift_sky_for_653800()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB631C = (int)&sead__SafeStringBase__vtable;
  unk_60CB6320 = "joint9";
  unk_60CB6324 = &sead__SafeStringBase__vtable;
  dword_60CB6328 = (int)"joint8";
  dword_60CB632C = (int)&sead__SafeStringBase__vtable;
  dword_60CB6330 = (int)"joint7";
  dword_60CB6334 = (int)&sead__SafeStringBase__vtable;
  dword_60CB6338 = (int)"joint6";
  dword_60CB633C = (int)&sead__SafeStringBase__vtable;
  dword_60CB6340 = (int)"joint5";
  dword_60CB6344 = (int)&sead__SafeStringBase__vtable;
  dword_60CB6348 = (int)"joint4";
  dword_60CB634C = (int)&sead__SafeStringBase__vtable;
  dword_60CB6350 = (int)"joint3";
  dword_60CB6354 = (int)&sead__SafeStringBase__vtable;
  dword_60CB6358 = (int)"joint2";
  dword_60CB635C = (int)&sead__SafeStringBase__vtable;
  dword_60CB6360 = (int)"joint1";
  sub_60000288();
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD5794;
  Profile__ctor(&stru_60CB6364, Actor_rutokuLift_sky_for_build, 0x101u, &v0, &stru_60B076C0, 2);
}
