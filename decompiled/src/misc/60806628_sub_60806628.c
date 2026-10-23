/* sub_60806628
 * address: 0x60806628   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60806628(int a1)
{
  nn__os__FinalizeMutex(a1 + 1488);
  nn__os__FinalizeMutex(a1 + 1468);
  nn__os__FinalizeMutex(a1 + 1448);
  nn__os__FinalizeMutex(a1 + 1428);
  nn__os__FinalizeMutex(a1 + 1408);
  nn__os__FinalizeMutex(a1 + 1240);
  FIELD_U32(a1, 1084) = off_60C5B6CC;
  nn__os__FinalizeMutex(a1 + 1208);
  nn__os__FinalizeMutex(a1 + 1188);
  FIELD_U32(a1, 1084) = &off_60C5B694;
  nn__os__FinalizeMutex(a1 + 1088);
  FIELD_U32(a1, 936) = off_60C5B6CC;
  nn__os__FinalizeMutex(a1 + 1060);
  nn__os__FinalizeMutex(a1 + 1040);
  FIELD_U32(a1, 936) = &off_60C5B694;
  nn__os__FinalizeMutex(a1 + 940);
  FIELD_U32(a1, 788) = off_60C5B6CC;
  nn__os__FinalizeMutex(a1 + 912);
  nn__os__FinalizeMutex(a1 + 892);
  FIELD_U32(a1, 788) = &off_60C5B694;
  nn__os__FinalizeMutex(a1 + 792);
  FIELD_U32(a1, 740) = &off_60C5B694;
  nn__os__FinalizeMutex(a1 + 744);
  if ( FIELD_U8(a1, 104) )
    nn__os__DestroySystemEvent(a1 + 76);
  return a1;
}
