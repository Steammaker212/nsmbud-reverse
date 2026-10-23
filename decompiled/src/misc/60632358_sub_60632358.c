/* sub_60632358
 * address: 0x60632358   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60632358()
{
  dword_60CB4248 = 0;
  *(_DWORD *)algn_60CB424C = 0;
  *(_DWORD *)&algn_60CB424C[4] = 16;
  *(_DWORD *)&algn_60CB424C[8] = 0x10000;
  *(_DWORD *)&algn_60CB424C[12] = 0x8000000;
  *(_DWORD *)&algn_60CB424C[16] = 0x200000;
  dword_60CB4260 = 0x100000;
  dword_60CB4264 = 0x800000;
  dword_60CB426C = CurrentStateID + 1;
  dword_60CB4268 = (int)&off_60C127E0;
  dword_60CB4270 = (int)nullsub_4961;
  dword_60CB4274 = 0;
  dword_60CB4278 = (int)sub_6063186C;
  dword_60CB427C = 0;
  dword_60CB4280 = (int)nullsub_4962;
  dword_60CB4284 = 0;
  unk_60CB4288 = &off_60C127E0;
  unk_60CB428C = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60CB42AC = CurrentStateID;
  dword_60CB4290 = (int)nullsub_4963;
  dword_60CB42A8 = (int)&off_60C127E0;
  dword_60CB4294 = 0;
  dword_60CB42B0 = (int)nullsub_4965;
  dword_60CB4298 = (int)sub_6063188C;
  dword_60CB42B4 = 0;
  dword_60CB429C = 0;
  dword_60CB42B8 = (int)sub_6063189C;
  dword_60CB42A0 = (int)nullsub_4964;
  dword_60CB42A4 = 0;
  dword_60CB42BC = 0;
  dword_60CB42C0 = (int)nullsub_4966;
  dword_60CB42C4 = 0;
  return 0;
}
