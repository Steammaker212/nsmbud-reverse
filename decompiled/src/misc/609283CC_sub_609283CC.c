/* sub_609283CC
 * address: 0x609283CC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *sub_609283CC()
{
  char *result; // r0
  _DWORD v1[2]; // [sp+8h] [bp-18h] BYREF
  _DWORD v2[4]; // [sp+10h] [bp-10h] BYREF

  v2[0] = &sead__SafeStringBase__vtable;
  v1[0] = &sead__SafeStringBase__vtable;
  v2[1] = "Fog";
  v1[1] = &unk_60AEB014;
  result = sub_60923388(v2, v1, (int)sub_609283B0, 1, 272);
  dword_60CD09BC = (int)result;
  return result;
}
