/* wing_pata_ref
 * address: 0x60365F94   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *wing_pata_ref()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C95A2C = 0;
  dword_60C95A30 = 0;
  dword_60C95A34 = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC51F1;
  Profile__ctor(&stru_60C9595C, Actor_gurupupatapata_build, 0x203u, v1, &stru_60B00248, 18);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC51FE;
  Profile__ctor(&stru_60C95974, Actor_gurupupatapata_build, 0x204u, v1, &stru_60B0026C, 18);
  dword_60C95990 = CurrentStateID + 1;
  dword_60C9598C = (int)&off_60BF000C;
  dword_60C95994 = (int)sub_60364320;
  dword_60C95998 = 0;
  dword_60C9599C = (int)&loc_6036446C;
  dword_60C959A0 = 0;
  dword_60C959A4 = (int)sub_60364720;
  dword_60C959A8 = 0;
  dword_60C959AC = (int)&off_60BF000C;
  unk_60C959B0 = CurrentStateID + 2;
  dword_60C959B4 = (int)sub_60364754;
  dword_60C959B8 = 0;
  dword_60C959BC = (int)&loc_60364898;
  dword_60C959C0 = 0;
  dword_60C959C4 = (int)sub_60364BB4;
  dword_60C959C8 = 0;
  dword_60C959CC = (int)&off_60BF000C;
  unk_60C959D0 = CurrentStateID + 3;
  CurrentStateID += 4;
  dword_60C959F0 = CurrentStateID;
  dword_60C959EC = (int)&off_60BF000C;
  dword_60C959D4 = (int)sub_60364BE8;
  dword_60C959D8 = 0;
  dword_60C959F4 = (int)sub_60364F00;
  dword_60C959F8 = 0;
  dword_60C959DC = (int)&loc_60364D14;
  dword_60C959E0 = 0;
  dword_60C959FC = (int)&loc_60364F1C;
  dword_60C95A00 = 0;
  dword_60C959E4 = (int)nullsub_3418;
  dword_60C959E8 = 0;
  dword_60C95A04 = (int)nullsub_3419;
  dword_60C95A08 = 0;
  dword_60C95A10 = 0x40000000;
  *(_DWORD *)algn_60C95A14 = &sead__SafeStringBase__vtable;
  dword_60C95A18 = (int)"wing";
  dword_60C95A1C = (int)&sead__SafeStringBase__vtable;
  dword_60C95A20 = (int)"wing";
  dword_60C95A24 = (int)&sead__SafeStringBase__vtable;
  dword_60C95A28 = (int)"wing_pata";
  return "wing_pata";
}
