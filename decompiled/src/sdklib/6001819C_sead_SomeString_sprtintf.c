/* sead_SomeString_sprtintf
 * address: 0x6001819C   size: 144   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sead_SomeString_sprtintf(_DWORD *a1, const char *a2, int a3, int a4)
{
  _DWORD v7[2]; // [sp+18h] [bp-8h] BYREF

  v7[1] = a4;
  v7[0] = a3;
  a1[1] = a1 + 3;
  *a1 = &BufferedSafeStringBase_char_vtable_probably;
  a1[2] = 260;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)a1);
  *(_BYTE *)a1[1] = 0;
  *a1 = &off_60BC05C8;
  sead__BufferedSafeStringBase__formatV(a1, a2, v7);
  return a1;
}
