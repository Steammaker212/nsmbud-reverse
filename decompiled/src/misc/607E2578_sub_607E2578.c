/* sub_607E2578
 * address: 0x607E2578   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_607E2578()
{
  dword_60CC59A4 = 0;
  dword_60CC59A8 = 0;
  dword_60CC59AC = 0;
  dword_60CC59B4 = CurrentStateID + 1;
  dword_60CC59B0 = (int)&off_60C26890;
  dword_60CC59B8 = (int)STRM_BGM_MULTI_FAIL_ref;
  dword_60CC59BC = 0;
  dword_60CC59C0 = (int)sub_607E1B70;
  dword_60CC59C4 = 0;
  dword_60CC59C8 = (int)nullsub_5508;
  dword_60CC59CC = 0;
  CurrentStateID += 2;
  dword_60CC59D4 = CurrentStateID;
  dword_60CC59D0 = (int)&off_60C26890;
  dword_60CC59D8 = (int)nullsub_5509;
  dword_60CC59DC = 0;
  dword_60CC59E0 = (int)nullsub_5510;
  dword_60CC59E4 = 0;
  dword_60CC59E8 = (int)nullsub_5511;
  dword_60CC59EC = 0;
  return 0;
}
