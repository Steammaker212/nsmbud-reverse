/* sub_60574D3C
 * address: 0x60574D3C   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60574D3C(int a1, _BYTE *a2)
{
  int v3; // r4
  unsigned __int8 *v4; // r6
  char v5; // r12
  int v6; // r0
  bool v7; // zf

  v3 = FIELD_U32(a1, 144);
  v4 = (unsigned __int8 *)(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a2 + 32))(a2);
  v6 = v4[533];
  v7 = v6 == 3;
  if ( v6 != 3 )
    v7 = v6 == 0;
  if ( v7 )
  {
    if ( ((unsigned int)dword_60CAEB00 & ~(1616334208 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60CAEB00) )
    {
      dword_60CAEAFC = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60CAEB00);
    }
    if ( v3
      && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CAEAFC) == 1
      && ((*(_BYTE *)((*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v4 + 80))(v4) + 2552) & 0x40) != 0
       || (*(_BYTE *)((*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v4 + 80))(v4) + 2557) & 0x80) != 0) )
    {
      FIELD_U8(v3, 6820) = 1;
    }
  }
  if ( ((unsigned int)dword_60CAEB00 & ~(1616334392 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60CAEB00) )
  {
    dword_60CAEAFC = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60CAEB00);
  }
  if ( v3
    && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CAEAFC) == 1
    && FIELD_U32(v3, 6824) == 1
    && (a2[2534] & 1) != 0
    && (a2[2542] & 1) != 0 )
  {
    FIELD_U8(v3, 6820) = 1;
  }
}
