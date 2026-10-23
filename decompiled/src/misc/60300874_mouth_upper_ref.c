/* mouth_upper_ref
 * address: 0x60300874   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *mouth_upper_ref()
{
  dword_60C92E28 = 0;
  dword_60C92E2C = 0;
  dword_60C92E30 = 0;
  dword_60C92E10 = (int)&sead__SafeStringBase__vtable;
  dword_60C92E14 = (int)"pakkun";
  dword_60C92E18 = (int)&sead__SafeStringBase__vtable;
  dword_60C92E1C = (int)"head";
  dword_60C92E20 = (int)&sead__SafeStringBase__vtable;
  dword_60C92E24 = (int)"mouth_upper";
  dword_60C92C64 = CurrentStateID + 1;
  dword_60C92C68 = 504;
  dword_60C92C6C = 1;
  dword_60C92C70 = 508;
  dword_60C92C74 = 1;
  dword_60C92C78 = 512;
  dword_60C92C7C = 1;
  dword_60C92C60 = (int)&off_60BE8EA8;
  dword_60C92C80 = (int)&stru_60C907A0;
  *(_DWORD *)algn_60C92C88 = CurrentStateID + 2;
  *(_DWORD *)&algn_60C92C88[4] = 456;
  dword_60C92C90 = 1;
  dword_60C92C94 = 460;
  dword_60C92C98 = 1;
  dword_60C92C9C = 464;
  dword_60C92CA0 = 1;
  dword_60C92C84 = (int)&off_60BE8EA8;
  dword_60C92CA4 = (int)&stru_60C90710;
  unk_60C92CAC = CurrentStateID + 3;
  unk_60C92CB0 = 664;
  dword_60C92CB4 = 1;
  dword_60C92CB8 = 668;
  dword_60C92CBC = 1;
  dword_60C92CC0 = 672;
  dword_60C92CC4 = 1;
  dword_60C92CA8 = (int)&off_60BE8EA8;
  dword_60C92CC8 = (int)&NullState;
  dword_60C92CD8 = 1;
  dword_60C92CDC = 680;
  dword_60C92CE0 = 1;
  dword_60C92CE4 = 684;
  dword_60C92CE8 = 1;
  unk_60C92CCC = &off_60BE8EA8;
  unk_60C92CD0 = CurrentStateID + 4;
  unk_60C92CD4 = 676;
  dword_60C92CEC = (int)&NullState;
  dword_60C92CFC = 1;
  dword_60C92D00 = 692;
  dword_60C92D04 = 1;
  dword_60C92D08 = 696;
  dword_60C92D0C = 1;
  unk_60C92CF0 = &off_60BE8EA8;
  unk_60C92CF4 = CurrentStateID + 5;
  unk_60C92CF8 = 688;
  dword_60C92D10 = (int)&NullState;
  CurrentStateID += 6;
  *(_DWORD *)algn_60C92D18 = CurrentStateID;
  *(_DWORD *)&algn_60C92D18[4] = 564;
  dword_60C92D20 = 1;
  dword_60C92D24 = 568;
  dword_60C92D28 = 1;
  dword_60C92D2C = 572;
  dword_60C92D30 = 1;
  dword_60C92D14 = (int)&off_60BE8EA8;
  dword_60C92D34 = (int)&stru_60C90950;
  return &stru_60C90950;
}
