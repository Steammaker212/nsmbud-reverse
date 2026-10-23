/* sub_60629914
 * address: 0x60629914   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60629914(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r6

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)dword_60CB3D88 & ~(1617074484 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CB3D88) )
  {
    dword_60CB3D84 = (int)&off_60BDE36C;
    _cxa_guard_release(dword_60CB3D88);
  }
  if ( v5 )
  {
    if ( (**v5)(v5, &dword_60CB3D84) == 1 )
      sub_606299C8(v5, a1, a2);
  }
}
