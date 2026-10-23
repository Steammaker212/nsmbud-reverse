/* kuribo_ref_33BA20
 * address: 0x6033BA20   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int kuribo_ref_33BA20()
{
  dword_60C94464 = 0;
  dword_60C94468 = 0;
  dword_60C9446C = 0;
  dword_60C94474 = CurrentStateID + 1;
  dword_60C94478 = 684;
  dword_60C9447C = 1;
  dword_60C94480 = 688;
  dword_60C94484 = 1;
  dword_60C94488 = 692;
  dword_60C9448C = 1;
  dword_60C94470 = (int)&off_60BED40C;
  dword_60C94490 = (int)&NullState;
  dword_60C944A0 = 1;
  dword_60C944A4 = 700;
  dword_60C944A8 = 1;
  dword_60C944AC = 704;
  dword_60C944B0 = 1;
  dword_60C94494 = (int)&off_60BED40C;
  *(_DWORD *)algn_60C94498 = CurrentStateID + 2;
  *(_DWORD *)&algn_60C94498[4] = 696;
  dword_60C944B4 = (int)&NullState;
  dword_60C944C4 = 1;
  dword_60C944C8 = 712;
  dword_60C944CC = 1;
  dword_60C944D0 = 716;
  dword_60C944D4 = 1;
  dword_60C944B8 = (int)&off_60BED40C;
  unk_60C944BC = CurrentStateID + 3;
  unk_60C944C0 = 708;
  dword_60C944D8 = (int)&NullState;
  dword_60C944E8 = 1;
  dword_60C944EC = 724;
  dword_60C944F0 = 1;
  dword_60C944F4 = 728;
  dword_60C944F8 = 1;
  dword_60C944DC = (int)&off_60BED40C;
  unk_60C944E0 = CurrentStateID + 4;
  unk_60C944E4 = 720;
  dword_60C944FC = (int)&NullState;
  unk_60C94504 = CurrentStateID + 5;
  unk_60C94508 = 504;
  dword_60C9450C = 1;
  dword_60C94510 = 508;
  dword_60C94514 = 1;
  dword_60C94518 = 512;
  dword_60C9451C = 1;
  dword_60C94500 = (int)&off_60BED40C;
  dword_60C94520 = (int)&stru_60C907A0;
  CurrentStateID += 6;
  *(_DWORD *)algn_60C94528 = CurrentStateID;
  *(_DWORD *)&algn_60C94528[4] = 456;
  dword_60C94530 = 1;
  dword_60C94534 = 460;
  dword_60C94538 = 1;
  dword_60C9453C = 464;
  dword_60C94540 = 1;
  dword_60C94524 = (int)&off_60BED40C;
  dword_60C94544 = (int)&stru_60C90710;
  dword_60C94548 = (int)&sead__SafeStringBase__vtable;
  dword_60C9454C = (int)"kuribo";
  dword_60C94550 = (int)&sead__SafeStringBase__vtable;
  dword_60C94554 = (int)"walk";
  return sub_60000288();
}
