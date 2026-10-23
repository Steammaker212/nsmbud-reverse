/* sub_600D23BC
 * address: 0x600D23BC   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *sub_600D23BC()
{
  dword_60C841FC = 0;
  dword_60C84200 = 0;
  dword_60C84204 = 0;
  dword_60C8420C = CurrentStateID + 1;
  dword_60C84210 = 824;
  dword_60C84214 = 1;
  dword_60C84218 = 828;
  dword_60C8421C = 1;
  dword_60C84220 = 832;
  dword_60C84224 = 1;
  dword_60C84208 = (int)&off_60BCB8E0;
  dword_60C84228 = (int)&NullState;
  dword_60C84238 = 1;
  dword_60C8423C = 840;
  dword_60C84240 = 1;
  dword_60C84244 = 844;
  dword_60C84248 = 1;
  dword_60C8422C = (int)&off_60BCB8E0;
  unk_60C84230 = CurrentStateID + 2;
  unk_60C84234 = 836;
  dword_60C8424C = (int)&NullState;
  dword_60C8425C = 1;
  dword_60C84260 = 864;
  dword_60C84264 = 1;
  dword_60C84268 = 868;
  dword_60C8426C = 1;
  unk_60C84250 = &off_60BCB8E0;
  unk_60C84254 = CurrentStateID + 3;
  unk_60C84258 = 860;
  dword_60C84270 = (int)&NullState;
  CurrentStateID += 4;
  *(_DWORD *)algn_60C84278 = CurrentStateID;
  *(_DWORD *)&algn_60C84278[4] = 456;
  dword_60C84280 = 1;
  dword_60C84284 = 460;
  dword_60C84288 = 1;
  dword_60C8428C = 464;
  dword_60C84290 = 1;
  dword_60C84274 = (int)&off_60BCB8E0;
  dword_60C84294 = (int)&stru_60C90710;
  return &stru_60C90710;
}
