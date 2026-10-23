/* sub_6081A0C0
 * address: 0x6081A0C0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6081A0C0(_DWORD *a1, int a2)
{
  hostio_ref();
  *a1 = off_60C2A2F8;
  a1[24] = a1 + 26;
  a1[23] = &BufferedSafeStringBase_char_vtable_probably;
  a1[25] = 260;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(a1 + 23));
  *(_BYTE *)a1[24] = 0;
  a1[23] = &off_60BF9688;
  sub_608E3620(a1, a1 + 23, a2);
  return a1;
}
