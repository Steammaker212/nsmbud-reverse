/* sinit_KaniboTama
 * address: 0x60311C68   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__cdecl *__cdecl sinit_KaniboTama())()
{
  sead__SafeString profileName; // [sp+10h] [bp-10h] BYREF

  dword_60C932E8 = 0;
  dword_60C932EC = 0;
  dword_60C932F0 = 0;
  profileName.vtable = &sead__SafeStringBase__vtable;
  profileName.cstr = "カニボー玉";
  Profile__ctor(&KaniboTama__sProfile, KaniboTama__ctor, 0x208u, &profileName, 0, 0x226);
  KaniboTama__StateID_Unk1._.id = CurrentStateID + 1;
  KaniboTama__StateID_Unk1._.vtable = &off_60BEA02C;
  LODWORD(KaniboTama__StateID_Unk1.beginFunc) = KaniboTama__beginState_Unk1;
  HIDWORD(KaniboTama__StateID_Unk1.beginFunc) = 0;
  LODWORD(KaniboTama__StateID_Unk1.executeFunc) = KaniboTama__executeState_Unk1;
  HIDWORD(KaniboTama__StateID_Unk1.executeFunc) = 0;
  LODWORD(KaniboTama__StateID_Unk1.endFunc) = KaniboTama__endState_Unk1;
  HIDWORD(KaniboTama__StateID_Unk1.endFunc) = 0;
  KaniboTama__StateID_Unk2._.vtable = &off_60BEA02C;
  KaniboTama__StateID_Unk2._.id = CurrentStateID + 2;
  LODWORD(KaniboTama__StateID_Unk2.beginFunc) = KaniboTama__beginState_Unk2;
  HIDWORD(KaniboTama__StateID_Unk2.beginFunc) = 0;
  LODWORD(KaniboTama__StateID_Unk2.executeFunc) = KaniboTama__executeState_Unk2;
  HIDWORD(KaniboTama__StateID_Unk2.executeFunc) = 0;
  LODWORD(KaniboTama__StateID_Unk2.endFunc) = KaniboTama__endState_Unk2;
  HIDWORD(KaniboTama__StateID_Unk2.endFunc) = 0;
  CurrentStateID += 3;
  KaniboTama__StateID_Unk3._.id = CurrentStateID;
  KaniboTama__StateID_Unk3._.vtable = &off_60BEA02C;
  LODWORD(KaniboTama__StateID_Unk3.beginFunc) = KaniboTama__beginState_Unk3;
  HIDWORD(KaniboTama__StateID_Unk3.beginFunc) = 0;
  LODWORD(KaniboTama__StateID_Unk3.executeFunc) = KaniboTama__executeState_Unk3;
  HIDWORD(KaniboTama__StateID_Unk3.executeFunc) = 0;
  LODWORD(KaniboTama__StateID_Unk3.endFunc) = KaniboTama__endState_Unk3;
  HIDWORD(KaniboTama__StateID_Unk3.endFunc) = 0;
  return (int (__cdecl *)())KaniboTama__endState_Unk3;
}
