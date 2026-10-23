/* sub_60418D0C
 * address: 0x60418D0C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60418D0C(_DWORD *a1)
{
  sub_60418DB8();
  a1[655] = off_60BF9C4C;
  a1[659] = &off_60BF9C5C;
  nullsub_124(a1 + 655);
  sead__IDisposer__dtor(a1 + 655);
  sead__CriticalSection__dtor(a1 + 646);
  sead__CriticalSection__dtor(a1 + 500);
  sead__CriticalSection__dtor(a1 + 491);
  nullsub_68(a1 + 118);
  nullsub_1343(a1 + 115);
  nullsub_1342(a1 + 106);
  sub_6092138C(a1 + 82);
  sub_6092138C(a1 + 58);
  nullsub_1346(a1 + 51);
  nullsub_81(a1 + 48);
  nullsub_71(a1 + 16);
  nullsub_1344(a1 + 8);
  return a1;
}
