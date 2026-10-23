/* sub_6017D524
 * address: 0x6017D524   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *sub_6017D524(_DWORD *a1, const char *a2, ...)
{
  va_list va; // [sp+18h] [bp-8h] BYREF

  va_start(va, a2);
  a1[1] = a1 + 3;
  *a1 = &BufferedSafeStringBase_char_vtable_probably;
  a1[2] = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)a1);
  *(_BYTE *)a1[1] = 0;
  *a1 = &off_60BD50D0;
  sead__BufferedSafeStringBase__formatV(a1, a2, va);
  return a1;
}
