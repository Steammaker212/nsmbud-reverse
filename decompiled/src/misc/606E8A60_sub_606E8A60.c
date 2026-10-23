/* sub_606E8A60
 * address: 0x606E8A60   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_606E8A60(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60C1FC00;
  if ( (_DWORD *)dword_60CBBFFC == a1 )
  {
    dword_60CBBFFC = 0;
    v2 = (_DWORD *)dword_60CBC000;
    sub_6045C0A0(dword_60CBC000 + 2268);
    sub_6045C0A0((int)(v2 + 466));
    v2[440] = EffectWrapper_vtable;
    v2 += 440;
    sub_60237560((int)v2);
    sead__IDisposer__dtor(v2);
    dword_60CBC000 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
