/* sub_60021018
 * address: 0x60021018   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60021018(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BC1440;
  a1[1] = 0;
  v2 = a1 + 2;
  *v2 = 5;
  v2[1] = 0x4000000;
  v2[2] = 1065353216;
  memset(a1 + 5, 0, 360);
  EffectWrapper_ctor((EffectWrapper *)(a1 + 7));
  a1[7] = off_60BC1450;
  a1[33] = 0;
  *((_BYTE *)a1 + 136) = 0;
  *((_BYTE *)a1 + 137) = 0;
  a1[35] = 0;
  a1[36] = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 37));
  a1[37] = off_60BC1450;
  a1[63] = 0;
  *((_BYTE *)a1 + 256) = 0;
  *((_BYTE *)a1 + 257) = 0;
  a1[65] = 0;
  a1[66] = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 67));
  a1[67] = off_60BC1450;
  a1[93] = 0;
  *((_WORD *)a1 + 188) = 0;
  return a1;
}
