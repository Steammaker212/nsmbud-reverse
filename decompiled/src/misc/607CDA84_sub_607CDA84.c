/* sub_607CDA84
 * address: 0x607CDA84   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607CDA84(int a1, int a2)
{
  char v2; // r12
  int v5; // r4
  bool v6; // zf
  char v7; // r12
  int v8; // r8

  v5 = FIELD_U32(a1, 64);
  if ( ((unsigned int)&dword_60C7B408 & ~(1618795172 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( !v5 || (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B404) != 1 || sub_60766708(v5) )
    return 0;
  v6 = (FIELD_U8(v5, 1218) & 0x20) == 0;
  if ( (FIELD_U8(v5, 1218) & 0x20) == 0 )
    v6 = (FIELD_U8(v5, 1234) & 0x10) == 0;
  if ( !v6 || sub_607781EC(dword_60CBFA90) )
    return 0;
  v8 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1618795356 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( !v8
    || (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B378) != 1
    || FIELD_F32(v5, 124) > 0.0
    || sub_6076598C(v5, a1, a2) != 1 )
  {
    return 0;
  }
  if ( (FIELD_U8(v8, 1207) & 2) == 0 || FIELD_F32(v8, 124) <= 0.0 )
    return ((int (__fastcall *)(int, int))loc_60770484)(v5, v8) != 0;
  ((void (__fastcall *)(int, int, float))loc_60765E78)(v5, 1, FIELD_F32(a1, 240));
  sub_60765DD0((float *)v8, v5);
  return 1;
}
